#include <24FJ128GA006.h>

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES NOJTAG                	//JTAG disabled
#FUSES CKSFSM                	//Clock Switching is enabled, fail Safe clock monitor is enabled

#device ICSP=1
#use delay(crystal=8000000)


