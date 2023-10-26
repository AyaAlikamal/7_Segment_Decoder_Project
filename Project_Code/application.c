/* 
 * File:   application.c
 * Author: AyaAli
 * Created on September 22, 2023, 10:24 AM
 */
#include "application.h"
 
uint_8 ones = 0 , tens = 0 ;
int main() {
    
Std_ReturnType ret = E_NOT_OK;
application_initialize();
while(1){
    
    for(tens = 0; tens <10 ; tens++){
      ret = gpio_port_write_logic(PORTC_INDEX, tens);  
        _delay(250000);
        for(ones = 0; ones <10 ; ones++){
         ret = gpio_port_write_logic(PORTD_INDEX, ones);        
        _delay(250000);
        }       
    }
   
  }
  return (EXIT_SUCCESS);
}
void application_initialize(void){
    Std_ReturnType ret = E_NOT_OK;
ret = gpio_port_direction_intialize(PORTC_INDEX, 0x80);
ret = gpio_port_direction_intialize(PORTD_INDEX, 0x80);
//ret = gpio_port_write_logic(PORTC_INDEX, 0xC0); 
//ret = gpio_port_write_logic(PORTD_INDEX, 0xC0); 
}