#ifndef _SUMP_MSGS_H
#define _SUMP_MSGS_H

/* XON/XOFF are not supported. */
#define SUMP_RESET 0x00
#define SUMP_ARM 0x01
#define SUMP_QUERY 0x02
#define SUMP_XON 0x11
#define SUMP_XOFF 0x13

/* mask & values used, config ignored. only stage0 supported */
#define SUMP_TRIGGER_MASK 0xC0
#define SUMP_TRIGGER_VALUES 0xC1
#define SUMP_TRIGGER_CONFIG 0xC2

/* Most flags (except RLE) are ignored. */
#define SUMP_SET_DIVIDER 0x80
#define SUMP_SET_READ_DELAY_COUNT 0x81
#define SUMP_SET_FLAGS 0x82
#define SUMP_SET_RLE 0x0100

/* extended commands -- self-test unsupported, but metadata is returned. */
#define SUMP_SELF_TEST 0x03
#define SUMP_GET_METADATA 0x04

#endif // _SUMP_MSGS_H    // Put this line at the end of your file.
