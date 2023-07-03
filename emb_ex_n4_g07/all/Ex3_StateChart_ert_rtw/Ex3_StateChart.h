/*
 * File: Ex3_StateChart.h
 *
 * Code generated for Simulink model 'Ex3_StateChart'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Apr 23 00:07:18 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Ex3_StateChart_h_
#define RTW_HEADER_Ex3_StateChart_h_
#ifndef Ex3_StateChart_COMMON_INCLUDES_
#define Ex3_StateChart_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Ex3_StateChart_COMMON_INCLUDES_ */

#include "Ex3_StateChart_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_B;                        /* '<Root>/Chart' */
  uint8_T is_C;                        /* '<Root>/Chart' */
  uint8_T is_D;                        /* '<Root>/Chart' */
  uint8_T is_active_c3_Ex3_StateChart; /* '<Root>/Chart' */
  boolean_T c;                         /* '<Root>/Chart' */
} DW_Ex3_StateChart_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T a;                         /* '<Root>/a' */
  boolean_T b;                         /* '<Root>/b' */
  boolean_T d;                         /* '<Root>/d' */
  boolean_T e;                         /* '<Root>/e' */
} ExtU_Ex3_StateChart_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T g;                         /* '<Root>/g' */
  boolean_T d2;                        /* '<Root>/d2' */
  boolean_T d1;                        /* '<Root>/d1' */
  boolean_T s1;                        /* '<Root>/s1' */
  boolean_T s2;                        /* '<Root>/s2' */
} ExtY_Ex3_StateChart_T;

/* Real-time Model Data Structure */
struct tag_RTM_Ex3_StateChart_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Ex3_StateChart_T Ex3_StateChart_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Ex3_StateChart_T Ex3_StateChart_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Ex3_StateChart_T Ex3_StateChart_Y;

/* Model entry point functions */
extern void Ex3_StateChart_initialize(void);
extern void Ex3_StateChart_step(void);
extern void Ex3_StateChart_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Ex3_StateChart_T *const Ex3_StateChart_M;
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
 * '<Root>' : 'Ex3_StateChart'
 * '<S1>'   : 'Ex3_StateChart/Chart'
 */
#endif                                 /* RTW_HEADER_Ex3_StateChart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
