#include <msp430.h> 

#define CONST 4

int a = 0,b = 0;
const int c[] = {1,2,3,4};
int d = 32767;

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	volatile int SR_bits;

	a = 2*CONST;
	b = 4*CONST;
	d = d+c[1];
	SR_bits = _get_SR_register();

	while(1);
}
