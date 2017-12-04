// config
#ifdef SDCC
	extern void _trigmode(_Bool deg);
#else
//typedef enum { false, true } bool;
	extern void _trigmode(bool deg);
#endif

// trig
extern float _sin(float x);
extern float _cos(float x);
extern float _tan(float x);
extern float _csc(float x);
extern float _sec(float x);
extern float _cot(float x);
extern float _arcsin(float x);
extern float _arccos(float x);
extern float _arctan(float x);
extern float _arccsc(float x);
extern float _arcsec(float x);
extern float _arccot(float x);

// exponents
extern float _pow(float x, float exp);
extern float _powe(float exp);
extern float _log(float x);
extern float _logbase(float x, float base);
extern float _ln(float x);

// other
extern float _abs (float x);

#ifdef SDCC
	#include "math_8.h"
#endif

#ifdef __GNUC__
	#include "math_x86.h"
#endif