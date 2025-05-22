#include <mega32.h>
#include <delay.h>

//  ⁄—Ì› «—ﬁ«„ »Â ’Ê—  Âê“
#define ZERO  0x3F
#define ONE   0x06
#define FOUR  0x66

void main(void) {
    DDRC = 0xFF;  // ÅÊ—  C »—«Ì ”ê„‰ ùÂ«
    DDRD = 0xFF;  // ÅÊ—  D »—«Ì ›⁄«·ù”«“Ì —ﬁ„ùÂ«

    while (1) {
        // —ﬁ„ 4 (”„  çÅ) ? 1
        PORTD = 0b1110;
        PORTC = ONE;
        delay_ms(2);

        // —ﬁ„ 3 ? 4
        PORTD = 0b1101;
        PORTC = FOUR;
        delay_ms(2);

        // —ﬁ„ 2 ? 0
        PORTD = 0b1011;
        PORTC = ZERO;
        delay_ms(2);

        // —ﬁ„ 1 (”„  —«” ) ? 4
        PORTD = 0b0111;
        PORTC = FOUR;
        delay_ms(2);
    }
}
