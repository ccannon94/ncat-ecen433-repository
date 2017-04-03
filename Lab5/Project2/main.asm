;-------------------------------------------------------------------------------
; MSP430 Assembler Code Template for use with TI Code Composer Studio
;
;
;-------------------------------------------------------------------------------
            .cdecls C,LIST,"msp430.h"       ; Include device header file
            
;-------------------------------------------------------------------------------
            .def    RESET                   ; Export program entry-point to
                                            ; make it known to linker.
;-------------------------------------------------------------------------------
            .text                           ; Assemble into program memory.
            .retain                         ; Override ELF conditional linking
                                            ; and retain current section.
            .retainrefs                     ; And retain any sections that have
                                            ; references to current section.

;-------------------------------------------------------------------------------
RESET       mov.w   #__STACK_END,SP         ; Initialize stackpointer
StopWDT     mov.w   #WDTPW|WDTHOLD,&WDTCTL  ; Stop watchdog timer


;-------------------------------------------------------------------------------
; Main loop here
;-------------------------------------------------------------------------------

;word level operations
			mov.w #0000h,&0200h
			mov.w #0002h,&0202h
			mov.w #0004h,&0204h
			mov.w #0006h,&0206h

			mov.w #0200h,R5
			mov.w 0(R5),R6
			mov.w 2(R5),R6
			mov.w 4(R5),R6
			mov.w 6(R5),R6

;byte level operations
			mov.b #00h,&0200h
			mov.b #01h,&0201h
			mov.b #02h,&0202h
			mov.b #03h,&0203h

			mov.w #0200h,R5
			mov.b 0(R5),R6
			mov.b 1(R5),R6
			mov.b 2(R5),R6
			mov.b 3(R5),R6

			jmp $
                                            

;-------------------------------------------------------------------------------
; Stack Pointer definition
;-------------------------------------------------------------------------------
            .global __STACK_END
            .sect   .stack
            
;-------------------------------------------------------------------------------
; Interrupt Vectors
;-------------------------------------------------------------------------------
            .sect   ".reset"                ; MSP430 RESET Vector
            .short  RESET
            .end
