/* Include files */

#include "ddmr_for_mstc2003_sfun.h"
#include "c2_ddmr_for_mstc2003.h"
#include <string.h>
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c2_emlrtMCI = { 1,  /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "E:\\Mathlab\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "E:\\Mathlab\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 22, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "E:\\Mathlab\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 1,/* lineNo */
  "SystemCore",                        /* fcnName */
  "E:\\Mathlab\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 1,/* lineNo */
  "UDPReceiver",                       /* fcnName */
  "E:\\Mathlab\\toolbox\\dsp\\dsp\\compiled\\+dspcodegen\\UDPReceiver.p"/* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 1,/* lineNo */
  "UDPSender",                         /* fcnName */
  "E:\\Mathlab\\toolbox\\dsp\\dsp\\compiled\\+dspcodegen\\UDPSender.p"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 16,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ddmr_for_mstc2003:374"             /* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 23,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ddmr_for_mstc2003:374"             /* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 37,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ddmr_for_mstc2003:374"             /* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 42,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ddmr_for_mstc2003:374"             /* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 50,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ddmr_for_mstc2003:374"             /* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 1,/* lineNo */
  "System",                            /* fcnName */
  "E:\\Mathlab\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 1,/* lineNo */
  "SystemProp",                        /* fcnName */
  "E:\\Mathlab\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 1,/* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "E:\\Mathlab\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 1,/* lineNo */
  "FiniteSource",                      /* fcnName */
  "E:\\Mathlab\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\FiniteSource.p"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 33,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "E:\\Mathlab\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 12,/* lineNo */
  22,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#ddmr_for_mstc2003:374"             /* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "UDPReceiver",                       /* fName */
  "E:\\Mathlab\\toolbox\\dsp\\dsp\\compiled\\+dspcodegen\\UDPReceiver.p"/* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#ddmr_for_mstc2003:374"             /* pName */
};

static emlrtBCInfo c2_emlrtBCI = { 0,  /* iFirst */
  MAX_int32_T,                         /* iLast */
  49,                                  /* lineNo */
  4,                                   /* colNo */
  "recv",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#ddmr_for_mstc2003:374",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  32,                                  /* colNo */
  "recv",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#ddmr_for_mstc2003:374",            /* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance);
static void initialize_params_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static void mdl_start_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct *
  chartInstance);
static void mdl_terminate_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static void enable_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance);
static void disable_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance);
static void sf_gateway_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance);
static void ext_mode_exec_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static void c2_update_jit_animation_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static void c2_do_animation_call_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static void set_sim_state_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance, const mxArray *c2_st);
static void initSimStructsc2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static void c2_indexShapeCheck(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, int32_T c2_matrixSize[2]);
static void c2_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_b_heading, const char_T *c2_identifier,
  real32_T c2_b_y[100]);
static void c2_b_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real32_T c2_b_y[100]);
static real32_T c2_c_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_b_vel_left, const char_T *c2_identifier);
static real32_T c2_d_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static boolean_T c2_e_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_c_isInitialized, const char_T *c2_identifier);
static boolean_T c2_f_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static boolean_T c2_g_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_b_isReadySent, const char_T *c2_identifier,
  boolean_T *c2_svPtr);
static boolean_T c2_h_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  boolean_T *c2_svPtr);
static uint8_T c2_i_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_ddmr_for_mstc2003, const
  char_T *c2_identifier);
static uint8_T c2_j_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_slStringInitializeDynamicBuffers
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance);
static void c2_chart_data_browse_helper(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig);
static void c2_emxInitStruct_dspcodegen_UDPRec
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance,
   c2_dspcodegen_UDPReceiver *c2_pStruct);
static void c2_emxInitStruct_dsp_UDPReceiver_1
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance, c2_dsp_UDPReceiver_1
   *c2_pStruct);
static int32_T c2__s32_s64_(SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance,
  int64_T c2_b, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc, int32_T
  c2_offset_src_loc, int32_T c2_length_src_loc);
static void init_dsm_address_info(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_udpSender_not_empty = false;
  chartInstance->c2_udpReceiver_not_empty = false;
  chartInstance->c2_isReadySent_not_empty = false;
  chartInstance->c2_is_active_c2_ddmr_for_mstc2003 = 0U;
  c2_emxInitStruct_dspcodegen_UDPRec(chartInstance,
    &chartInstance->c2_udpReceiver);
  chartInstance->c2_udpSender.matlabCodegenIsDeleted = true;
  chartInstance->c2_udpReceiver.matlabCodegenIsDeleted = true;
}

static void initialize_params_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  static const int32_T c2_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_condTxtEndIdx[1] = { 958 };

  static const int32_T c2_condTxtStartIdx[1] = { 947 };

  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber, &chartInstance->c2_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    12U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 6U, 0U,
                  0U, 0U, 0U, 0U, 1U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1441);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 424, 445, -1,
                    584, false);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 640, 663, -1,
                    816, false);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 856, 879, -1,
                    908, false);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 943, 958, -1,
                    1038, false);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 1111, 1127,
                    1296, 1436, false);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 1296, 1316, -1,
                    1436, false);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 946, 958, 1U,
                      0U, c2_condTxtStartIdx, c2_condTxtEndIdx, 2U,
                      c2_postfixPredicateTree, false);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1299,
    1316, -1, 5U);
}

static void mdl_cleanup_runtime_resources_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  c2_dsp_UDPReceiver_1 *c2_j_obj;
  c2_dsp_UDPReceiver_1 *c2_k_obj;
  c2_dsp_UDPReceiver_1 *c2_n_obj;
  c2_dsp_UDPSender_0 *c2_m_obj;
  c2_dsp_UDPSender_0 *c2_o_obj;
  c2_dsp_UDPSender_0 *c2_p_obj;
  c2_dspcodegen_UDPReceiver *c2_c_obj;
  c2_dspcodegen_UDPReceiver *c2_d_obj;
  c2_dspcodegen_UDPReceiver *c2_g_obj;
  c2_dspcodegen_UDPReceiver *c2_h_obj;
  c2_dspcodegen_UDPReceiver *c2_obj;
  c2_dspcodegen_UDPSender *c2_b_obj;
  c2_dspcodegen_UDPSender *c2_e_obj;
  c2_dspcodegen_UDPSender *c2_f_obj;
  c2_dspcodegen_UDPSender *c2_i_obj;
  c2_dspcodegen_UDPSender *c2_l_obj;
  char_T *c2_b_sErr;
  char_T *c2_sErr;
  c2_obj = &chartInstance->c2_udpReceiver;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_c_obj = c2_obj;
    c2_d_obj = c2_c_obj;
    if (c2_d_obj->isInitialized == 1) {
      c2_d_obj->isInitialized = 2;
      c2_g_obj = c2_d_obj;
      if (c2_g_obj->isSetupComplete) {
        c2_h_obj = c2_g_obj;
        c2_j_obj = &c2_h_obj->cSFunObject;
        c2_k_obj = c2_j_obj;

        /* System object Destructor function: dsp.UDPReceiver */
        c2_n_obj = c2_k_obj;

        /* System object Terminate function: dsp.UDPReceiver */
        c2_sErr = GetErrorBuffer(&c2_n_obj->W0_NetworkLib[0U]);
        LibTerminate(&c2_n_obj->W0_NetworkLib[0U]);
        if (*c2_sErr != 0) {
          PrintError(c2_sErr);
        }

        LibDestroy(&c2_n_obj->W0_NetworkLib[0U], 0);
        DestroyUDPInterface(&c2_n_obj->W0_NetworkLib[0U]);
      }
    }
  }

  c2_b_obj = &chartInstance->c2_udpSender;
  if (!c2_b_obj->matlabCodegenIsDeleted) {
    c2_b_obj->matlabCodegenIsDeleted = true;
    c2_e_obj = c2_b_obj;
    c2_f_obj = c2_e_obj;
    if (c2_f_obj->isInitialized == 1) {
      c2_f_obj->isInitialized = 2;
      c2_i_obj = c2_f_obj;
      if (c2_i_obj->isSetupComplete) {
        c2_l_obj = c2_i_obj;
        c2_m_obj = &c2_l_obj->cSFunObject;
        c2_o_obj = c2_m_obj;

        /* System object Destructor function: dsp.UDPSender */
        c2_p_obj = c2_o_obj;

        /* System object Terminate function: dsp.UDPSender */
        c2_b_sErr = GetErrorBuffer(&c2_p_obj->W0_NetworkLib[0U]);
        LibTerminate(&c2_p_obj->W0_NetworkLib[0U]);
        if (*c2_b_sErr != 0) {
          PrintError(c2_b_sErr);
        }

        LibDestroy(&c2_p_obj->W0_NetworkLib[0U], 1);
        DestroyUDPInterface(&c2_p_obj->W0_NetworkLib[0U]);
      }
    }
  }

  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void enable_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c2_ddmr_for_mstc2003(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance)
{
  static char_T c2_cv4[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T c2_cv5[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T c2_cv[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T c2_cv1[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T c2_cv6[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T c2_cv7[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T c2_cv2[4] = { 's', 't', 'e', 'p' };

  static char_T c2_cv3[4] = { 's', 't', 'e', 'p' };

  static uint8_T c2_varargin_1[5] = { 82U, 69U, 65U, 68U, 89U };

  c2_cell_wrap_3 c2_varSizes[1];
  c2_dsp_UDPReceiver_1 *c2_db_obj;
  c2_dsp_UDPReceiver_1 *c2_eb_obj;
  c2_dsp_UDPReceiver_1 *c2_v_obj;
  c2_dsp_UDPReceiver_1 *c2_wb_obj;
  c2_dsp_UDPReceiver_1 *c2_y_obj;
  c2_dsp_UDPSender_0 *c2_ib_obj;
  c2_dsp_UDPSender_0 *c2_kb_obj;
  c2_dsp_UDPSender_0 *c2_qb_obj;
  c2_dsp_UDPSender_0 *c2_u_obj;
  c2_dsp_UDPSender_0 *c2_w_obj;
  c2_dspcodegen_UDPReceiver *c2_b_this;
  c2_dspcodegen_UDPReceiver *c2_bb_obj;
  c2_dspcodegen_UDPReceiver *c2_c_obj;
  c2_dspcodegen_UDPReceiver *c2_cb_obj;
  c2_dspcodegen_UDPReceiver *c2_d_obj;
  c2_dspcodegen_UDPReceiver *c2_d_this;
  c2_dspcodegen_UDPReceiver *c2_e_this;
  c2_dspcodegen_UDPReceiver *c2_f_obj;
  c2_dspcodegen_UDPReceiver *c2_hb_obj;
  c2_dspcodegen_UDPReceiver *c2_i_obj;
  c2_dspcodegen_UDPReceiver *c2_j_obj;
  c2_dspcodegen_UDPReceiver *c2_m_obj;
  c2_dspcodegen_UDPReceiver *c2_o_obj;
  c2_dspcodegen_UDPReceiver *c2_ob_obj;
  c2_dspcodegen_UDPReceiver *c2_q_obj;
  c2_dspcodegen_UDPReceiver *c2_r_obj;
  c2_dspcodegen_UDPReceiver *c2_rb_obj;
  c2_dspcodegen_UDPReceiver *c2_sb_obj;
  c2_dspcodegen_UDPReceiver *c2_t_obj;
  c2_dspcodegen_UDPReceiver *c2_tb_obj;
  c2_dspcodegen_UDPReceiver *c2_ub_obj;
  c2_dspcodegen_UDPReceiver *c2_vb_obj;
  c2_dspcodegen_UDPSender *c2_ab_obj;
  c2_dspcodegen_UDPSender *c2_b_obj;
  c2_dspcodegen_UDPSender *c2_c_this;
  c2_dspcodegen_UDPSender *c2_e_obj;
  c2_dspcodegen_UDPSender *c2_fb_obj;
  c2_dspcodegen_UDPSender *c2_g_obj;
  c2_dspcodegen_UDPSender *c2_gb_obj;
  c2_dspcodegen_UDPSender *c2_h_obj;
  c2_dspcodegen_UDPSender *c2_jb_obj;
  c2_dspcodegen_UDPSender *c2_k_obj;
  c2_dspcodegen_UDPSender *c2_l_obj;
  c2_dspcodegen_UDPSender *c2_lb_obj;
  c2_dspcodegen_UDPSender *c2_mb_obj;
  c2_dspcodegen_UDPSender *c2_n_obj;
  c2_dspcodegen_UDPSender *c2_nb_obj;
  c2_dspcodegen_UDPSender *c2_obj;
  c2_dspcodegen_UDPSender *c2_p_obj;
  c2_dspcodegen_UDPSender *c2_pb_obj;
  c2_dspcodegen_UDPSender *c2_s_obj;
  c2_dspcodegen_UDPSender *c2_this;
  c2_dspcodegen_UDPSender *c2_x_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  real_T c2_d;
  int32_T c2_recv_size[2];
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_loop_ub;
  int32_T c2_recv;
  int32_T c2_samplesRead;
  real32_T c2_b_heading[100];
  real32_T c2_b_x[100];
  real32_T c2_b_y[100];
  real32_T c2_vals[3];
  char_T *c2_b_sErr;
  char_T *c2_c_sErr;
  char_T *c2_d_sErr;
  char_T *c2_sErr;
  uint8_T c2_recv_data[8192];
  uint8_T c2_c_x[12];
  uint8_T c2_U0[5];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b_flag;
  boolean_T c2_flag;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U,
                    *chartInstance->c2_unused);
  chartInstance->c2_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  for (c2_i = 0; c2_i < 100; c2_i++) {
    c2_b_x[c2_i] = 0.0F;
  }

  for (c2_i1 = 0; c2_i1 < 100; c2_i1++) {
    c2_b_y[c2_i1] = 0.0F;
  }

  for (c2_i2 = 0; c2_i2 < 100; c2_i2++) {
    c2_b_heading[c2_i2] = 0.0F;
  }

  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 0,
                     !chartInstance->c2_udpSender_not_empty)) {
    c2_b_st.site = &c2_e_emlrtRSI;
    c2_obj = &chartInstance->c2_udpSender;
    c2_b_obj = c2_obj;
    c2_c_st.site = &c2_d_emlrtRSI;
    c2_e_obj = c2_b_obj;
    c2_b_obj = c2_e_obj;
    c2_d_st.site = &c2_j_emlrtRSI;
    c2_h_obj = c2_b_obj;
    c2_b_obj = c2_h_obj;
    c2_this = c2_b_obj;
    c2_b_obj = c2_this;
    c2_d_st.site = &c2_j_emlrtRSI;
    c2_l_obj = c2_b_obj;
    c2_b_obj = c2_l_obj;
    c2_c_this = c2_b_obj;
    c2_b_obj = c2_c_this;
    c2_b_obj->isInitialized = 0;
    c2_x_obj = c2_b_obj;
    c2_x_obj->tunablePropertyChanged = false;
    c2_b_obj->NoTuningBeforeLockingCodeGenError = true;

    /* System object Constructor function: dsp.UDPSender */
    c2_c_st.site = &c2_d_emlrtRSI;
    c2_fb_obj = c2_b_obj;
    c2_d_st.site = &c2_k_emlrtRSI;
    c2_jb_obj = c2_fb_obj;
    c2_lb_obj = c2_jb_obj;
    c2_mb_obj = c2_lb_obj;
    c2_nb_obj = c2_mb_obj;
    c2_flag = (c2_nb_obj->isInitialized == 1);
    if (c2_flag) {
      c2_mb_obj->TunablePropsChanged = true;
      c2_mb_obj->tunablePropertyChanged = true;
    }

    c2_pb_obj = c2_lb_obj;
    c2_qb_obj = &c2_pb_obj->cSFunObject;
    c2_qb_obj->P0_Port = 25002;
    c2_pb_obj->RemoteIPPort = 25002.0;
    c2_b_obj->NoTuningBeforeLockingCodeGenError = false;
    c2_b_obj->matlabCodegenIsDeleted = false;
    chartInstance->c2_udpSender_not_empty = true;
  }

  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 1,
                     !chartInstance->c2_udpReceiver_not_empty)) {
    c2_b_st.site = &c2_f_emlrtRSI;
    c2_c_obj = &chartInstance->c2_udpReceiver;
    c2_d_obj = c2_c_obj;
    c2_c_st.site = &c2_c_emlrtRSI;
    c2_f_obj = c2_d_obj;
    c2_d_obj = c2_f_obj;
    c2_d_st.site = &c2_j_emlrtRSI;
    c2_j_obj = c2_d_obj;
    c2_d_obj = c2_j_obj;
    c2_b_this = c2_d_obj;
    c2_d_obj = c2_b_this;
    c2_d_st.site = &c2_j_emlrtRSI;
    c2_q_obj = c2_d_obj;
    c2_d_obj = c2_q_obj;
    c2_d_this = c2_d_obj;
    c2_d_obj = c2_d_this;
    c2_d_obj->isInitialized = 0;
    c2_bb_obj = c2_d_obj;
    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_bb_obj->tunablePropertyChanged[c2_i5] = false;
    }

    c2_c_st.site = &c2_c_emlrtRSI;
    c2_hb_obj = c2_d_obj;
    c2_d_obj = c2_hb_obj;
    c2_d_st.site = &c2_m_emlrtRSI;
    c2_e_this = c2_d_obj;
    c2_d_obj = c2_e_this;
    c2_d_obj->NoTuningBeforeLockingCodeGenError = true;

    /* System object Constructor function: dsp.UDPReceiver */
    c2_c_st.site = &c2_c_emlrtRSI;
    c2_ob_obj = c2_d_obj;
    c2_d_st.site = &c2_k_emlrtRSI;
    c2_rb_obj = c2_ob_obj;
    c2_sb_obj = c2_rb_obj;
    c2_tb_obj = c2_sb_obj;
    c2_ub_obj = c2_tb_obj;
    c2_b_flag = (c2_ub_obj->isInitialized == 1);
    if (c2_b_flag) {
      c2_tb_obj->TunablePropsChanged = true;
      c2_tb_obj->tunablePropertyChanged[0] = true;
    }

    c2_vb_obj = c2_sb_obj;
    c2_wb_obj = &c2_vb_obj->cSFunObject;
    c2_wb_obj->P0_Port = 25001;
    c2_vb_obj->LocalIPPort = 25001.0;
    c2_d_obj->NoTuningBeforeLockingCodeGenError = false;
    c2_d_obj->matlabCodegenIsDeleted = false;
    chartInstance->c2_udpReceiver_not_empty = true;
  }

  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 2,
                     !chartInstance->c2_isReadySent_not_empty)) {
    chartInstance->c2_isReadySent = false;
    chartInstance->c2_isReadySent_not_empty = true;
  }

  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 3, covrtEmlMcdcEval
                     (chartInstance->c2_covrtInstance, 4U, 0, 0,
                      !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0,
         0, chartInstance->c2_isReadySent)))) {
    c2_b_st.site = &c2_g_emlrtRSI;
    c2_g_obj = &chartInstance->c2_udpSender;
    if (c2_g_obj->isInitialized == 2) {
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                    false);
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                    false);
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 4),
                    false);
      sf_mex_call(&c2_b_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14, c2_g_y)));
    }

    if (c2_g_obj->isInitialized != 1) {
      c2_c_st.site = &c2_b_emlrtRSI;
      c2_k_obj = c2_g_obj;
      c2_d_st.site = &c2_b_emlrtRSI;
      c2_p_obj = c2_k_obj;
      c2_p_obj->isSetupComplete = false;
      if (c2_p_obj->isInitialized != 0) {
        c2_i_y = NULL;
        sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          51), false);
        c2_k_y = NULL;
        sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          51), false);
        c2_m_y = NULL;
        sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv6, 10, 0U, 1U, 0U, 2, 1,
          5), false);
        sf_mex_call(&c2_d_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_i_y, 14,
                    sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_k_y, 14, c2_m_y)));
      }

      c2_p_obj->isInitialized = 1;
      c2_ab_obj = c2_p_obj;
      for (c2_i4 = 0; c2_i4 < 8; c2_i4++) {
        c2_varSizes[0].f1[c2_i4] = 1U;
      }

      c2_ab_obj->inputVarSize[0] = c2_varSizes[0];
      c2_gb_obj = c2_p_obj;
      c2_ib_obj = &c2_gb_obj->cSFunObject;
      c2_kb_obj = c2_ib_obj;

      /* System object Start function: dsp.UDPSender */
      c2_d_sErr = GetErrorBuffer(&c2_kb_obj->W0_NetworkLib[0U]);
      CreateUDPInterface(&c2_kb_obj->W0_NetworkLib[0U]);
      if (*c2_d_sErr == 0) {
        LibCreate_Network(&c2_kb_obj->W0_NetworkLib[0U], 1, "0.0.0.0", -1,
                          "127.0.0.1", c2_kb_obj->P0_Port, 8192, 1, 0);
      }

      if (*c2_d_sErr == 0) {
        LibStart(&c2_kb_obj->W0_NetworkLib[0U]);
      }

      if (*c2_d_sErr != 0) {
        DestroyUDPInterface(&c2_kb_obj->W0_NetworkLib[0U]);
        if (*c2_d_sErr != 0) {
          PrintError(c2_d_sErr);
        }
      }

      c2_gb_obj->NoTuningBeforeLockingCodeGenError = true;
      c2_p_obj->isSetupComplete = true;
    }

    c2_c_st.site = &c2_b_emlrtRSI;
    c2_n_obj = c2_g_obj;
    c2_d_st.site = &c2_b_emlrtRSI;
    c2_s_obj = c2_n_obj;
    c2_u_obj = &c2_s_obj->cSFunObject;
    c2_w_obj = c2_u_obj;
    for (c2_i3 = 0; c2_i3 < 5; c2_i3++) {
      c2_U0[c2_i3] = c2_varargin_1[c2_i3];
    }

    /* System object Update function: dsp.UDPSender */
    c2_b_sErr = GetErrorBuffer(&c2_w_obj->W0_NetworkLib[0U]);
    LibUpdate_Network(&c2_w_obj->W0_NetworkLib[0U], &c2_U0[0], 5);
    if (*c2_b_sErr != 0) {
      PrintError(c2_b_sErr);
    }

    chartInstance->c2_isReadySent = true;
  }

  c2_b_st.site = &c2_h_emlrtRSI;
  c2_i_obj = &chartInstance->c2_udpReceiver;
  if (c2_i_obj->isInitialized == 2) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c2_b_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_f_y, 14, c2_h_y)));
  }

  if (c2_i_obj->isInitialized != 1) {
    c2_c_st.site = &c2_b_emlrtRSI;
    c2_m_obj = c2_i_obj;
    c2_d_st.site = &c2_b_emlrtRSI;
    c2_r_obj = c2_m_obj;
    c2_r_obj->isSetupComplete = false;
    if (c2_r_obj->isInitialized != 0) {
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c2_l_y = NULL;
      sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c2_n_y = NULL;
      sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv7, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c2_d_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                  sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_l_y, 14, c2_n_y)));
    }

    c2_r_obj->isInitialized = 1;
    c2_cb_obj = c2_r_obj;
    c2_db_obj = &c2_cb_obj->cSFunObject;
    c2_eb_obj = c2_db_obj;

    /* System object Start function: dsp.UDPReceiver */
    c2_c_sErr = GetErrorBuffer(&c2_eb_obj->W0_NetworkLib[0U]);
    CreateUDPInterface(&c2_eb_obj->W0_NetworkLib[0U]);
    if (*c2_c_sErr == 0) {
      LibCreate_Network(&c2_eb_obj->W0_NetworkLib[0U], 0, "0.0.0.0",
                        c2_eb_obj->P0_Port, "0.0.0.0", -1, 8192, 1, 0);
    }

    if (*c2_c_sErr == 0) {
      LibStart(&c2_eb_obj->W0_NetworkLib[0U]);
    }

    if (*c2_c_sErr != 0) {
      DestroyUDPInterface(&c2_eb_obj->W0_NetworkLib[0U]);
      if (*c2_c_sErr != 0) {
        PrintError(c2_c_sErr);
      }
    }

    c2_cb_obj->NoTuningBeforeLockingCodeGenError = true;
    c2_r_obj->isSetupComplete = true;
  }

  c2_c_st.site = &c2_b_emlrtRSI;
  c2_o_obj = c2_i_obj;
  c2_d_st.site = &c2_b_emlrtRSI;
  c2_t_obj = c2_o_obj;
  c2_v_obj = &c2_t_obj->cSFunObject;
  c2_y_obj = c2_v_obj;

  /* System object Outputs function: dsp.UDPReceiver */
  c2_sErr = GetErrorBuffer(&c2_y_obj->W0_NetworkLib[0U]);
  c2_y_obj->O0_Y0.size[0] = 8192;
  c2_y_obj->O0_Y0.size[1] = 1;
  c2_samplesRead = 8192;
  LibOutputs_Network(&c2_y_obj->W0_NetworkLib[0U], &c2_y_obj->O0_Y0.data[0U],
                     &c2_samplesRead);
  if (*c2_sErr != 0) {
    PrintError(c2_sErr);
  }

  c2_y_obj->O0_Y0.size[0] = c2_samplesRead;
  c2_y_obj->O0_Y0.size[1] = 1;
  c2_recv_size[0] = c2_y_obj->O0_Y0.size[0];
  c2_recv_size[1] = c2_y_obj->O0_Y0.size[1];
  c2_loop_ub = c2_y_obj->O0_Y0.size[0] * c2_y_obj->O0_Y0.size[1] - 1;
  for (c2_i6 = 0; c2_i6 <= c2_loop_ub; c2_i6++) {
    c2_recv_data[c2_i6] = c2_y_obj->O0_Y0.data[c2_i6];
  }

  c2_b = (c2_recv_size[0] == 0);
  c2_b1 = (c2_recv_size[1] == 0);
  if (!covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 4, c2_b || c2_b1))
  {
    c2_i7 = c2__s32_s64_(chartInstance, (int64_T)c2_recv_size[0] * (int64_T)
                         c2_recv_size[1], 0, 1U, 1299, 11);
    if (c2_i7 < 0) {
      emlrtDynamicBoundsCheckR2012b(c2_i7, 0, MAX_int32_T, &c2_emlrtBCI, &c2_st);
    }

    c2_d = (real_T)c2_i7;
    if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 5,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c2_covrtInstance, 4U, 0U, 0U, c2_d, 12.0,
                        -1, 5U, c2_d >= 12.0))) {
      c2_b_st.site = &c2_i_emlrtRSI;
      c2_indexShapeCheck(chartInstance, &c2_b_st, c2_recv_size);
      c2_b_st.site = &c2_i_emlrtRSI;
      c2_recv = c2__s32_s64_(chartInstance, (int64_T)c2_recv_size[0] * (int64_T)
        c2_recv_size[1], 0, 1U, 1343, 10);
      for (c2_i11 = 0; c2_i11 < 12; c2_i11++) {
        c2_i12 = c2_i11 + 1;
        if ((c2_i12 < 1) || (c2_i12 > c2_recv)) {
          emlrtDynamicBoundsCheckR2012b(c2_i12, 1, c2_recv, &c2_b_emlrtBCI,
            &c2_b_st);
        }

        c2_c_x[c2_i11] = c2_recv_data[c2_i12 - 1];
      }

      memcpy((void *)&c2_vals[0], (void *)&c2_c_x[0], (uint32_T)((size_t)3 *
              sizeof(real32_T)));
      c2_b_x[0] = c2_vals[0];
      c2_b_y[0] = c2_vals[1];
      c2_b_heading[0] = c2_vals[2];
    }
  }

  *chartInstance->c2_vel_left = 0.0F;
  *chartInstance->c2_vel_right = 0.0F;
  for (c2_i8 = 0; c2_i8 < 100; c2_i8++) {
    (*chartInstance->c2_x)[c2_i8] = c2_b_x[c2_i8];
  }

  for (c2_i9 = 0; c2_i9 < 100; c2_i9++) {
    (*chartInstance->c2_y)[c2_i9] = c2_b_y[c2_i9];
  }

  for (c2_i10 = 0; c2_i10 < 100; c2_i10++) {
    (*chartInstance->c2_heading)[c2_i10] = c2_b_heading[c2_i10];
  }

  c2_do_animation_call_c2_ddmr_for_mstc2003(chartInstance);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, (real_T)
                    *chartInstance->c2_vel_left);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U, (real_T)
                    *chartInstance->c2_vel_right);
  for (c2_i13 = 0; c2_i13 < 100; c2_i13++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U, (real_T)
                      (*chartInstance->c2_x)[c2_i13]);
  }

  for (c2_i14 = 0; c2_i14 < 100; c2_i14++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 4U, (real_T)
                      (*chartInstance->c2_y)[c2_i14]);
  }

  for (c2_i15 = 0; c2_i15 < 100; c2_i15++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 5U, (real_T)
                      (*chartInstance->c2_heading)[c2_i15]);
  }
}

static void ext_mode_exec_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_update_jit_animation_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_st;
  c2_st = NULL;
  c2_st = NULL;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_createcellmatrix(9, 1), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", *chartInstance->c2_heading, 1, 0U,
    1U, 0U, 1, 100), false);
  sf_mex_setcell(c2_b_y, 0, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", chartInstance->c2_vel_left, 1, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 1, c2_d_y);
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", chartInstance->c2_vel_right, 1, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 2, c2_e_y);
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", *chartInstance->c2_x, 1, 0U, 1U, 0U,
    1, 100), false);
  sf_mex_setcell(c2_b_y, 3, c2_f_y);
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y", *chartInstance->c2_y, 1, 0U, 1U, 0U,
    1, 100), false);
  sf_mex_setcell(c2_b_y, 4, c2_g_y);
  c2_h_y = NULL;
  sf_mex_assign(&c2_h_y, sf_mex_create("y", &chartInstance->c2_isInitialized, 11,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 5, c2_h_y);
  c2_i_y = NULL;
  sf_mex_assign(&c2_i_y, sf_mex_create("y", &chartInstance->c2_b_isInitialized,
    11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 6, c2_i_y);
  c2_j_y = NULL;
  if (!chartInstance->c2_isReadySent_not_empty) {
    sf_mex_assign(&c2_j_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_j_y, sf_mex_create("y", &chartInstance->c2_isReadySent, 11,
      0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c2_b_y, 7, c2_j_y);
  c2_k_y = NULL;
  sf_mex_assign(&c2_k_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_ddmr_for_mstc2003, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 8, c2_k_y);
  sf_mex_assign(&c2_st, c2_b_y, false);
  return c2_st;
}

static void set_sim_state_c2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  real32_T c2_fv[100];
  real32_T c2_fv1[100];
  real32_T c2_fv2[100];
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)),
                      "heading", c2_fv);
  for (c2_i = 0; c2_i < 100; c2_i++) {
    (*chartInstance->c2_heading)[c2_i] = c2_fv[c2_i];
  }

  *chartInstance->c2_vel_left = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 1)), "vel_left");
  *chartInstance->c2_vel_right = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 2)), "vel_right");
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 3)), "x",
                      c2_fv1);
  for (c2_i1 = 0; c2_i1 < 100; c2_i1++) {
    (*chartInstance->c2_x)[c2_i1] = c2_fv1[c2_i1];
  }

  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 4)), "y",
                      c2_fv2);
  for (c2_i2 = 0; c2_i2 < 100; c2_i2++) {
    (*chartInstance->c2_y)[c2_i2] = c2_fv2[c2_i2];
  }

  chartInstance->c2_isInitialized = c2_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 5)), "isInitialized");
  chartInstance->c2_b_isInitialized = c2_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 6)), "isInitialized");
  chartInstance->c2_isReadySent = c2_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 7)), "isReadySent",
    &chartInstance->c2_isReadySent_not_empty);
  chartInstance->c2_is_active_c2_ddmr_for_mstc2003 = c2_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 8)),
     "is_active_c2_ddmr_for_mstc2003");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void initSimStructsc2_ddmr_for_mstc2003
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c2_ddmr_for_mstc2003_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static void c2_indexShapeCheck(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, int32_T c2_matrixSize[2])
{
  static char_T c2_cv[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'M', 'a', 't', 'r', 'i', 'x', 'M',
    'a', 't', 'r', 'i', 'x', '_', 'M', 'V' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  boolean_T c2_b;
  boolean_T c2_b_c;
  boolean_T c2_c;
  boolean_T c2_c_c;
  boolean_T c2_d_c;
  boolean_T c2_nonSingletonDimFound;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_nonSingletonDimFound = false;
  if (c2_matrixSize[0] != 1) {
    c2_nonSingletonDimFound = true;
  }

  if (c2_matrixSize[1] != 1) {
    if (c2_nonSingletonDimFound) {
      c2_b = false;
    } else {
      c2_nonSingletonDimFound = true;
      c2_b = c2_nonSingletonDimFound;
    }
  } else {
    c2_b = c2_nonSingletonDimFound;
  }

  if (c2_b) {
    if (c2_matrixSize[0] != 1) {
      c2_b_c = true;
    } else {
      c2_b_c = false;
    }

    if (c2_b_c || (c2_matrixSize[1] == 1)) {
      c2_b_c = true;
    } else {
      c2_b_c = false;
    }

    c2_d_c = c2_b_c;
    if (c2_d_c) {
      c2_c = true;
    } else {
      c2_c = false;
    }
  } else {
    c2_c = false;
  }

  c2_st.site = &c2_n_emlrtRSI;
  c2_c_c = c2_c;
  if (c2_c_c) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(&c2_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }
}

static void c2_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_b_heading, const char_T *c2_identifier,
  real32_T c2_b_y[100])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_heading), &c2_thisId,
                        c2_b_y);
  sf_mex_destroy(&c2_b_heading);
}

static void c2_b_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real32_T c2_b_y[100])
{
  int32_T c2_i;
  real32_T c2_fv[100];
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_fv, 0, 1, 0U, 1, 0U, 1, 100);
  for (c2_i = 0; c2_i < 100; c2_i++) {
    c2_b_y[c2_i] = c2_fv[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static real32_T c2_c_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_b_vel_left, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  real32_T c2_b_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_vel_left),
    &c2_thisId);
  sf_mex_destroy(&c2_b_vel_left);
  return c2_b_y;
}

static real32_T c2_d_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real32_T c2_b_y;
  real32_T c2_f;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_f, 0, 1, 0U, 0, 0U, 0);
  c2_b_y = c2_f;
  sf_mex_destroy(&c2_u);
  return c2_b_y;
}

static boolean_T c2_e_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_c_isInitialized, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  boolean_T c2_b_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_c_isInitialized),
    &c2_thisId);
  sf_mex_destroy(&c2_c_isInitialized);
  return c2_b_y;
}

static boolean_T c2_f_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  boolean_T c2_b;
  boolean_T c2_b_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b, 1, 11, 0U, 0, 0U, 0);
  c2_b_y = c2_b;
  sf_mex_destroy(&c2_u);
  return c2_b_y;
}

static boolean_T c2_g_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_b_isReadySent, const char_T *c2_identifier,
  boolean_T *c2_svPtr)
{
  emlrtMsgIdentifier c2_thisId;
  boolean_T c2_b_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_isReadySent),
    &c2_thisId, c2_svPtr);
  sf_mex_destroy(&c2_b_isReadySent);
  return c2_b_y;
}

static boolean_T c2_h_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  boolean_T *c2_svPtr)
{
  boolean_T c2_b;
  boolean_T c2_b_y;
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b, 1, 11, 0U, 0, 0U, 0);
    c2_b_y = c2_b;
  }

  sf_mex_destroy(&c2_u);
  return c2_b_y;
}

static uint8_T c2_i_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_ddmr_for_mstc2003, const
  char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_b_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_ddmr_for_mstc2003), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_ddmr_for_mstc2003);
  return c2_b_y;
}

static uint8_T c2_j_emlrt_marshallIn(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_u;
  uint8_T c2_b_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_b_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_b_y;
}

static void c2_slStringInitializeDynamicBuffers
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_chart_data_browse_helper(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig)
{
  real_T c2_d;
  real32_T c2_f;
  real32_T c2_f1;
  *c2_mxData = NULL;
  *c2_mxData = NULL;
  *c2_isValueTooBig = 0U;
  switch (c2_ssIdNumber) {
   case 6U:
    c2_f = *chartInstance->c2_vel_left;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_f, 1, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c2_f1 = *chartInstance->c2_vel_right;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_f1, 1, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_x, 1, 0U,
      1U, 0U, 1, 100), false);
    break;

   case 4U:
    c2_d = *chartInstance->c2_unused;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_y, 1, 0U,
      1U, 0U, 1, 100), false);
    break;

   case 9U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_heading,
      1, 0U, 1U, 0U, 1, 100), false);
    break;
  }
}

static void c2_emxInitStruct_dspcodegen_UDPRec
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance,
   c2_dspcodegen_UDPReceiver *c2_pStruct)
{
  c2_emxInitStruct_dsp_UDPReceiver_1(chartInstance, &c2_pStruct->cSFunObject);
}

static void c2_emxInitStruct_dsp_UDPReceiver_1
  (SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance, c2_dsp_UDPReceiver_1
   *c2_pStruct)
{
  (void)chartInstance;
  c2_pStruct->O0_Y0.size[0] = 0;
  c2_pStruct->O0_Y0.size[1] = 0;
}

static int32_T c2__s32_s64_(SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance,
  int64_T c2_b, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc, int32_T
  c2_offset_src_loc, int32_T c2_length_src_loc)
{
  int32_T c2_a;
  (void)c2_EMLOvCount_src_loc;
  c2_a = (int32_T)c2_b;
  if ((int64_T)c2_a != c2_b) {
    sf_data_overflow_error(chartInstance->S, c2_ssid_src_loc, c2_offset_src_loc,
      c2_length_src_loc);
  }

  return c2_a;
}

static void init_dsm_address_info(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_ddmr_for_mstc2003InstanceStruct
  *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_vel_left = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_vel_right = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_x = (real32_T (*)[100])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_unused = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_y = (real32_T (*)[100])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c2_heading = (real32_T (*)[100])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_ddmr_for_mstc2003_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1255312690U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2132530273U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3053623975U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1579974158U);
}

mxArray *sf_c2_ddmr_for_mstc2003_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_ddmr_for_mstc2003_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("third_party_libs");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("auxInfo:includePaths");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_ddmr_for_mstc2003_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_ddmr_for_mstc2003(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCO4GBgYAPSQIqBiQECWKF8RiDmhNIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Cs5oOtnwaKfHUm/AJSfkZqYkpmXDnY/LJwGzh"
    "8SRPmDA80fIH5Zak58TmpayeDwhwzYHw4E/MGJ5g9OqD+KMtMzSpD8MfD+UQD7x4CAfxhR/MPIU"
    "DFo3C9ClvsrqeZ+AQfK9EPsJ5SeeNHSE4ifWeyZl1mSmZiTWZWaMuqfAfUPN5p/uMH+CQKWwJXB"
    "qXklcHMuMOCvpxjR6ikmKB+kJ4chk6EAi3uw+YcJzT8CMM8UlDlAsn05VcKF8vhRoIo7AgjEjxx"
    "a/MiB4yc+Mbkksyw1PtkoPiUltyg+Lb8oPre4JNnIwMAY4T8APTNLPA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_ddmr_for_mstc2003_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sD2CE15OF00NtW8XKKqG4UH";
}

static void sf_opaque_initialize_c2_ddmr_for_mstc2003(void *chartInstanceVar)
{
  initialize_params_c2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
    chartInstanceVar);
  initialize_c2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_ddmr_for_mstc2003(void *chartInstanceVar)
{
  enable_c2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c2_ddmr_for_mstc2003(void *chartInstanceVar)
{
  disable_c2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c2_ddmr_for_mstc2003(void *chartInstanceVar)
{
  sf_gateway_c2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_ddmr_for_mstc2003(SimStruct* S)
{
  return get_sim_state_c2_ddmr_for_mstc2003
    ((SFc2_ddmr_for_mstc2003InstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_ddmr_for_mstc2003(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_ddmr_for_mstc2003(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_ddmr_for_mstc2003InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ddmr_for_mstc2003_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_ddmr_for_mstc2003
      ((SFc2_ddmr_for_mstc2003InstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_ddmr_for_mstc2003(void *chartInstanceVar)
{
  mdl_start_c2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_ddmr_for_mstc2003(void *chartInstanceVar)
{
  mdl_terminate_c2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_ddmr_for_mstc2003(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc2_ddmr_for_mstc2003((SFc2_ddmr_for_mstc2003InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_ddmr_for_mstc2003_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [24] = {
    "eNrtWctu20YUpQ0nteE4EIoC6SJwjK66KeA4DZBF0cjWI1EjP1DKTtCNOiavxIGGM/TMUI/+SXd",
    "d9hP6EV102WU/od21KFD0DkUpKq1KHMmonTQEKGpEnrn33LkvjpyV2qGDx108v37gOLfxuo7nqj",
    "M8bqXjlYlz+Pua81k6Lm46Do/DEyJJqBz7g5MQvgQlWKyp4DXeEvmxlLdAAvdwgkhIbSVX0TBml",
    "HeqMfeMZPUyoF7gBiJm/gFOSPxjzgb/JjeK9QlKLFMJnq4C+DqQIm4HVUbas60gda8UgNdRcWht",
    "KwXajSNDVR3GTNOIQaUPXo0rTdAKag5fVxMNJd23M7Lhq9wRWoQRo4Tnt3VAlAsReoeG08jHz+N",
    "Yo/VyYb2ASH0AAemCqtNOIl1wyCWdKnz6nHKihaSEVUJWMrPl5HvCkOOh8IHZrhHyPZBAOpGgXF",
    "sGhFtFO1c4OWdQhvO4bSnXhYvYRMMZhR5Iu/VtlUQXJGnDMbfTOVmjSj9xynEs5cRqGsIZkfse+",
    "q4C3y5vYNApl6A7QgOnscJCYuKaakjaRd+wkxuHNRP+C+W6OBx6v1oIm8itdMHar8Zyqx4vEcaU",
    "HbYhojp0gSXyy0STBbBD+RZgpajfEOgdJttYZqyYU4yEFFsS3Kf5vbKbQSWF7QiLVA44DU0YgI9",
    "mHqs+nmheHMVKi7CEKadcr+eUdxlb4xpki3iQu8ZIQhWgwolfWcr1qTKBhGi0kk5Y5p5hGIMLQR",
    "3Vinm5J2QHbWxbzF7bykSCHRr8NiZmDUmSq6B3nxEW59Q5VG2MH3SPU4VZ1k4uYk38LAT2iBeAb",
    "yonZXCIeRYnyLvEypT8fWTbpXpQBuVJGuWNpBgTOhZdY6XGIIJT3uGix6tShG7aec3wKwDMGkRy",
    "ytsHWMLloIrK59NawkUjye62TY6xM9GMnBvfeAYcq6HharoG4mFUVbgnfFRoGaxLv8EmhiuqNBb",
    "qwbDU+0n/veu87r/v5Oi/R337LJxzCeeMcaPrxxP4lSlynYlrVt7G6mw9V/HbSoorTuC2MnLWMj",
    "jzXAHPL77b/uW39/88+qv/w4/ffv/H2TLy1zfs3m/upuP7ox5nnFG7l5KOefb5hF5rU+a/NzF/I",
    "R2r8l6p8vDxcXV390i/fPLqxYuLZ5+ePk/me7U+W9+NjL6j33dMX4UBl8Sv9Gp++o5lxiQe9v5m",
    "/icT+t6eY4+NCX9ynF+fLof/qJjFT7PXexl7mXGAb2UmAif99/p4fJiLx3qGhxljP9Rk0NI3g8f",
    "9YjY+1+b4WyEdGx6StgM9Ja9cH5+dYjZPrM3BF/Bb/8bo/8FC+g+uTP9CcTn85Xw/Tf+tjD9tJe",
    "+hNY6tIGFYJv13fK6Vz2aGz2bCx+yLDdzRDoyZ5yfHrq6upmODYQ51oin6TOOzmuFTGJGJusVh2",
    "PeuxC7Lr8/OlehxMmd9tjPrs52sT5OYbh2a3l7T90PZbAnZDJX29nZ3H/2Tn20f9Q73ZuNW/of8",
    "8rxHLYq7tSDO+Y9xy/KzfT9805+f1Xc5mecLN5hH9rroPsFN4/WzZb/xIB1/Pt5TLgWU+VN2tdL",
    "bdSCtaXffEv/+3dJ+o32LirFf+ufjV4/2OWEDRYdbcqOfT6T5D2l8SwJR0/cKr6Oe5O1772Ti24",
    "x7lPuipz55uPd4b5n69DfL+z4u",
    ""
  };

  static char newstr [1677] = "";
  newstr[0] = '\0';
  for (i = 0; i < 24; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_ddmr_for_mstc2003(SimStruct *S)
{
  const char* newstr = sf_c2_ddmr_for_mstc2003_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3760103498U));
  ssSetChecksum1(S,(1325077233U));
  ssSetChecksum2(S,(3434641662U));
  ssSetChecksum3(S,(1459202201U));
}

static void mdlRTW_c2_ddmr_for_mstc2003(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_ddmr_for_mstc2003(SimStruct *S)
{
  SFc2_ddmr_for_mstc2003InstanceStruct *chartInstance;
  chartInstance = (SFc2_ddmr_for_mstc2003InstanceStruct *)utMalloc(sizeof
    (SFc2_ddmr_for_mstc2003InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_ddmr_for_mstc2003InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && ssGetNumContStates(ssGetRootSS(S)) > 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_ddmr_for_mstc2003;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_ddmr_for_mstc2003(chartInstance);
}

void c2_ddmr_for_mstc2003_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_ddmr_for_mstc2003(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_ddmr_for_mstc2003(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_ddmr_for_mstc2003(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_ddmr_for_mstc2003_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
