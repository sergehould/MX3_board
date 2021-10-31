/**
   	FileName:     
	
 
	Description: 
      
 * * REVISION HISTORY:
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author        	Date            Comments on this revision
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Serge Hould      
 * 	TODO: 
 * 		
 *******************************************************************************/
#include <xc.h>
#include <stdio.h>
#include "util.h"
#include "console32.h"
#include "initBoard.h"
#include "keyb.h"


int main( void){
    setbuf(stdout, NULL); 
    UART_InitPoll(460800);
    set_stdio(C_UART4);
    printf("Hello world\n");
    
    /* Infinite loop */
    while (1) {
        //if( (typed_key = get_key() ) != -1 ) putchar(typed_key);
    } //while
    return 0;
}// main

