#include <mega32.h>
#include <delay.h>

int i = 200;

void main(void){
    DDRA = 0x00;   // Ê—ÊœÌ »—«Ì ò·ÌœÂ«
    PORTA = 0xFF;  // pull-up ›⁄«·
    DDRC = 0xFF;   // Œ—ÊÃÌ »—«Ì LED

    while(1){
        PORTC.0 = 1;
        delay_ms(i);
        PORTC.0 = 0;
        delay_ms(i);

        if(PINA.0 == 0 && i > 20){   // œò„Â »«·« ? ”—Ì⁄ù —
            i -= 20;
        }

        if(PINA.1 == 0 && i < 1000){ // œò„Â Å«ÌÌ‰ ? ò‰œ —
            i += 20;
        }
    }
}
