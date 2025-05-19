#include <mega32.h>
#include <delay.h>

void main(void)
{
    int i;
    DDRC = 0xFF;   

    while (1)
    {
    for (i=7; i>=0; i--){
     PORTC = 1 << i;
     delay_ms(100);
    }
    for (i=1; i<7; i++){
     PORTC = 1 << i;
     delay_ms(100);
    }
}        
}
