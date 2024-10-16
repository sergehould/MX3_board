/**********************************************************************
* REVISION HISTORY:
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Author            Date      		Comments on this revision
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Serge Hould		31 Oct 2021		v1.0
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*
* ADDITIONAL NOTES:
*
**********************************************************************/
#ifndef KEYB_H
#define KEYB_H
#ifdef	__cplusplus
extern "C" {
#endif
    
/******	FUNCTION PROTOYPES ******/
void keyb_init(void);
int key_get(void);

#ifdef	__cplusplus
}
#endif

#endif
