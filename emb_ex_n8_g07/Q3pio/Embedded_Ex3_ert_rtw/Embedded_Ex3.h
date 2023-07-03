/*
 * File: Embedded_Ex3.h
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

#ifndef RTW_HEADER_Embedded_Ex3_h_
#define RTW_HEADER_Embedded_Ex3_h_
#ifndef Embedded_Ex3_COMMON_INCLUDES_
#define Embedded_Ex3_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Embedded_Ex3_COMMON_INCLUDES_ */

#include "Embedded_Ex3_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_Embedded_Ex3;   /* '<Root>/Chart' */
  uint8_T is_B;                        /* '<Root>/Chart' */
  uint8_T is_C;                        /* '<Root>/Chart' */
  uint8_T is_D;                        /* '<Root>/Chart' */
  boolean_T c;                         /* '<Root>/Chart' */
} DW_Embedded_Ex3_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T a;                         /* '<Root>/a' */
  boolean_T b;                         /* '<Root>/b' */
  boolean_T d;                         /* '<Root>/d' */
  boolean_T e;                         /* '<Root>/e' */
} ExtU_Embedded_Ex3_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T g;                         /* '<Root>/g' */
  boolean_T d2;                        /* '<Root>/d2' */
  boolean_T d1;                        /* '<Root>/d1' */
  boolean_T s1;                        /* '<Root>/s1' */
  boolean_T s2;                        /* '<Root>/s2' */
} ExtY_Embedded_Ex3_T;

/* Real-time Model Data Structure */
struct tag_RTM_Embedded_Ex3_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Embedded_Ex3_T Embedded_Ex3_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Embedded_Ex3_T Embedded_Ex3_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Embedded_Ex3_T Embedded_Ex3_Y;

/* Model entry point functions */
extern void Embedded_Ex3_initialize(void);
extern void Embedded_Ex3_step(void);
extern void Embedded_Ex3_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Embedded_Ex3_T *const Embedded_Ex3_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Embedded_Ex3'
 * '<S1>'   : 'Embedded_Ex3/Chart'
 */
#endif                                 /* RTW_HEADER_Embedded_Ex3_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
