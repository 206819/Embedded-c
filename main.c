/**
 * @file main.c
 * @author 206819(you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "act1.h"
#include "act2.h"
#include "act3.h"
#include<avr/io.h>
#include<util/delay.h>

uint16_t temp;
initADC();
char temp;
uint16_t temp;

int main(void)
{
  while(1)
  {
    temp=ReadADC(0);
    _delay_ms(10);
  }
  return 0;
}
