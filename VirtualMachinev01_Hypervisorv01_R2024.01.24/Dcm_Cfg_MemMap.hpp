
#ifndef NOT_READY_FOR_TESTING_OR_DEPLOYMENT
#error The content of this file is a template which provides empty stubs. The content of this file must be completed by the integrator accordingly to project specific requirements
#endif

#define MEMMAP_ERROR

#if defined(DCM_START_SEC_CODE)
#if defined DCM_WAS_STARTED_SEC_ROM_CODE
      #error DCM_WAS_STARTED_SEC_ROM_CODE already defined
   #endif
#define BSW_START_SEC_DEFAULT_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_CODE
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_CODE
#define DCM_WAS_STARTED_SEC_ROM_CODE
#elif defined(DCM_STOP_SEC_CODE)
#if ! defined DCM_WAS_STARTED_SEC_ROM_CODE
      #error DCM_STOP_SEC_ROM_CODE without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_ROM_CODE
   #endif
#define BSW_STOP_SEC_DEFAULT_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_CODE
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_CODE
#elif defined(DCM_START_SEC_CONST_UNSPECIFIED)
#if defined DCM_WAS_STARTED_SEC_CONST_UNSPECIFIED
      #error DCM_WAS_STARTED_SEC_CONST_UNSPECIFIED already defined
   #endif
#define BSW_START_SEC_DEFAULT_CONST_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_CONST_UNSPECIFIED
#define DCM_WAS_STARTED_SEC_CONST_UNSPECIFIED
#elif defined(DCM_STOP_SEC_CONST_UNSPECIFIED)
#if ! defined DCM_WAS_STARTED_SEC_CONST_UNSPECIFIED
      #error DCM_STOP_SEC_CONST_UNSPECIFIED without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_CONST_UNSPECIFIED
   #endif
#define BSW_STOP_SEC_DEFAULT_CONST_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_CONST_UNSPECIFIED
#elif defined(DCM_START_SEC_CONST_8)
#if defined DCM_WAS_STARTED_SEC_CONST_8
      #error DCM_WAS_STARTED_SEC_CONST_8 already defined
   #endif
#define BSW_START_SEC_DEFAULT_CONST_8
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_CONST_8
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_CONST_8
#define DCM_WAS_STARTED_SEC_CONST_8
#elif defined(DCM_STOP_SEC_CONST_8)
#if ! defined DCM_WAS_STARTED_SEC_CONST_8
      #error DCM_STOP_SEC_CONST_8 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_CONST_8
   #endif
#define BSW_STOP_SEC_DEFAULT_CONST_8
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_CONST_8
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_CONST_8
#elif defined(DCM_START_SEC_CONST_16)
#if defined DCM_WAS_STARTED_SEC_CONST_16
      #error DCM_WAS_STARTED_SEC_CONST_16 already defined
   #endif
#define BSW_START_SEC_DEFAULT_CONST_16
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_CONST_16
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_CONST_16
#define DCM_WAS_STARTED_SEC_CONST_16
#elif defined(DCM_STOP_SEC_CONST_16)
#if ! defined DCM_WAS_STARTED_SEC_CONST_16
      #error DCM_STOP_SEC_CONST_16 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_CONST_16
   #endif
#define BSW_STOP_SEC_DEFAULT_CONST_16
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_CONST_16
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_CONST_16
#elif defined(DCM_START_SEC_CONST_32)
#if defined DCM_WAS_STARTED_SEC_CONST_32
      #error DCM_WAS_STARTED_SEC_CONST_32 already defined
   #endif
#define BSW_START_SEC_DEFAULT_CONST_32
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_CONST_32
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_CONST_32
#define DCM_WAS_STARTED_SEC_CONST_32
#elif defined(DCM_STOP_SEC_CONST_32)
#if ! defined DCM_WAS_STARTED_SEC_CONST_32
      #error DCM_STOP_SEC_CONST_32 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_CONST_32
   #endif
#define BSW_STOP_SEC_DEFAULT_CONST_32
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_CONST_32
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_CONST_32
#elif defined(DCM_START_SEC_VAR_INIT_8)
#if defined DCM_WAS_STARTED_SEC_VAR_INIT_8
      #error DCM_WAS_STARTED_SEC_VAR_INIT_8 already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_INIT_8
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_INIT_8
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_INIT_8
#define DCM_WAS_STARTED_SEC_VAR_INIT_8
#elif defined(DCM_STOP_SEC_VAR_INIT_8)
#if ! defined DCM_WAS_STARTED_SEC_VAR_INIT_8
      #error DCM_STOP_SEC_VAR_INIT_8 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_INIT_8
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_INIT_8
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_INIT_8
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_INIT_8
#elif defined(DCM_START_SEC_VAR_INIT_16)
#if defined DCM_WAS_STARTED_SEC_VAR_INIT_16
      #error DCM_WAS_STARTED_SEC_VAR_INIT_16 already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_INIT_16
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_INIT_16
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_INIT_16
#define DCM_WAS_STARTED_SEC_VAR_INIT_16
#elif defined(DCM_STOP_SEC_VAR_INIT_16)
#if ! defined DCM_WAS_STARTED_SEC_VAR_INIT_16
      #error DCM_STOP_SEC_VAR_INIT_16 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_INIT_16
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_INIT_16
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_INIT_16
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_INIT_16
#elif defined(DCM_START_SEC_VAR_INIT_32)
#if defined DCM_WAS_STARTED_SEC_VAR_INIT_32
      #error DCM_WAS_STARTED_SEC_VAR_INIT_32 already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_INIT_32
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_INIT_32
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_INIT_32
#define DCM_WAS_STARTED_SEC_VAR_INIT_32
#elif defined(DCM_STOP_SEC_VAR_INIT_32)
#if ! defined DCM_WAS_STARTED_SEC_VAR_INIT_32
      #error DCM_STOP_SEC_VAR_INIT_32 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_INIT_32
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_INIT_32
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_INIT_32
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_INIT_32
#elif defined(DCM_START_SEC_VAR_INIT_BOOLEAN)
#if defined DCM_WAS_STARTED_SEC_VAR_INIT_BOOLEAN
      #error DCM_WAS_STARTED_SEC_VAR_INIT_BOOLEAN already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_INIT_BOOLEAN
#define DCM_WAS_STARTED_SEC_VAR_INIT_BOOLEAN
#elif defined(DCM_STOP_SEC_VAR_INIT_BOOLEAN)
#if ! defined DCM_WAS_STARTED_SEC_VAR_INIT_BOOLEAN
      #error DCM_STOP_SEC_VAR_INIT_BOOLEAN without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_INIT_BOOLEAN
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_INIT_BOOLEAN
#elif defined(DCM_START_SEC_VAR_CLEARED_UNSPECIFIED)
#if defined DCM_WAS_STARTED_SEC_VAR_CLEARED_UNSPECIFIED
      #error DCM_WAS_STARTED_SEC_VAR_CLEARED_UNSPECIFIED already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_CLEARED_UNSPECIFIED
#define DCM_WAS_STARTED_SEC_VAR_CLEARED_UNSPECIFIED
#elif defined(DCM_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
#if ! defined DCM_WAS_STARTED_SEC_VAR_CLEARED_UNSPECIFIED
      #error DCM_STOP_SEC_VAR_CLEARED_UNSPECIFIED without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_CLEARED_UNSPECIFIED
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#elif defined(DCM_START_SEC_VAR_CLEARED_BOOLEAN)
#if defined DCM_WAS_STARTED_SEC_VAR_CLEARED_BOOLEAN
      #error DCM_WAS_STARTED_SEC_VAR_CLEARED_BOOLEAN already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_CLEARED_BOOLEAN
#define DCM_WAS_STARTED_SEC_VAR_CLEARED_BOOLEAN
#elif defined(DCM_STOP_SEC_VAR_CLEARED_BOOLEAN)
#if ! defined DCM_WAS_STARTED_SEC_VAR_CLEARED_BOOLEAN
      #error DCM_STOP_SEC_VAR_CLEARED_BOOLEAN without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_CLEARED_BOOLEAN
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_CLEARED_BOOLEAN
#elif defined(DCM_START_SEC_VAR_CLEARED_8)
#if defined DCM_WAS_STARTED_SEC_VAR_CLEARED_8
      #error DCM_WAS_STARTED_SEC_VAR_CLEARED_8 already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_8
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_CLEARED_8
#define DCM_WAS_STARTED_SEC_VAR_CLEARED_8
#elif defined(DCM_STOP_SEC_VAR_CLEARED_8)
#if ! defined DCM_WAS_STARTED_SEC_VAR_CLEARED_8
      #error DCM_STOP_SEC_VAR_CLEARED_8 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_CLEARED_8
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_8
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_CLEARED_8
#elif defined(DCM_START_SEC_VAR_CLEARED_16)
#if defined DCM_WAS_STARTED_SEC_VAR_CLEARED_16
      #error DCM_WAS_STARTED_SEC_VAR_CLEARED_16 already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_16
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_16
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_CLEARED_16
#define DCM_WAS_STARTED_SEC_VAR_CLEARED_16
#elif defined(DCM_STOP_SEC_VAR_CLEARED_16)
#if ! defined DCM_WAS_STARTED_SEC_VAR_CLEARED_16
      #error DCM_STOP_SEC_VAR_CLEARED_16 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_CLEARED_16
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_16
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_16
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_CLEARED_16
#elif defined(DCM_START_SEC_VAR_CLEARED_32)
#if defined DCM_WAS_STARTED_SEC_VAR_CLEARED_32
      #error DCM_WAS_STARTED_SEC_VAR_CLEARED_32 already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_32
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_32
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_CLEARED_32
#define DCM_WAS_STARTED_SEC_VAR_CLEARED_32
#elif defined(DCM_STOP_SEC_VAR_CLEARED_32)
#if ! defined DCM_WAS_STARTED_SEC_VAR_CLEARED_32
      #error DCM_STOP_SEC_VAR_CLEARED_32 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_CLEARED_32
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_32
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_32
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_CLEARED_32
#elif defined(DCM_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED)
#if defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
      #error DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
#define DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
#elif defined(DCM_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED)
#if ! defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
      #error DCM_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
#elif defined(DCM_START_SEC_VAR_POWER_ON_CLEARED_BOOLEAN)
#if defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
      #error DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_BOOLEAN already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
#define DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
#elif defined(DCM_STOP_SEC_VAR_POWER_ON_CLEARED_BOOLEAN)
#if ! defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
      #error DCM_STOP_SEC_VAR_POWER_ON_CLEARED_BOOLEAN without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
#elif defined(DCM_START_SEC_VAR_POWER_ON_CLEARED_8)
#if defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_8
      #error DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_8 already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_8
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_POWER_ON_CLEARED_8
#define DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_8
#elif defined(DCM_STOP_SEC_VAR_POWER_ON_CLEARED_8)
#if ! defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_8
      #error DCM_STOP_SEC_VAR_POWER_ON_CLEARED_8 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_8
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_8
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_POWER_ON_CLEARED_8
#elif defined(DCM_START_SEC_VAR_POWER_ON_CLEARED_16)
#if defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_16
      #error DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_16 already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_16
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_16
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_POWER_ON_CLEARED_16
#define DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_16
#elif defined(DCM_STOP_SEC_VAR_POWER_ON_CLEARED_16)
#if ! defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_16
      #error DCM_STOP_SEC_VAR_POWER_ON_CLEARED_16 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_16
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_16
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_16
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_POWER_ON_CLEARED_16
#elif defined(DCM_START_SEC_VAR_POWER_ON_CLEARED_32)
#if defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_32
      #error DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_32 already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_CLEARED_32
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_32
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_POWER_ON_CLEARED_32
#define DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_32
#elif defined(DCM_STOP_SEC_VAR_POWER_ON_CLEARED_32)
#if ! defined DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_32
      #error DCM_STOP_SEC_VAR_POWER_ON_CLEARED_32 without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_POWER_ON_CLEARED_32
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_32
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_32
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_POWER_ON_CLEARED_32
#elif defined(DCM_START_SEC_VAR_INIT_UNSPECIFIED)
#if defined DCM_WAS_STARTED_SEC_VAR_INIT_UNSPECIFIED
      #error DCM_WAS_STARTED_SEC_VAR_INIT_UNSPECIFIED already defined
   #endif
#define BSW_START_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_START_SEC_VAR_INIT_UNSPECIFIED
#define DCM_WAS_STARTED_SEC_VAR_INIT_UNSPECIFIED
#elif defined(DCM_STOP_SEC_VAR_INIT_UNSPECIFIED)
#if ! defined DCM_WAS_STARTED_SEC_VAR_INIT_UNSPECIFIED
      #error DCM_STOP_SEC_VAR_INIT_UNSPECIFIED without START_SEC
   #else
      #undef DCM_WAS_STARTED_SEC_VAR_INIT_UNSPECIFIED
   #endif
#define BSW_STOP_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef DCM_STOP_SEC_VAR_INIT_UNSPECIFIED
#elif defined(Dcm_START_SEC_CODE)
#if defined Dcm_WAS_STARTED_SEC_ROM_CODE
      #error Dcm_WAS_STARTED_SEC_ROM_CODE already defined
   #endif
#define BSW_START_SEC_DEFAULT_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_CODE
    #undef MEMMAP_ERROR
   #undef Dcm_START_SEC_CODE
#define Dcm_WAS_STARTED_SEC_ROM_CODE
#elif defined(Dcm_STOP_SEC_CODE)
#if ! defined Dcm_WAS_STARTED_SEC_ROM_CODE
      #error Dcm_STOP_SEC_ROM_CODE without START_SEC
   #else
      #undef Dcm_WAS_STARTED_SEC_ROM_CODE
   #endif
#define BSW_STOP_SEC_DEFAULT_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_CODE
    #undef MEMMAP_ERROR
   #undef Dcm_STOP_SEC_CODE
#elif defined MEMMAP_ERROR
    #error "Dcm_MemMap.h, wrong #pragma command"
#endif

