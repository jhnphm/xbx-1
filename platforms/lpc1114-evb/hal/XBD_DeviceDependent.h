
/** define XBX_LITTLE_ENDIAN or XBX_BIG_ENDIAN */
#define XBX_LITTLE_ENDIAN

/** prefix for const variables in static memory areas, e.g. PROGMEN for avr,
*    empty for most targets
*/
#define CONSTDATAAREA

/** define size of a page to program, keep at this value if there is no page 
*   concept */
#define PAGESIZE 4096
/** mask for alignment of page boundaries, keep at this value if there is no
* page concept */
#define PAGE_ALIGN_MASK 0xfffff000


/** maximum flash / binary storage size */
#define FLASH_ADDR_MAX (0x7fff)

/** minimum flash address, if boot loader resides below app */
#define FLASH_ADDR_MIN (0x2000)

#define DEVICE_SPECIFIC_SANE_TC_VALUE 12000000

#define APP_START_ADDRESS (FLASH_ADDR_MIN+4)

#define LPC1114_STACKTOP ((uint8_t *)0x10002000)
#define LPC1114_STACKBOTTOM ((uint8_t *)0x10001c00)