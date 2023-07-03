/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu May 11 23:58:03 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart' */
#define untitled_IN_backward           ((uint8_T)1U)
#define untitled_IN_forward            ((uint8_T)2U)

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External inputs (root inport signals with default storage) */
ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/Input_Dist'
   *  Inport: '<Root>/Input_Gas'
   */
  if (untitled_DW.is_active_c3_untitled == 0U) {
    untitled_DW.is_active_c3_untitled = 1U;
    untitled_DW.is_c3_untitled = untitled_IN_forward;
  } else if (untitled_DW.is_c3_untitled == untitled_IN_backward) {
    if ((untitled_U.Input_Gas < 48.0) && (untitled_U.Input_Dist > 0.98)) {
      /* Outport: '<Root>/Output_Tire' */
      untitled_Y.Output_Tire = 1.0;

      /* Outport: '<Root>/Output_Fan' */
      untitled_Y.Output_Fan = 1.0;
      untitled_DW.is_c3_untitled = untitled_IN_forward;
    }

    /* case IN_forward: */
  } else if ((untitled_U.Input_Gas > 52.0) || (untitled_U.Input_Dist < 1.02)) {
    /* Outport: '<Root>/Output_Tire' */
    untitled_Y.Output_Tire = 0.0;

    /* Outport: '<Root>/Output_Fan' */
    untitled_Y.Output_Fan = 0.0;
    untitled_DW.is_c3_untitled = untitled_IN_backward;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* SystemInitialize for Outport: '<Root>/Output_Fan' incorporates:
   *  Chart: '<Root>/Chart'
   */
  untitled_Y.Output_Fan = 1.0;

  /* SystemInitialize for Outport: '<Root>/Output_Tire' incorporates:
   *  Chart: '<Root>/Chart'
   */
  untitled_Y.Output_Tire = 1.0;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
