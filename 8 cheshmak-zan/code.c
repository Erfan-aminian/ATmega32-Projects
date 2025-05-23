#include <mega32.h>
#include <delay.h>

void main(void)
{
    DDRC = 0xFF;   

    while (1)
    {
    PORTC.0 = 1;
    PORTC.1 = 1;
    PORTC.2 = 1;
    PORTC.3 = 1;
    PORTC.4 = 1;
    PORTC.5 = 1;
    PORTC.6 = 1;
    PORTC.7 = 1;
    delay_ms(100);
    PORTC.0 = 0;
    PORTC.1 = 0;
    PORTC.2 = 0;
    PORTC.3 = 0;
    PORTC.4 = 0;
    PORTC.5 = 0;
    PORTC.6 = 0;
    PORTC.7 = 0;
    delay_ms(100);
}        
}
