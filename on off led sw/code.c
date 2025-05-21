#include <mega32.h>
void main(void){
  DDRA = 0x00;
  DDRC = 0xFF;

 while(1){
  if(PINA.0 ==0)
    PORTC.0 = 1;
    else
    PORTC.0 = 0;
  
 
 
 
 
 }
}