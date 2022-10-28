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
#include "console.h"
#include "initBoard.h"
#include "keyb.h"


int main( void){
    setbuf(stdout, NULL); 
	uart4_init();
    set_stdio(C_UART4);
    printf("Hello world\n");
    
    /* Infinite loop */
    while (1) {
        // your code here
    } //while
    return 0;
}// main


