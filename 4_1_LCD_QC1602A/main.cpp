#include "LCD.h"


int main()

{

      LCD_init();                     // call the initialise function

      /*display_to_LCD(0x48);           // ‘H’

      display_to_LCD(0x45);           // ‘E’

      display_to_LCD(0x4C);           // ‘L’

      display_to_LCD(0x4C);           // ‘L’

      display_to_LCD(0x4F);           // ‘O’

      for(char x=0x30;x<=0x39;x++)

      {

            display_to_LCD(x);      // display numbers 0-9

      }*/

      display_to_LCD(0x31);
      display_to_LCD(0x30);
      display_to_LCD(0x36);
      display_to_LCD(0x30);
      display_to_LCD(0x36);
      display_to_LCD(0x31);
      display_to_LCD(0x32);
      display_to_LCD(0x30);
      display_to_LCD(0x32);
      set_location(0x0E);
      display_to_LCD(0x33);
      set_location(0x0F);
      display_to_LCD(0x30);
      wait(1);
      for(char x=0x32;x>=0x30;x--){
            for(char y=0x39; y>=0x30; y--){
            set_location(0x0E);
            display_to_LCD(x);      // display numbers 0-9
            set_location(0x0F);            
            display_to_LCD(y);
            wait(1);
            }
      }


}