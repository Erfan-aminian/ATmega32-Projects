#include <mega32.h>
#include <delay.h>

int i = 200;

void main(void){
    DDRA = 0x00;   // ����� ���� ������
    PORTA = 0xFF;  // pull-up ����
    DDRC = 0xFF;   // ����� ���� LED

    while(1){
        PORTC.0 = 1;
        delay_ms(i);
        PORTC.0 = 0;
        delay_ms(i);

        if(PINA.0 == 0 && i > 20){   // Ϙ�� ���� ? ���ڝ��
            i -= 20;
        }

        if(PINA.1 == 0 && i < 1000){ // Ϙ�� ����� ? �����
            i += 20;
        }
    }
}
