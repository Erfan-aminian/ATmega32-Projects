#include <mega32.h>
#include <delay.h>

void main(void)
{
    int i;
    DDRC = 0xFF;
      

    while (1)
    {
    for (i=1; i<=128; i=i*2){
    PORTC = i;
    delay_ms(100);
    }
    for (i=64; i>1; i=i/2){
    PORTC = i;
    delay_ms(100);
    }
    
}        
}
