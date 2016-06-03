#include "stm32l053xx.h"
#include "Board_LED.h"  
#include "Board_Buttons.h"

int main(){
	//initilise LED's 
	
	LED_Initialize();
	
	//initilise buttons
	Buttons_Initialize();
	
	//Turn on  RED LED
	
	LED_Off(0);
	
	//Turn on Green LED  
	LED_Off(1);
	
while(1){
	
	if(Buttons_GetState())
	{
		//turn on the LED's
		LED_On(0);
		LED_On(1);
	}
	
	else {
		
		//Turn off the LED's
		LED_Off(0);
		LED_Off(1);
	}
}
	
	//return 0; 
}
