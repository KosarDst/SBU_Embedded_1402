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


/*
 * File: untitled.h
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

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_



/*
 * File: rtwtypes.h
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

#ifndef RTWTYPES_H
#define RTWTYPES_H

/* Logical type definitions */
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif

#ifndef true
#define true                           (1U)
#endif
#endif

/*=======================================================================*
 * Target hardware information
 *   Device type: Atmel->AVR
 *   Number of bits:     char:   8    short:   16    int:  16
 *                       long:  32
 *                       native word size:   8
 *   Byte ordering: LittleEndian
 *   Signed integer division rounds to: Zero
 *   Shift right on a signed integer as arithmetic shift: on
 *=======================================================================*/

/*=======================================================================*
 * Fixed width word size data types:                                     *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
 *=======================================================================*/
typedef signed char int8_T;
typedef unsigned char uint8_T;
typedef int int16_T;
typedef unsigned int uint16_T;
typedef long int32_T;
typedef unsigned long uint32_T;
typedef float real32_T;
typedef double real64_T;

/*===========================================================================*
 * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
 *                           real_T, time_T, ulong_T.                        *
 *===========================================================================*/
typedef double real_T;
typedef double time_T;
typedef unsigned char boolean_T;
typedef int int_T;
typedef unsigned int uint_T;
typedef unsigned long ulong_T;
typedef char char_T;
typedef unsigned char uchar_T;
typedef char_T byte_T;

/*===========================================================================*
 * Complex number type definitions                                           *
 *===========================================================================*/
#define CREAL_T

typedef struct {
  real32_T re;
  real32_T im;
} creal32_T;

typedef struct {
  real64_T re;
  real64_T im;
} creal64_T;

typedef struct {
  real_T re;
  real_T im;
} creal_T;

#define CINT8_T

typedef struct {
  int8_T re;
  int8_T im;
} cint8_T;

#define CUINT8_T

typedef struct {
  uint8_T re;
  uint8_T im;
} cuint8_T;

#define CINT16_T

typedef struct {
  int16_T re;
  int16_T im;
} cint16_T;

#define CUINT16_T

typedef struct {
  uint16_T re;
  uint16_T im;
} cuint16_T;

#define CINT32_T

typedef struct {
  int32_T re;
  int32_T im;
} cint32_T;

#define CUINT32_T

typedef struct {
  uint32_T re;
  uint32_T im;
} cuint32_T;

/*=======================================================================*
 * Min and Max:                                                          *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *=======================================================================*/
#define MAX_int8_T                     ((int8_T)(127))
#define MIN_int8_T                     ((int8_T)(-128))
#define MAX_uint8_T                    ((uint8_T)(255U))
#define MAX_int16_T                    ((int16_T)(32767))
#define MIN_int16_T                    ((int16_T)(-32768))
#define MAX_uint16_T                   ((uint16_T)(65535U))
#define MAX_int32_T                    ((int32_T)(2147483647L))
#define MIN_int32_T                    ((int32_T)(-2147483647L-1L))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFUL))

/* Block D-Work pointer type */
typedef void * pointer_T;

#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

//#include "rtwtypes.h"



/* Copyright 1990-2022 The MathWorks, Inc. */

/*
 * File: rtw_continuous.h
 *
 * Abstract:
 *   Type definitions for continuous-time support.
 *
 */

#ifndef RTW_CONTINUOUS_H__
#define RTW_CONTINUOUS_H__

#ifdef MATLAB_MEX_FILE
//#include "tmwtypes.h"
#else
//#include "rtwtypes.h"
#endif

/* For models registering MassMatrix */
typedef enum {
    SS_MATRIX_NONE,
    SS_MATRIX_CONSTANT,
    SS_MATRIX_TIMEDEP,
    SS_MATRIX_STATEDEP
} ssMatrixType;

typedef enum {
    SOLVER_MODE_AUTO, /* only occurs in
                         mdlInitializeSizes/mdlInitializeSampleTimes */
    SOLVER_MODE_SINGLETASKING,
    SOLVER_MODE_MULTITASKING
} SolverMode;

typedef enum { MINOR_TIME_STEP, MAJOR_TIME_STEP } SimTimeStep;

/* =============================================================================
 * Model methods object
 * =============================================================================
 */
typedef void (*rtMdlInitializeSizesFcn)(void* rtModel);
typedef void (*rtMdlInitializeSampleTimesFcn)(void* rtModel);
typedef void (*rtMdlStartFcn)(void* rtModel);
typedef void (*rtMdlOutputsFcn)(void* rtModel, int_T tid);
typedef void (*rtMdlUpdateFcn)(void* rtModel, int_T tid);
typedef void (*rtMdlDerivativesFcn)(void* rtModel);
typedef void (*rtMdlProjectionFcn)(void* rtModel);
typedef void (*rtMdlMassMatrixFcn)(void* rtModel);
typedef void (*rtMdlForcingFunctionFcn)(void* rtModel);
typedef void (*rtMdlTerminateFcn)(void* rtModel);
#ifdef RT_MALLOC
typedef real_T (*rtMdlDiscreteEventsFcn)(void* pModel,
                                         int_T rtmNumSampTimes,
                                         void* rtmTimingData,
                                         int_T* rtmSampleHitPtr,
                                         int_T* rtmPerTaskSampleHits);
#endif

typedef struct _RTWRTModelMethodsInfo_tag {
    void* rtModelPtr;
    rtMdlInitializeSizesFcn rtmInitSizesFcn;
    rtMdlInitializeSampleTimesFcn rtmInitSampTimesFcn;
    rtMdlStartFcn rtmStartFcn;
    rtMdlOutputsFcn rtmOutputsFcn;
    rtMdlUpdateFcn rtmUpdateFcn;
    rtMdlDerivativesFcn rtmDervisFcn;
    rtMdlProjectionFcn rtmProjectionFcn;
    rtMdlMassMatrixFcn rtmMassMatrixFcn;
    rtMdlForcingFunctionFcn rtmForcingFunctionFcn;
    rtMdlTerminateFcn rtmTerminateFcn;
#ifdef RT_MALLOC
    rtMdlDiscreteEventsFcn rtmDiscreteEventsFcn;
#endif
} RTWRTModelMethodsInfo;

#define rtmiSetRTModelPtr(M, rtmp) ((M).rtModelPtr = (rtmp))
#define rtmiGetRTModelPtr(M) (M).rtModelPtr

#define rtmiSetInitSizesFcn(M, fp) ((M).rtmInitSizesFcn = ((rtMdlInitializeSizesFcn)(fp)))
#define rtmiSetInitSampTimesFcn(M, fp) \
    ((M).rtmInitSampTimesFcn = ((rtMdlInitializeSampleTimesFcn)(fp)))
#define rtmiSetStartFcn(M, fp) ((M).rtmStartFcn = ((rtMdlStartFcn)(fp)))
#define rtmiSetOutputsFcn(M, fp) ((M).rtmOutputsFcn = ((rtMdlOutputsFcn)(fp)))
#define rtmiSetUpdateFcn(M, fp) ((M).rtmUpdateFcn = ((rtMdlUpdateFcn)(fp)))
#define rtmiSetDervisFcn(M, fp) ((M).rtmDervisFcn = ((rtMdlDerivativesFcn)(fp)))
#define rtmiSetProjectionFcn(M, fp) ((M).rtmProjectionFcn = ((rtMdlProjectionFcn)(fp)))
#define rtmiSetMassMatrixFcn(M, fp) ((M).rtmMassMatrixFcn = ((rtMdlMassMatrixFcn)(fp)))
#define rtmiSetForcingFunctionFcn(M, fp) \
    ((M).rtmForcingFunctionFcn = ((rtMdlForcingFunctionFcn)(fp)))
#define rtmiSetTerminateFcn(M, fp) ((M).rtmTerminateFcn = ((rtMdlTerminateFcn)(fp)))
#ifdef RT_MALLOC
#define rtmiSetDiscreteEventsFcn(M, fp) ((M).rtmDiscreteEventsFcn = ((rtMdlDiscreteEventsFcn)(fp)))
#endif

#define rtmiInitializeSizes(M) ((*(M).rtmInitSizesFcn)((M).rtModelPtr))
#define rtmiInitializeSampleTimes(M) ((*(M).rtmInitSampTimesFcn)((M).rtModelPtr))
#define rtmiStart(M) ((*(M).rtmStartFcn)((M).rtModelPtr))
#define rtmiOutputs(M, tid) ((*(M).rtmOutputsFcn)((M).rtModelPtr, tid))
#define rtmiUpdate(M, tid) ((*(M).rtmUpdateFcn)((M).rtModelPtr, tid))
#define rtmiDerivatives(M) ((*(M).rtmDervisFcn)((M).rtModelPtr))
#define rtmiProjection(M) ((*(M).rtmProjectionFcn)((M).rtModelPtr))
#define rtmiMassMatrix(M) ((*(M).rtmMassMatrixFcn)((M).rtModelPtr))
#define rtmiForcingFunction(M) ((*(M).rtmForcingFunctionFcn)((M).rtModelPtr))
#define rtmiTerminate(M) ((*(M).rtmTerminateFcn)((M).rtModelPtr))
#ifdef RT_MALLOC
#define rtmiDiscreteEvents(M, x1, x2, x3, x4) \
    ((*(M).rtmDiscreteEventsFcn)((M).rtModelPtr, (x1), (x2), (x3), (x4)))
#endif
#endif /* __RTW_CONTINUOUS_H__ */

//#include "rtw_continuous.h"



/*
 * File: rtw_solver.h
 *
 * Abstract:
 *   Type definitions for continuous-time solver support.
 *
 */

/* Copyright 1990-2021 The MathWorks, Inc. */

#ifndef RTW_SOLVER_H__
#define RTW_SOLVER_H__

//#include "rtw_continuous.h"

/* =============================================================================
 * Solver object
 * =============================================================================
 */
#ifndef NO_FLOATS /* ERT integer-only */
/*
 * Enum for solver tolerance
 */
typedef enum {
    SL_SOLVER_TOLERANCE_AUTO = 0,       /* Set Automatically by Solver */
    SL_SOLVER_TOLERANCE_LOCAL = 1,      /* Set Locally, e.g., by Blocks */
    SL_SOLVER_TOLERANCE_GLOBAL = 2,     /* Set Globally, e.g., by Block Diagram */
    SL_SOLVER_TOLERANCE_UNDEFINED = 255 /* Signal uninitialized */
} SL_SolverToleranceControlFlag_T;


/*
 * Enum for jacobian method control
 */
typedef enum {
    SL_JM_BD_AUTO = 0,
    SL_JM_BD_SPARSE_PERTURBATION,
    SL_JM_BD_FULL_PERTURBATION,
    SL_JM_BD_SPARSE_ANALYTICAL,
    SL_JM_BD_FULL_ANALYTICAL
} slJmBdControl;


typedef struct _ssSolverInfo_tag {
    void* rtModelPtr;

    SimTimeStep* simTimeStepPtr;
    void* solverData;
    const char_T* solverName;
    boolean_T isVariableStepSolver;
    boolean_T solverNeedsReset;
    SolverMode solverMode;

    time_T solverStopTime;
    time_T* stepSizePtr;
    time_T minStepSize;
    time_T maxStepSize;
    time_T fixedStepSize;

    int_T solverShapePreserveControl;
    int_T solverMaxConsecutiveMinStep;
    int_T maxNumMinSteps;
    int_T solverMaxOrder;
    real_T solverConsecutiveZCsStepRelTol;
    int_T solverMaxConsecutiveZCs;

    int_T solverExtrapolationOrder;
    int_T solverNumberNewtonIterations;

    int_T solverRefineFactor;
    real_T solverRelTol;
    real_T unused_real_T_1;

    real_T** dXPtr;
    time_T** tPtr;

    int_T* numContStatesPtr;
    real_T** contStatesPtr;

    int_T* numPeriodicContStatesPtr;
    int_T** periodicContStateIndicesPtr;
    real_T** periodicContStateRangesPtr;

    real_T* zcSignalVector;
    uint8_T* zcEventsVector;
    uint8_T* zcSignalAttrib;
    int_T zcSignalVectorLength;
    uint8_T* reserved;

    boolean_T foundContZcEvents;
    boolean_T isAtLeftPostOfContZcEvent;
    boolean_T isAtRightPostOfContZcEvent;
    boolean_T adaptiveZcDetection;

    int_T numZcSignals;

    boolean_T stateProjection;
    boolean_T robustResetMethod;     /* user's preference */
    boolean_T updateJacobianAtReset; /* S-Fcn request (sticky) */
    boolean_T consistencyChecking;

    ssMatrixType massMatrixType;
    int_T massMatrixNzMax;
    int_T* massMatrixIr;
    int_T* massMatrixJc;
    real_T* massMatrixPr;

    const char_T** errStatusPtr;

    RTWRTModelMethodsInfo* modelMethodsPtr;
    real_T zcThreshold;
    int_T reserved_1;
    int_T consecutiveZCsError;
    boolean_T CTOutputIncnstWithState;
    boolean_T isComputingJacobian;
    slJmBdControl solverJacobianMethodControl;
    int_T ignoredZcDiagnostic;
    int_T maskedZcDiagnostic;
    boolean_T isOutputMethodComputed;
    int_T maxZcBracketingIterations;
    boolean_T isMinorTimeStepWithModeChange;
    int_T maxZcPerStep;
    real_T** zcSignalPtr;
} ssSolverInfo;

/* Support old name RTWSolverInfo */
typedef ssSolverInfo RTWSolverInfo;

#define rtsiSetRTModelPtr(S, rtmp) ((S)->rtModelPtr = (rtmp))
#define rtsiGetRTModelPtr(S) (S)->rtModelPtr

#define rtsiSetSimTimeStepPtr(S, stp) ((S)->simTimeStepPtr = (stp))
#define rtsiGetSimTimeStepPtr(S) ((S)->simTimeStepPtr)
#define rtsiGetSimTimeStep(S) *((S)->simTimeStepPtr)
#define rtsiSetSimTimeStep(S, st) (*((S)->simTimeStepPtr) = (st))

#define rtsiSetSolverData(S, sd) ((S)->solverData = (sd))
#define rtsiGetSolverData(S) (S)->solverData

#define rtsiSetSolverName(S, sn) ((S)->solverName = (sn))
#define rtsiGetSolverName(S) (S)->solverName

#define rtsiSetVariableStepSolver(S, vs) ((S)->isVariableStepSolver = (vs))
#define rtsiIsVariableStepSolver(S) (S)->isVariableStepSolver

#define rtsiSetSolverNeedsReset(S, sn) ((S)->solverNeedsReset = (sn))
#define rtsiGetSolverNeedsReset(S) (S)->solverNeedsReset

#define rtsiSetContTimeOutputInconsistentWithStateAtMajorStep(S, sn) \
    ((S)->CTOutputIncnstWithState = (sn))
#define rtsiGetContTimeOutputInconsistentWithStateAtMajorStep(S) (S)->CTOutputIncnstWithState

#define rtsiSetBlkStateChange(S, sn) ((S)->CTOutputIncnstWithState = (sn))
#define rtsiGetBlkStateChange(S) (S)->CTOutputIncnstWithState

#define rtsiSetBlockStateForSolverChangedAtMajorStep(S, sn) ((S)->solverNeedsReset = (sn))
#define rtsiGetBlockStateForSolverChangedAtMajorStep(S) (S)->solverNeedsReset

#define rtsiSetSolverMode(S, sm) ((S)->solverMode = (sm))
#define rtsiGetSolverMode(S) (S)->solverMode

#define rtsiSetSolverStopTime(S, st) ((S)->solverStopTime = (st))
#define rtsiGetSolverStopTime(S) (S)->solverStopTime

#define rtsiSetStepSizePtr(S, ssp) ((S)->stepSizePtr = (ssp))
#define rtsiSetStepSize(S, ss) (*((S)->stepSizePtr) = (ss))
#define rtsiGetStepSize(S) *((S)->stepSizePtr)

#define rtsiSetMinStepSize(S, ss) (((S)->minStepSize = (ss)))
#define rtsiGetMinStepSize(S) (S)->minStepSize

#define rtsiSetMaxStepSize(S, ss) ((S)->maxStepSize = (ss))
#define rtsiGetMaxStepSize(S) (S)->maxStepSize

#define rtsiSetFixedStepSize(S, ss) ((S)->fixedStepSize = (ss))
#define rtsiGetFixedStepSize(S) (S)->fixedStepSize

#define rtsiSetMaxNumMinSteps(S, mns) ((S)->maxNumMinSteps = (mns))
#define rtsiGetMaxNumMinSteps(S) (S)->maxNumMinSteps

#define rtsiSetSolverMaxOrder(S, smo) ((S)->solverMaxOrder = (smo))
#define rtsiGetSolverMaxOrder(S) (S)->solverMaxOrder

#define rtsiSetSolverJacobianMethodControl(S, smcm) \
    (ssGetSolverInfo(S)->solverJacobianMethodControl = (smcm))
#define rtsiGetSolverJacobianMethodControl(S) ssGetSolverInfo(S)->solverJacobianMethodControl

#define rtsiSetSolverShapePreserveControl(S, smcm) \
    (ssGetSolverInfo(S)->solverShapePreserveControl = (smcm))
#define rtsiGetSolverShapePreserveControl(S) ssGetSolverInfo(S)->solverShapePreserveControl

#define rtsiSetSolverConsecutiveZCsStepRelTol(S, scr) \
    (ssGetSolverInfo(S)->solverConsecutiveZCsStepRelTol = (scr))
#define rtsiGetSolverConsecutiveZCsStepRelTol(S) ssGetSolverInfo(S)->solverConsecutiveZCsStepRelTol

#define rtsiSetSolverMaxConsecutiveZCs(S, smcz) \
    (ssGetSolverInfo(S)->solverMaxConsecutiveZCs = (smcz))
#define rtsiGetSolverMaxConsecutiveZCs(S) ssGetSolverInfo(S)->solverMaxConsecutiveZCs

#define rtsiSetSolverMaxConsecutiveMinStep(S, smcm) \
    (ssGetSolverInfo(S)->solverMaxConsecutiveMinStep = (smcm))
#define rtsiGetSolverMaxConsecutiveMinStep(S) ssGetSolverInfo(S)->solverMaxConsecutiveMinStep

#define rtsiSetSolverExtrapolationOrder(S, seo) ((S)->solverExtrapolationOrder = (seo))
#define rtsiGetSolverExtrapolationOrder(S) (S)->solverExtrapolationOrder

#define rtsiSetSolverNumberNewtonIterations(S, nni) ((S)->solverNumberNewtonIterations = (nni))
#define rtsiGetSolverNumberNewtonIterations(S) (S)->solverNumberNewtonIterations

#define rtsiSetSolverRefineFactor(S, smo) ((S)->solverRefineFactor = (smo))
#define rtsiGetSolverRefineFactor(S) (S)->solverRefineFactor

#define rtsiSetSolverRelTol(S, smo) ((S)->solverRelTol = (smo))
#define rtsiGetSolverRelTol(S) (S)->solverRelTol

#define rtsiSetSolverMassMatrixType(S, type) ((S)->massMatrixType = (type))
#define rtsiGetSolverMassMatrixType(S) (S)->massMatrixType

#define rtsiSetSolverMassMatrixNzMax(S, nzMax) ((S)->massMatrixNzMax = (nzMax))
#define rtsiGetSolverMassMatrixNzMax(S) (S)->massMatrixNzMax

#define rtsiSetSolverMassMatrixIr(S, ir) ((S)->massMatrixIr = (ir))
#define rtsiGetSolverMassMatrixIr(S) (S)->massMatrixIr

#define rtsiSetSolverMassMatrixJc(S, jc) ((S)->massMatrixJc = (jc))
#define rtsiGetSolverMassMatrixJc(S) (S)->massMatrixJc

#define rtsiSetSolverMassMatrixPr(S, pr) ((S)->massMatrixPr = (pr))
#define rtsiGetSolverMassMatrixPr(S) (S)->massMatrixPr

#define rtsiSetdXPtr(S, dxp) ((S)->dXPtr = (dxp))
#define rtsiSetdX(S, dx) (*((S)->dXPtr) = (dx))
#define rtsiGetdX(S) *((S)->dXPtr)

#define rtsiSetTPtr(S, tp) ((S)->tPtr = (tp))
#define rtsiSetT(S, t) ((*((S)->tPtr))[0] = (t))
#define rtsiGetT(S) (*((S)->tPtr))[0]

#define rtsiSetContStatesPtr(S, cp) ((S)->contStatesPtr = (cp))
#define rtsiGetContStates(S) *((S)->contStatesPtr)

#define rtsiSetNumContStatesPtr(S, cp) ((S)->numContStatesPtr = (cp))
#define rtsiGetNumContStates(S) *((S)->numContStatesPtr)

#define rtsiSetNumPeriodicContStatesPtr(S, cp) ((S)->numPeriodicContStatesPtr = (cp))
#define rtsiGetNumPeriodicContStates(S) *((S)->numPeriodicContStatesPtr)

#define rtsiSetPeriodicContStateIndicesPtr(S, cp) ((S)->periodicContStateIndicesPtr = (cp))
#define rtsiGetPeriodicContStateIndices(S) *((S)->periodicContStateIndicesPtr)

#define rtsiSetPeriodicContStateRangesPtr(S, cp) ((S)->periodicContStateRangesPtr = (cp))
#define rtsiGetPeriodicContStateRanges(S) *((S)->periodicContStateRangesPtr)

#define rtsiSetErrorStatusPtr(S, esp) ((S)->errStatusPtr = (esp))
#define rtsiSetErrorStatus(S, es) (*((S)->errStatusPtr) = (es))
#define rtsiGetErrorStatus(S) *((S)->errStatusPtr)

#define rtsiSetModelMethodsPtr(S, mmp) ((S)->modelMethodsPtr = (mmp))
#define rtsiGetModelMethodsPtr(S) (S)->modelMethodsPtr

#define rtsiSetSolverComputingJacobian(S, val) ((S)->isComputingJacobian = (val))
#define rtsiIsSolverComputingJacobian(S) (S)->isComputingJacobian

#define rtsiSetSolverOutputComputed(S, val) ((S)->isOutputMethodComputed = (val))
#define rtsiIsSolverOutputComputed(S) (S)->isOutputMethodComputed

#define rtsiSetIsMinorTimeStepWithModeChange(S, sn) ((S)->isMinorTimeStepWithModeChange = (sn))
#define rtsiGetIsMinorTimeStepWithModeChange(S) (S)->isMinorTimeStepWithModeChange

#define rtsiIsModeUpdateTimeStep(S) \
    (rtsiGetSimTimeStep(S) == MAJOR_TIME_STEP || rtsiGetIsMinorTimeStepWithModeChange(S))

#define rtsiSetSolverZcSignalPtr(S, zcp) ((S)->zcSignalPtr = (zcp))
#define rtsiSetSolverZcSignalVector(S, zcp) (*((S)->zcSignalPtr) = (zcp))
#define rtsiGetSolverZcSignalVector(S) *((S)->zcSignalPtr)


#define rtsiSetSolverZcEventsVector(S, ptr) ((S)->zcEventsVector = (ptr))
#define rtsiGetSolverZcEventsVector(S) ((S)->zcEventsVector)

#define rtsiSetSolverZcSignalAttrib(S, ptr) ((S)->zcSignalAttrib = (ptr))
#define rtsiGetSolverZcSignalAttrib(S) ((S)->zcSignalAttrib)

#define rtsiSetSolverZcSignalVectorLength(S, n) ((S)->zcSignalVectorLength = (n))
#define rtsiGetSolverZcSignalVectorLength(S) ((S)->zcSignalVectorLength)

#define rtsiSetSolverFoundContZcEvents(S, val) ((S)->foundContZcEvents = (val))
#define rtsiGetSolverFoundContZcEvents(S) ((S)->foundContZcEvents)

#endif /* !NO_FLOATS */

#endif /* RTW_SOLVER_H__ */

//#include "rtw_solver.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */




/*
 * File: untitled_types.h
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

#ifndef RTW_HEADER_untitled_types_h_
#define RTW_HEADER_untitled_types_h_

/* Forward declaration for rtModel */
typedef struct tag_RTM_untitled_T RT_MODEL_untitled_T;

#endif                                 /* RTW_HEADER_untitled_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

//#include "untitled_types.h"
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
  uint8_T is_c3_untitled;              /* '<Root>/Chart' */
  uint8_T is_active_c3_untitled;       /* '<Root>/Chart' */
} DW_untitled_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input_Gas;                    /* '<Root>/Input_Gas' */
  real_T Input_Dist;                   /* '<Root>/Input_Dist' */
} ExtU_untitled_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output_Fan;                   /* '<Root>/Output_Fan' */
  real_T Output_Tire;                  /* '<Root>/Output_Tire' */
} ExtY_untitled_T;

/* Real-time Model Data Structure */
struct tag_RTM_untitled_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_untitled_T untitled_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_untitled_T untitled_Y;

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step(void);
extern void untitled_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled_T *const untitled_M;
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
 * '<Root>' : 'untitled'
 * '<S1>'   : 'untitled/Chart'
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

//#include "untitled.h"
//#include "rtwtypes.h"

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
