#include <mega32.h>
#include <delay.h>

char seg[10] = {0x3F, 0x06, 0x5b, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7f, 0x6f};
int i = 0, ones, tens, hundreds, thousands;

void main(void){
    DDRC = 0xFF;
    DDRD = 0xFF;

    while (1){
        thousands = i/1000;
        hundreds = (i%1000)/100;
        tens = (i%100)/10;
        ones = i%10;

        PORTD = 0xF7;
        PORTC = seg[ones];
        delay_ms(2);

        PORTD = 0xFB;
        PORTC = seg[tens];
        delay_ms(2);

        PORTD = 0xFD;
        PORTC = seg[hundreds];
        delay_ms(2);

        PORTD = 0xFE;
        PORTC = seg[thousands];
        delay_ms(2);

        i++;
        if (i > 9999) i = 0;
    }
}
