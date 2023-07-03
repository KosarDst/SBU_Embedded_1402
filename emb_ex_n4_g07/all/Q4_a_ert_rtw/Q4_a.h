/*
 * File: Q4_a.h
 *
 * Code generated for Simulink model 'Q4_a'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat Apr 22 23:32:38 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Q4_a_h_
#define RTW_HEADER_Q4_a_h_
#ifndef Q4_a_COMMON_INCLUDES_
#define Q4_a_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Q4_a_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T In1;                        /* '<Root>/In1' */
  real32_T In2;                        /* '<Root>/In2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Out1;                       /* '<Root>/Out1' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Q4_a_initialize(void);
extern void Q4_a_step(void);

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
 * '<Root>' : 'Q4_a'
 */

/*-
 * Requirements for '<Root>': Q4_a

 */
#endif                                 /* RTW_HEADER_Q4_a_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
