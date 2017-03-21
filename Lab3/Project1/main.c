#include <msp430.h> 

float fib [100];

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    volatile int i;
    fib[0] = 1;
    fib[1] = 1;

    for(i = 2; i < 100; i = i +1){
        fib[i] = fib[i-1] + fib[i-2];
    }

    while(1);
}
