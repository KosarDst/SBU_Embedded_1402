#include "Arduino.h"
#include <Arduino_FreeRTOS.h>
// Include semaphore supoport
#include <semphr.h>

// Debug message
const int DEBUG_MODE = 1;

// Motor 1 ports
const int enableL293D = 10;
const int input1L293D = 8;
const int input2L293D = 9;

// Motor 2 ports
const int enable2L293D = 11;
const int IN1_MOTOR2 = 12;
const int input2L293D2 = 13;

// Ultrasonic sensor ports
const int ultrasonic_Trigger = 7;
const int ultrasonic_echo = 6;

// Gas sensor ports
const int input_gasSensor = 0;

// Semaphores
SemaphoreHandle_t Up_Semaphore;
SemaphoreHandle_t Down_semaphore;

// Global variables
int currentGasDensity;
long currentDistance;

// Tasks
void UperTask_M(void *pvParameters);
void LowerTask_M(void *pvParameters);
void GasInputTask(void *pvParameters);
void DistanceInputTask(void *pvParameters);

// Utility functions
int readGasInput();
long readUltrasonicDistance();
void rotate_motor(int EN, int IN1, int IN2, int isForward, int isStop, int speed);
void rotate_whenUper(int isForward, int isStop);
void rotate_whenLower(int isForward, int isStop, int speed);
bool checkstate(int distance, int gasDensity);
void ISR_motors();

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  while (!Serial) {
    // wait for serial port to connect. Needed for native USB, on LEONARDO, MICRO, YUN, and other 32u4 based boards.
  }

  // Motor 1 ports
  pinMode(enableL293D, OUTPUT);
  pinMode(input1L293D, OUTPUT);
  pinMode(input2L293D, OUTPUT);

  // Motor 2 ports
  pinMode(enable2L293D, OUTPUT);
  pinMode(IN1_MOTOR2, OUTPUT);
  pinMode(input2L293D2, OUTPUT);

  // Ultrasonic ports
  pinMode(ultrasonic_Trigger, OUTPUT);
  pinMode(ultrasonic_echo, INPUT);

  // Gas ports
  pinMode(input_gasSensor, INPUT);

  // Create semaphores
  Up_Semaphore = xSemaphoreCreateBinary();
  Down_semaphore = xSemaphoreCreateBinary();
  ISR_motors(); // Give initial permission

  // Initial values
  currentGasDensity = readGasInput();
  currentDistance = readUltrasonicDistance();  

  // Now set up two tasks to run independently.
  xTaskCreate(UperTask_M, "HeadMotor", 128, NULL, 3, NULL);
  xTaskCreate(LowerTask_M, "LegMotor", 128, NULL, 3, NULL);
  xTaskCreate(GasInputTask, "GasInput", 128, NULL, 2, NULL);
  xTaskCreate(DistanceInputTask, "DistanceInput", 128, NULL, 2, NULL);

  // Now the task scheduler, which takes over control of scheduling individual tasks, is automatically started.
}

void loop() {
  // Empty. Things are done in Tasks.
}

void UperTask_M(void *pvParameters) {
  for (;;) {
    if (xSemaphoreTake(Up_Semaphore, portMAX_DELAY) == pdPASS) {
      // Conver safe gas density (0 to 512) to speed between 0 to 255
      int motorSpeed = (currentGasDensity * 255.0) / 512.0;
      rotate_whenLower(true, !checkstate(currentDistance, currentGasDensity), motorSpeed);

      taskYIELD();
    }
  }
}

void LowerTask_M(void *pvParameters) {
  for (;;) {
    if (xSemaphoreTake(Down_semaphore, portMAX_DELAY) == pdPASS) {
      rotate_whenUper(checkstate(currentDistance, currentGasDensity), false);

      taskYIELD();
    }
  }
}

void GasInputTask(void *pvParameters) {
  for (;;) {
    bool lastState = checkstate(currentDistance, currentGasDensity);
    int lastGasDensity = currentGasDensity;
    currentGasDensity = readGasInput();    
    if ((checkstate(currentDistance, currentGasDensity) != lastState)
          || (currentGasDensity != lastGasDensity)) {
      ISR_motors();
    }
    if (DEBUG_MODE) {
      vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    taskYIELD();
  }
}

void DistanceInputTask(void *pvParameters) {
  for (;;) {
    bool lastState = checkstate(currentDistance, currentGasDensity);
    currentDistance = readUltrasonicDistance();    
    if (checkstate(currentDistance, currentGasDensity) != lastState) {
        ISR_motors();
    }
    if (DEBUG_MODE) {
      vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    taskYIELD();
  }
}

void ISR_motors() {
  xSemaphoreGive(Up_Semaphore);
  xSemaphoreGive(Down_semaphore);
}

bool checkstate(int distance, int gasDensity) {
  if (gasDensity > 512 || distance < 100) {
    return false;
  } else {
    return true;
  }
}

int readGasInput() {
  int gasDensity = analogRead(input_gasSensor);
  if (DEBUG_MODE) {
    Serial.print("Gas density: ");
    Serial.println(gasDensity);
  }

  return gasDensity;
}

long readUltrasonicDistance() {
  digitalWrite(ultrasonic_Trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(ultrasonic_Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrasonic_Trigger, LOW);

  long duration = pulseIn(ultrasonic_echo, HIGH); // microseconds
  long distanceSensorValue = duration * 0.0344 / 2;

  if (DEBUG_MODE) {
    Serial.print("Distance to target: ");
    Serial.print(distanceSensorValue);
    Serial.println(" cm");
  }

  return distanceSensorValue;
}

void rotate_motor(int EN, int IN1, int IN2, int isForward, int isStop, int speed) {
  analogWrite(EN, speed); // speed between 0 and 255
  if (isStop == 1)
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  }
  else if (isForward == 1)
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
  }
  else
  {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
  }
}

void rotate_whenUper(int isForward, int isStop) {
  rotate_motor(enableL293D, input1L293D, input2L293D, isForward, isStop, 255);
}

void rotate_whenLower(int isForward, int isStop, int speed) {
  rotate_motor(enable2L293D, IN1_MOTOR2, Iinput2L293D2 isForward, isStop, speed);
}
