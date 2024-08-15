#include "LitterGUI.h"
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
uint64_t screen_buf[SCREEN_H][SCREEN_W];
//设置窗口大小
void set_screen_size(uint16_t h, uint16_t w)
{
	initgraph(h,w);
}

void screen_refresh(void)
{
	uint64_t color;
	for (int y = 0; y < SCREEN_H; y++)
	{

		for (int x = 0; x < SCREEN_W; x++)
		{
			color = screen_buf[y][x];
			draw_point(x, y, color);
			printf("0x%llx ", color);
		}
		printf("\r\n");
	}
}

//画点
void draw_point(uint16_t x, uint16_t y, uint64_t color)
{
	putpixel(x,y, color);
}
//画实心矩形
void drow_rectangular(uint16_t start_x, uint16_t start_y, uint16_t end_x, uint16_t end_y, uint64_t color)
{
	for (int y = start_y; y < end_y; y++)
	{
		for (int x = start_x; x < end_x; x++)
		{
			screen_buf[y][x] = color;
		}
	}
	screen_refresh();
}