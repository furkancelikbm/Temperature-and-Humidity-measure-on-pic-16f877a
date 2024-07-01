#define use_portb_lcd TRUE
#include <16F628A.h>// Kullanılan mikroişlemci dosyası
#use delay(clock=4000000) //4Mhz Kristal
#include<lcd1.c>
#include<DHT-11.c>
int isi,nem;// 8 bitlik değişken tanımlandı
void main()
{
   lcd_init();
   while(1)
   {
      read_dht();
      isi=dht_dat[2];
      nem=dht_dat[0];
      delay_ms(100);
      lcd_gotoxy(1,1);
      
      printf(lcd_putc,"\fISI: %02d%cC",isi,223);
      delay_ms(5);
      printf(lcd_putc, "\nNEM : %02d%%",nem);
      delay_ms(5);
   }
   
}
      
