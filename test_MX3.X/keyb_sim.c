/**********************************************************************
* 
* REVISION HISTORY:
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Author            Date      		Comments on this revision
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Serge Hould       31 Oct 2021     keypad in simulation mode for the RPN calculator	
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*  * TODO:create a static lab for key_sim.c  see: https://microchipdeveloper.com/mplabx:libraries
**********************************************************************/
#include <xc.h>
#include "keyb.h"

 
#define KEY_1   PORTGbits.RG9
#define KEY_2   PORTGbits.RG8
#define KEY_3   PORTGbits.RG7
#define KEY_4   PORTCbits.RC3
#define KEY_5   PORTFbits.RF3
#define KEY_6   PORTFbits.RF5
#define KEY_7   PORTFbits.RF4
#define KEY_8   PORTDbits.RD15
#define KEY_9   PORTDbits.RD14
#define KEY_0   PORTBbits.RB11
#define KEY_DOT PORTBbits.RB1
#define KEY_EQ  PORTBbits.RB0
#define KEY_PLUS    PORTFbits.RF0
#define KEY_MINUS   PORTBbits.RB8
#define KEY_MULT    PORTDbits.RD8
#define KEY_DIV     PORTDbits.RD9


/* Init keyboard to use stimulus */
void init_keyb(void){
    TRISCbits.TRISC3 = 1;// key 4
    ANSELGbits.ANSG7 = 0;    // set pin as digital
    TRISGbits.TRISG7 = 1;  // key 3
    ANSELGbits.ANSG8 = 0;    // set pin as digital
    TRISGbits.TRISG8 = 1; //key 2
    ANSELGbits.ANSG9 = 0;    // set pin as digital
    TRISGbits.TRISG9 = 1;// key 1
    TRISFbits.TRISF3 =1;    // key 
    TRISFbits.TRISF5 =1;    // key 
    TRISFbits.TRISF4 =1;    // key 
    TRISDbits.TRISD15 =1;   // key 
    TRISDbits.TRISD14 =1;   // key 4
    TRISBbits.TRISB11 =1;   // key 
    ANSELBbits.ANSB11 = 0;  // disable analog (set pins as digital))
    TRISBbits.TRISB10 =1;   // key 
    ANSELBbits.ANSB10 = 0;  // disable analog (set pins as digital))
    TRISBbits.TRISB9 =1;    // key 
    ANSELBbits.ANSB9 = 0;  // disable analog (set pins as digital))
    TRISBbits.TRISB1 =1;   // // key 
    ANSELBbits.ANSB1 = 0;  // disable analog (set pins as digital))
    TRISBbits.TRISB0 =1;   // // key 
    ANSELBbits.ANSB0 = 0;  // disable analog (set pins as digital))
    TRISFbits.TRISF0 =1;   // key 
    TRISBbits.TRISB8 =1;   //  key 
    ANSELBbits.ANSB8 = 0;  // disable analog (set pins as digital))
    TRISAbits.TRISA15 =1;   // key 
    TRISDbits.TRISD8 =1;    // key 
    TRISDbits.TRISD9 =1;    // key 
}

/* Non-blocking version  */
/* Useful for lab8-part1 simulation mode */
int get_key(void){
   unsigned char conv_table[] = { 
            '1',    '2',    '3',	'+',
            '4',    '5',	'6',	'-',
            '7',    '8',	'9',	'*',
			'0',    '.',	'=',	'/',		 
            };
                
	int key = -1;           
    static int prev_k = -1;

    if(KEY_1 ==0)         key=0; 
    else if(KEY_2 ==0)    key=1;
    else if(KEY_3 ==0)    key=2;   
    else if(KEY_4 ==0)    key=4;   
    else if(KEY_5 ==0)    key=5;   
    else if(KEY_6 ==0)    key=6;   
    else if(KEY_7 ==0)    key=8;   
    else if(KEY_8 ==0)    key=9;
    else if(KEY_9 ==0)    key=10;   
    else if(KEY_0 ==0)    key=12;   
    else if(KEY_DOT ==0)  key=13;   
    else if(KEY_EQ ==0)   key=14;   
    else if(KEY_PLUS ==0) key=3;   
    else if(KEY_MINUS ==0)key=7;   
    else if(KEY_MULT ==0) key=11;   
    else if(KEY_DIV ==0)  key=15;   
    
    if(key == -1){ 
        prev_k = -1;
        return -1; //Return -1 on no pressed key
    }
    else if(key != prev_k){
        prev_k =key; 
        return conv_table[key];
    }
    else return -1; //Return -1 on no pressed key

}
