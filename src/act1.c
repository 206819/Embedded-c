/**
 * @file act1.c
 * @author 206819(you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
    DDRB|=(1<<PB0);//Set B0=1 for led
    DDRD&=~(1<<PD0);// clear bit
    PORTD|=(1<<PD0);//set bit
    DDRD&=~(1<<PD1);//clear bit 
    PORTD|=(1<<PD1);//set bit

    while(1)
    {
       if(!(PIND&(1<<PD0)))
        {
            if(!(PIND&(1<<PD1)))
            {
                 PORTB|=(1<<PB0);//passanger and heater button indication
                 _delay_ms(500);
            }


              else
            {
                PORTB&=~(1<<PB0);
                _delay_ms(500);
            }

        }
    }
      return 0;
}
