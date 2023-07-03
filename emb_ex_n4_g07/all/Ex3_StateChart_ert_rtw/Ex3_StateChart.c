/*
 * File: Ex3_StateChart.c
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

#include "Ex3_StateChart.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Ex3_StateCha_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Ex3_StateChart_IN_D            ((uint8_T)1U)
#define Ex3_StateChart_IN_D1           ((uint8_T)1U)
#define Ex3_StateChart_IN_D2           ((uint8_T)2U)
#define Ex3_StateChart_IN_G            ((uint8_T)2U)
#define Ex3_StateChart_IN_one          ((uint8_T)1U)
#define Ex3_StateChart_IN_two          ((uint8_T)2U)

/* Block states (default storage) */
DW_Ex3_StateChart_T Ex3_StateChart_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Ex3_StateChart_T Ex3_StateChart_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Ex3_StateChart_T Ex3_StateChart_Y;

/* Real-time model */
static RT_MODEL_Ex3_StateChart_T Ex3_StateChart_M_;
RT_MODEL_Ex3_StateChart_T *const Ex3_StateChart_M = &Ex3_StateChart_M_;

/* Model step function */
void Ex3_StateChart_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/a'
   *  Inport: '<Root>/b'
   *  Inport: '<Root>/d'
   *  Inport: '<Root>/e'
   */
  if (Ex3_StateChart_DW.is_active_c3_Ex3_StateChart == 0U) {
    Ex3_StateChart_DW.is_active_c3_Ex3_StateChart = 1U;

    /* Outport: '<Root>/g' */
    Ex3_StateChart_Y.g = true;
    Ex3_StateChart_DW.is_C = Ex3_StateChart_IN_G;

    /* Outport: '<Root>/s1' */
    Ex3_StateChart_Y.s1 = true;
    Ex3_StateChart_DW.is_B = Ex3_StateChart_IN_one;
  } else {
    if (Ex3_StateChart_DW.is_C == Ex3_StateChart_IN_D) {
      if (Ex3_StateChart_U.d) {
        /* Outport: '<Root>/d2' */
        Ex3_StateChart_Y.d2 = false;

        /* Outport: '<Root>/g' */
        Ex3_StateChart_Y.g = true;
        Ex3_StateChart_DW.is_D = Ex3_StateCha_IN_NO_ACTIVE_CHILD;
        Ex3_StateChart_DW.is_C = Ex3_StateChart_IN_G;
      } else if (Ex3_StateChart_DW.is_D == Ex3_StateChart_IN_D1) {
        if (Ex3_StateChart_U.e) {
          /* Outport: '<Root>/d2' */
          Ex3_StateChart_Y.d2 = true;

          /* Outport: '<Root>/d1' */
          Ex3_StateChart_Y.d1 = false;
          Ex3_StateChart_DW.c = false;
          Ex3_StateChart_DW.is_D = Ex3_StateChart_IN_D2;
        }

        /* case IN_D2: */
      } else if (Ex3_StateChart_U.e) {
        /* Outport: '<Root>/d2' */
        Ex3_StateChart_Y.d2 = true;
        Ex3_StateChart_DW.is_D = Ex3_StateChart_IN_D2;
      }

      /* case IN_G: */
    } else if (Ex3_StateChart_U.a) {
      Ex3_StateChart_DW.c = true;
      Ex3_StateChart_DW.is_C = Ex3_StateChart_IN_D;

      /* Outport: '<Root>/d1' */
      Ex3_StateChart_Y.d1 = true;

      /* Outport: '<Root>/g' */
      Ex3_StateChart_Y.g = false;
      Ex3_StateChart_DW.is_D = Ex3_StateChart_IN_D1;
    }

    if (Ex3_StateChart_DW.is_B == Ex3_StateChart_IN_one) {
      if (Ex3_StateChart_DW.c) {
        /* Outport: '<Root>/s1' */
        Ex3_StateChart_Y.s1 = false;

        /* Outport: '<Root>/s2' */
        Ex3_StateChart_Y.s2 = true;
        Ex3_StateChart_DW.is_B = Ex3_StateChart_IN_two;
      }

      /* case IN_two: */
    } else if (Ex3_StateChart_U.b && (Ex3_StateChart_DW.is_D ==
                Ex3_StateChart_IN_D2)) {
      /* Outport: '<Root>/s1' */
      Ex3_StateChart_Y.s1 = true;

      /* Outport: '<Root>/s2' */
      Ex3_StateChart_Y.s2 = false;
      Ex3_StateChart_DW.is_B = Ex3_StateChart_IN_one;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Ex3_StateChart_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Ex3_StateChart_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
