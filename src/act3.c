/**
 * @file act3.c
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

{   char temp;

    /*Configuring the registers and ports*/
    TCCR0A|=(1<<COM0A1)|(1<<WGM00)|(1<<WGM00);
    TCCR0B|=(1<<WGM02)|(1<<CS01)|(1<<CS00);
    DDRD|=(1<<PD6);

    while(1)
    {
        if(temp>=0&&temp<=200)
        {
            OCR0A=190;
            temp=20;
            _delay_ms(100);
        }
        else if(temp>=210&&temp<=500)
        {
            OCR0A=380;
            temp=25;
            _delay_ms(100);
        }
        else if(temp>=510&&temp<=700)
        {
            OCR0A=600;
            temp=29;
            _delay_ms(100);
        }
        else if(temp>=710&&temp<=1024)
        {
            OCR0A=1023;
            temp=33;
            _delay_ms(100);
        }
        else
        {
            OCR0A=0;
            temp=0;
            _delay_ms(100);
        }
    }
    return 0;

}
