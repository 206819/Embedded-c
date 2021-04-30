#include <avr/io.h>

void act1();
{
    DDRB|=(1<<PB0);//Set B0=1 for led
    DDRD&=~(1<<PD0);// clear bit
    PORTD|=(1<<PD0);//set bit
    DDRD&=~(1<<PD1);//clear bit
    PORTD|=(1<<PD1);//set bit

}
