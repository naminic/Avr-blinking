/*****************************************************
Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512

******************************************************

http://WWW.NAMINIC.COM

*****************************************************/

#include <mega32.h>
#include <delay.h>

// Declare your global variables here

void main(void)
{
	// Declare your local variables here

	// Input/Output Ports initialization
	// Port A initialization
	// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
	// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
	PORTA=0x00;
	DDRA=0x00;

	// Port B initialization
	// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=Out Func0=Out 
	// State7=T State6=T State5=T State4=T State3=T State2=T State1=0 State0=0 
	PORTB=0x00;
	DDRB=0x03;

    // Port C initialization
    // Func7=Out Func6=Out Func5=Out Func4=Out Func3=Out Func2=Out Func1=In Func0=In 
    // State7=0 State6=0 State5=0 State4=0 State3=0 State2=0 State1=T State0=T 
    PORTC=0x00;
    DDRC=0xFC;

	// Port D initialization
	// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
	// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
	PORTD=0x00;
	DDRD=0x00;

    while (1)
    {  
        PORTB.0 = ~PORTB.0;	//toggle pin b.0
        PORTB.1 = ~PORTB.1;	//toggle pin b.1
        PORTC.2 = ~PORTC.2;	//toggle pin c.2
        PORTC.3 = ~PORTC.3;	//toggle pin c.3
        PORTC.4 = ~PORTC.4;	//toggle pin c.4
        PORTC.5 = ~PORTC.5;	//toggle pin c.5
        PORTC.6 = ~PORTC.6;	//toggle pin c.6
        PORTC.7 = ~PORTC.7;	//toggle pin c.7
          
        delay_ms(500);
    };
}
