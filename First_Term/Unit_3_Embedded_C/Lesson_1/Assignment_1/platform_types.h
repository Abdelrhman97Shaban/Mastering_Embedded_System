#ifndef PLATFORM_TYPES
#define PLATFORM_TYPES

#define CPU_TYPE_8	    8 
#define CPU_TYPE_16	    16 
#define CPU_TYPE_32	    32 

#define MSB_FIRST       0
#define LSB_FIRST       1

#define HIGH_BYTE_FIRST 0 
#define LOW_BYTE_FIRST  1 

#ifdef S12X

#define CPU_TYPE        CPU_TYPE_16
#define CPU_BIT_ORDER   LSB_FIRST
#define CPU-BYET_ORDER  HIGH_BYTE_FIRST

typedef unsigned char boolean;

typedef signed char     sint8;
typedef unsigned char   uint8;
typedef signed short    sint16;
typedef unsigned short  uint16;
typedef signed long     sint32;
typedef unsigned long   uint32;

typedef signed char     sint8_least;
typedef unsigned char   uint8_least;
typedef signed short    sint16_least;
typedef unsigned short  uint16_least;
typedef signed long     sint32_least;
typedef unsigned long   uint32_least;

typedef float           float32; 
typedef double          float64;
#endif  


#ifdef ST30

#define CPU_TYPE        CPU_TYPE_32
#define CPU_BIT_ORDER   LSB_FIRST
#define CPU-BYET_ORDER  LOW_BYTE_FIRST

typedef unsigned long boolean;

typedef signed char     sint8;
typedef unsigned char   uint8;
typedef signed short    sint16;
typedef unsigned short  uint16;
typedef signed long     sint32;
typedef unsigned long   uint32;

typedef unsigned long    uint8_least;
typedef unsigned long    uint16_least;
typedef unsigned long    uint32_least;
typedef signed long      sint8_least;
typedef signed long      sint16_least;
typedef signed long      sint32_least;

typedef float           float32; 
typedef double          float64;
#endif  


#ifdef SHx

#define CPU_TYPE        CPU_TYPE_32
#define CPU_BIT_ORDER   LSB_FIRST
#define CPU-BYET_ORDER  HGIH_BYTE_FIRST

typedef unsigned long bool;

typedef signed char     sint8;
typedef unsigned char   uint8;
typedef signed short    sint16;
typedef unsigned short  uint16;
typedef signed int     sint32;
typedef unsigned int   uint32;

typedef unsigned int    uint8_least;
typedef unsigned int    uint16_least;
typedef unsigned int    uint32_least;
typedef signed int      sint8_least;
typedef signed int      sint16_least;
typedef signed int      sint32_least;

typedef float           float32; 
typedef double          float64;
#endif

#endif 