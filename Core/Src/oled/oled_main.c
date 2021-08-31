/*
 * oled_main.c
 *
 *  Created on: Aug 31, 2021
 *      Author: odemki
 */


#include <oled/fonts.h>
#include <oled/oled_ssd1306.h>
#include <oled/ssd1306.h>

void init_oled(void)
{
	  ssd1306_Init();
	  ssd1306_Fill(Black);
	  ssd1306_UpdateScreen();
}
//----------------------------------------------------------------------------------------
void clearn_oled(void)
{
	 ssd1306_Fill(Black);
	 ssd1306_UpdateScreen();
}
//----------------------------------------------------------------------------------------
