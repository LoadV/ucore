#ifndef __LIBS_ERROR_H__
#define __LIBS_ERROR_H__

/* kernel error codes -- keep in sync with list in lib/printfmt.c */
#define E_UNSPECIFIED       1   // Unspecified or unknown problem
#define E_BAD_PROC          2   // Process doesn't exist or otherwise
#define E_INVAL             3   // Invalid parameter
#define E_NO_MEM            4   // Request failed due to memory shortage
#define E_NO_FREE_PROC      5   // Attempt to create a new process beyond
#define E_FAULT             6   // Memory fault
#define E_SWAP_FAULT        7   // SWAP READ/WRITE fault
#define E_INVAL_ELF         8   // Invalid elf file
#define E_KILLED            9   // Process is killed
#define E_PANIC             10  // Panic Failure
#define E_TIMEOUT           11  // Timeout
#define E_TOO_BIG           12  // Argument is Too Big
/* the maximum allowed */
#define MAXERROR            12

#endif /* !__LIBS_ERROR_H__ */

