

#include <mega32.h>
#include <delay.h>

void main(void)
{
DDRC = 0xFF;

while (1)
      {
        PORTC.0 = 1;
        delay_ms(150);
        
        PORTC.0= 0;
        delay_ms(50);
        
        PORTC.1= 1;
        delay_ms(100);
        
        PORTC.1 = 0;
        delay_ms(50);
        
        PORTC.2= 1;
        delay_ms(150);
        
        PORTC.2= 0;
        delay_ms(50);

      }
}
