#include <msp430.h> 

#define LED BIT6
#define BUTTON BIT3

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	P1DIR = LED;
	P1OUT = 0x00;

	while(1){
	    if((P1IN & BUTTON) == 0x00){
	        __delay_cycles(5000);
	        if((P1IN & BUTTON) == 0x00){
	            P1OUT ^=LED;
	            while((P1IN & BUTTON) == 0x00);
	        }
	    }
	}
}
