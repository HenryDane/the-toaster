// Definitions for system functions (memory, io, etc)
extern void _setbank(unsigned char bank);

extern char _get(char a);
extern void _output(char a, char d);

extern void _printc(char c);
extern void _prints(char * s, unsigned int len);
extern void _printi(int x);
extern void _printd(float x);
extern void _raster(char c, unsigned int col, unsigned int row);

extern unsigned char _tx(char c);
extern unsigned char _rx(void);

#ifdef SDCC
	#include "system_8.h"
#endif

#ifdef __GNUC__
	#include "system_x86.h"
#endif