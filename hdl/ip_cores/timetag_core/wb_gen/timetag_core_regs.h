/*
  Register definitions for slave core: Time-tagging core registers

  * File           : timetag_core_regs.h
  * Author         : auto-generated by wbgen2 from timetag_core_regs.wb
  * Created        : Wed Jun  8 10:54:43 2016
  * Standard       : ANSI C

    THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE timetag_core_regs.wb
    DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!

*/

#ifndef __WBGEN2_REGDEFS_TIMETAG_CORE_REGS_WB
#define __WBGEN2_REGDEFS_TIMETAG_CORE_REGS_WB

#include <inttypes.h>

#if defined( __GNUC__)
#define PACKED __attribute__ ((packed))
#else
#error "Unsupported compiler?"
#endif

#ifndef __WBGEN2_MACROS_DEFINED__
#define __WBGEN2_MACROS_DEFINED__
#define WBGEN2_GEN_MASK(offset, size) (((1<<(size))-1) << (offset))
#define WBGEN2_GEN_WRITE(value, offset, size) (((value) & ((1<<(size))-1)) << (offset))
#define WBGEN2_GEN_READ(reg, offset, size) (((reg) >> (offset)) & ((1<<(size))-1))
#define WBGEN2_SIGN_EXTEND(value, bits) (((value) & (1<<bits) ? ~((1<<(bits))-1): 0 ) | (value))
#endif


/* definitions for register: Timetag seconds register (upper) */

/* definitions for register: Timetag seconds register (lower) */

/* definitions for register: Timetag coarse time register, system clock ticks (125MHz) */

/* definitions for register: Trigger time-tag seconds register (upper) */

/* definitions for register: Trigger time-tag seconds register (lower) */

/* definitions for register: Trigger time-tag coarse time (system clock ticks 125MHz) register */

/* definitions for register: Acquisition start time-tag seconds register (upper) */

/* definitions for register: Acquisition start time-tag seconds register (lower) */

/* definitions for register: Acquisition start time-tag coarse time (system clock ticks 125MHz) register */

/* definitions for register: Acquisition stop time-tag seconds register (upper) */

/* definitions for register: Acquisition stop time-tag seconds register (lower) */

/* definitions for register: Acquisition stop time-tag coarse time (system clock ticks 125MHz) register */

/* definitions for register: Acquisition end time-tag seconds register (upper) */

/* definitions for register: Acquisition end time-tag seconds register (lower) */

/* definitions for register: Acquisition end time-tag coarse time (system clock ticks 125MHz) register */

PACKED struct TIMETAG_CORE_WB {
  /* [0x0]: REG Timetag seconds register (upper) */
  uint32_t SECONDS_UPPER;
  /* [0x4]: REG Timetag seconds register (lower) */
  uint32_t SECONDS_LOWER;
  /* [0x8]: REG Timetag coarse time register, system clock ticks (125MHz) */
  uint32_t COARSE;
  /* [0xc]: REG Trigger time-tag seconds register (upper) */
  uint32_t TRIG_TAG_SECONDS_UPPER;
  /* [0x10]: REG Trigger time-tag seconds register (lower) */
  uint32_t TRIG_TAG_SECONDS_LOWER;
  /* [0x14]: REG Trigger time-tag coarse time (system clock ticks 125MHz) register */
  uint32_t TRIG_TAG_COARSE;
  /* [0x18]: REG Acquisition start time-tag seconds register (upper) */
  uint32_t ACQ_START_TAG_SECONDS_UPPER;
  /* [0x1c]: REG Acquisition start time-tag seconds register (lower) */
  uint32_t ACQ_START_TAG_SECONDS_LOWER;
  /* [0x20]: REG Acquisition start time-tag coarse time (system clock ticks 125MHz) register */
  uint32_t ACQ_START_TAG_COARSE;
  /* [0x24]: REG Acquisition stop time-tag seconds register (upper) */
  uint32_t ACQ_STOP_TAG_SECONDS_UPPER;
  /* [0x28]: REG Acquisition stop time-tag seconds register (lower) */
  uint32_t ACQ_STOP_TAG_SECONDS_LOWER;
  /* [0x2c]: REG Acquisition stop time-tag coarse time (system clock ticks 125MHz) register */
  uint32_t ACQ_STOP_TAG_COARSE;
  /* [0x30]: REG Acquisition end time-tag seconds register (upper) */
  uint32_t ACQ_END_TAG_SECONDS_UPPER;
  /* [0x34]: REG Acquisition end time-tag seconds register (lower) */
  uint32_t ACQ_END_TAG_SECONDS_LOWER;
  /* [0x38]: REG Acquisition end time-tag coarse time (system clock ticks 125MHz) register */
  uint32_t ACQ_END_TAG_COARSE;
};

#endif
