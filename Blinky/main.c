#include "stm32l053xx.h"
#include "Board_LED.h"  
#include "Board_Buttons.h"

int main(){
	//initilise LED's using API
	LED_Initialize();
	
	//Manually initilising the registers 
	
	//Enable the GPIOA and GPIOB clocks (to enable those peripherals) 
	//unsigned long int initLED = ((1<< 0UL)|(1 << 1UL)); //in binary
	//unsigned long int initLEDh = 0x3; //in hex
	//RCC->IOPENR |= initLED;
	
	//Enable the GPIOA pin 3 and GPIOB pin 4 as Outputs (push-pull) 
	//GPIOA->MODER &= ~((3UL << 2*5)); //?
	
	//GPIOA->MODER |= (1UL<< 10);// Set bit number 10;
	//GPIOA->MODER &= ~(1UL<< 11);// unset bit number 11;
	
	//OTYPER Could set the output type here to push-pull, but it's that by default so no need. 
	
	//setting the speed to me medium 
	//GPIOA->OSPEEDR |= (1UL<< 10);
	//GPIOA->OSPEEDR &= ~(1UL<< 11);

//Set no pull-up or pull down
	//GPIOA->PUPDR &= ~(1UL<< 10); //unset bit number 10
	//GPIOA->PUPDR &= ~(1UL<< 11); //unset bit number 11
	
	// Automatically initilise buttons
	Buttons_Initialize();
	
	//Manually 
	//Push button connected to PA0. 
	
	//GPIOA->MODER &= ~(1UL<<0);//unset bit number 0
	//GPIOA->MODER &= ~(1UL<<1);//unset bit number 1 
	
	//Set no pull-up or pull down
	//GPIOA->PUPDR &= ~(1UL<<0); //unset bit number 10
	//GPIOA->PUPDR &= ~(1UL<<1); //unset bit number 11
	
	
	//Turn on  Green LED
	//GPIOA->BSRR |= (1UL<< 5); //Set Bit number 5 (i.e GPIOA pin 5).

 
	//LED_Off(0);
	
	//Turn on Red LED  
	//LED_Off(1);
	
while(1){
	
	//Read the Input data register 
	 //int InputDataReg = GPIOA->IDR; 
	
	// Turn off LED
	//GPIOA->BSRR &= ~ (1UL<< 5); //unset Bit number 5 (i.e GPIOA pin 5). 
	
	/*
	if(((InputDataReg & (1UL<<0)) != 0))
	{
		
		//Turn on lED manually
		
		GPIOA->BSRR |= (1UL<< 5); //Set Bit number 5 (i.e GPIOA pin 5).
		
		
		//turn on the LED's
		//LED_On(0);
		//LED_On(1);
	}
	
	else {
		
		// Turn off LED manually 
	GPIOA->BSRR &= ~ (1UL<< 5); //unset Bit number 5 (i.e GPIOA pin 5).
	GPIOA->BSRR |= (1UL<< 21); //Set Bit number 21 (in order to reset it) 
		
		//Turn off the LED's
		//LED_Off(0);
		//LED_Off(1);
	}
	
	*/
	
	if(Buttons_GetState()) {
		
		LED_On(0);
	}
	
	else {
		LED_Off(0);
	}
	
	
}
	
	
	
	//return 0; 
}
