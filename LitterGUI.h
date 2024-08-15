#ifndef LitterGUI_H
#define LitterGUI_H

/*数据类型定义*/
#define uint8_t		unsigned char
#define uint16_t	unsigned short
#define uint32_t	unsigned int
#define uint64_t	long long
/*------------*/

/*屏幕大小*/
//SCREEN_H 屏幕高度
//SCREEN_W 屏幕宽度
//SCREEN_DIR 屏幕显示方向 0竖向 1横向 

#define SCREEN_H 400
#define SCREEN_W 800
#define SCREEN_DIR 0
/*-------------------*/
/*屏幕缓冲区*/
extern  uint64_t screen_buf[SCREEN_H][SCREEN_W];
/*颜色定义*/
/*常量					值			颜色*/
/*--------				--------	--------*/
#define	BLACK			0x000000	//黑
#define	BLUE			0xAA0000	//蓝
#define	GREEN			0x00AA00	//绿
#define	CYAN			0xAAAA00	//青
#define	RED				0x0000AA	//红
#define	MAGENTA			0xAA00AA	//紫
#define	BROWN			0x0055AA	//棕
#define	LIGHTGRAY		0xAAAAAA	//浅灰
#define	DARKGRAY		0x555555	//深灰
#define	LIGHTBLUE		0xFF5555	//亮蓝
#define	LIGHTGREEN		0x55FF55	//亮绿
#define	LIGHTCYAN		0xFFFF55	//亮青
#define	LIGHTRED		0x5555FF	//亮红
#define	LIGHTMAGENTA	0xFF55FF	//亮紫
#define	YELLOW			0x55FFFF	//黄
#define	WHITE			0xFFFFFF	//白

/*----------*/
/*GUI初始化*/
void LitterGUI_init(void);

/*底层接口函数*/
void set_screen_size(uint16_t h, uint16_t w);
void draw_point(uint16_t x, uint16_t y, uint64_t color);
void drow_rectangular(uint16_t start_x, uint16_t start_y, uint16_t end_x, uint16_t end_y, uint64_t color);
void screen_refresh(void);
#endif
