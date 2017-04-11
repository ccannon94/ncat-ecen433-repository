#include <msp430.h> 

#define LEB BIT0
#define BUTTON BIT3

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	P1DIR = LED;
	P1OUT = 0X00;

	while(1){
	    if((P1IN & BUTTON) == 0x00) // Active low input
	        P1OUT = LED; //Turn on the LED
	    else
	        P1OUT = 0x00; //Turn off the LED
	}
}
