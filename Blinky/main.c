#include "stm32l053xx.h"
#include "Board_LED.h"  
#include "Board_Buttons.h"

int main(){
	//initilise LED's using API
	LED_Initialize();
	Buttons_Initialize();
	

while(1){
	
	
	if(Buttons_GetState()) {
		
		LED_On(0);
	}
	
	else {
		LED_Off(0);
	}
	
	
}
	
	//return 0; 
}
