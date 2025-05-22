#include <mega32.h>
#include <delay.h>

// ����� ����� �� ���� ��
#define ZERO  0x3F
#define ONE   0x06
#define FOUR  0x66

void main(void) {
    DDRC = 0xFF;  // ���� C ���� Ӑ��ʝ��
    DDRD = 0xFF;  // ���� D ���� �������� �����

    while (1) {
        // ��� 4 (��� ��) ? 1
        PORTD = 0b1110;
        PORTC = ONE;
        delay_ms(2);

        // ��� 3 ? 4
        PORTD = 0b1101;
        PORTC = FOUR;
        delay_ms(2);

        // ��� 2 ? 0
        PORTD = 0b1011;
        PORTC = ZERO;
        delay_ms(2);

        // ��� 1 (��� ����) ? 4
        PORTD = 0b0111;
        PORTC = FOUR;
        delay_ms(2);
    }
}
