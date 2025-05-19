#include <mega32.h>
#include <delay.h>

void main(void)
{
    DDRC = 0xFF;  //  ‰ŸÌ„ ÅÊ—  C »Â ⁄‰Ê«‰ Œ—ÊÃÌ

    while (1)
    {
        PORTC = 0b00011000;
        delay_ms(100);
        PORTC = 0b00010100;
        delay_ms(100);
        PORTC = 0b00010010;
        delay_ms(100);
        PORTC = 0b00010001;
        delay_ms(100);
        PORTC = 0b00010010;
        delay_ms(100);
        PORTC = 0b00010100;
        delay_ms(100);
    }
}
