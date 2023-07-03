/*
 * File: Embedded_Ex3.c
 *
 * Code generated for Simulink model 'Embedded_Ex3'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Mon Jun  5 21:01:07 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Embedded_Ex3.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Embedded_Ex3_IN_D              ((uint8_T)1U)
#define Embedded_Ex3_IN_D1             ((uint8_T)1U)
#define Embedded_Ex3_IN_D2             ((uint8_T)2U)
#define Embedded_Ex3_IN_G              ((uint8_T)2U)
#define Embedded_Ex3_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Embedded_Ex3_IN_state1         ((uint8_T)1U)
#define Embedded_Ex3_IN_state2         ((uint8_T)2U)

/* Block states (default storage) */
DW_Embedded_Ex3_T Embedded_Ex3_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Embedded_Ex3_T Embedded_Ex3_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Embedded_Ex3_T Embedded_Ex3_Y;

/* Real-time model */
static RT_MODEL_Embedded_Ex3_T Embedded_Ex3_M_;
RT_MODEL_Embedded_Ex3_T *const Embedded_Ex3_M = &Embedded_Ex3_M_;

/* Model step function */
void Embedded_Ex3_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/a'
   *  Inport: '<Root>/b'
   *  Inport: '<Root>/d'
   *  Inport: '<Root>/e'
   */
  if (Embedded_Ex3_DW.is_active_c3_Embedded_Ex3 == 0U) {
    Embedded_Ex3_DW.is_active_c3_Embedded_Ex3 = 1U;

    /* Outport: '<Root>/g' */
    Embedded_Ex3_Y.g = true;
    Embedded_Ex3_DW.is_C = Embedded_Ex3_IN_G;

    /* Outport: '<Root>/s1' */
    Embedded_Ex3_Y.s1 = true;
    Embedded_Ex3_DW.is_B = Embedded_Ex3_IN_state1;
  } else {
    if (Embedded_Ex3_DW.is_C == Embedded_Ex3_IN_D) {
      if (Embedded_Ex3_U.d) {
        /* Outport: '<Root>/d2' */
        Embedded_Ex3_Y.d2 = false;

        /* Outport: '<Root>/g' */
        Embedded_Ex3_Y.g = true;
        Embedded_Ex3_DW.is_D = Embedded_Ex3_IN_NO_ACTIVE_CHILD;
        Embedded_Ex3_DW.is_C = Embedded_Ex3_IN_G;
      } else if (Embedded_Ex3_DW.is_D == Embedded_Ex3_IN_D1) {
        if (Embedded_Ex3_U.e) {
          /* Outport: '<Root>/d2' */
          Embedded_Ex3_Y.d2 = true;

          /* Outport: '<Root>/d1' */
          Embedded_Ex3_Y.d1 = false;
          Embedded_Ex3_DW.c = false;
          Embedded_Ex3_DW.is_D = Embedded_Ex3_IN_D2;
        }

        /* case IN_D2: */
      } else if (Embedded_Ex3_U.e) {
        /* Outport: '<Root>/d2' */
        Embedded_Ex3_Y.d2 = true;
        Embedded_Ex3_DW.is_D = Embedded_Ex3_IN_D2;
      }

      /* case IN_G: */
    } else if (Embedded_Ex3_U.a) {
      Embedded_Ex3_DW.c = true;
      Embedded_Ex3_DW.is_C = Embedded_Ex3_IN_D;

      /* Outport: '<Root>/d1' */
      Embedded_Ex3_Y.d1 = true;

      /* Outport: '<Root>/g' */
      Embedded_Ex3_Y.g = false;
      Embedded_Ex3_DW.is_D = Embedded_Ex3_IN_D1;
    }

    if (Embedded_Ex3_DW.is_B == Embedded_Ex3_IN_state1) {
      if (Embedded_Ex3_DW.c) {
        /* Outport: '<Root>/s1' */
        Embedded_Ex3_Y.s1 = false;

        /* Outport: '<Root>/s2' */
        Embedded_Ex3_Y.s2 = true;
        Embedded_Ex3_DW.is_B = Embedded_Ex3_IN_state2;
      }

      /* case IN_state2: */
    } else if (Embedded_Ex3_U.b && (Embedded_Ex3_DW.is_D == Embedded_Ex3_IN_D2))
    {
      /* Outport: '<Root>/s1' */
      Embedded_Ex3_Y.s1 = true;

      /* Outport: '<Root>/s2' */
      Embedded_Ex3_Y.s2 = false;
      Embedded_Ex3_DW.is_B = Embedded_Ex3_IN_state1;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Embedded_Ex3_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Embedded_Ex3_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
