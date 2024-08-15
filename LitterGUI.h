#ifndef LitterGUI_H
#define LitterGUI_H

/*�������Ͷ���*/
#define uint8_t		unsigned char
#define uint16_t	unsigned short
#define uint32_t	unsigned int
#define uint64_t	long long
/*------------*/

/*��Ļ��С*/
//SCREEN_H ��Ļ�߶�
//SCREEN_W ��Ļ���
//SCREEN_DIR ��Ļ��ʾ���� 0���� 1���� 

#define SCREEN_H 400
#define SCREEN_W 800
#define SCREEN_DIR 0
/*-------------------*/
/*��Ļ������*/
extern  uint64_t screen_buf[SCREEN_H][SCREEN_W];
/*��ɫ����*/
/*����					ֵ			��ɫ*/
/*--------				--------	--------*/
#define	BLACK			0x000000	//��
#define	BLUE			0xAA0000	//��
#define	GREEN			0x00AA00	//��
#define	CYAN			0xAAAA00	//��
#define	RED				0x0000AA	//��
#define	MAGENTA			0xAA00AA	//��
#define	BROWN			0x0055AA	//��
#define	LIGHTGRAY		0xAAAAAA	//ǳ��
#define	DARKGRAY		0x555555	//���
#define	LIGHTBLUE		0xFF5555	//����
#define	LIGHTGREEN		0x55FF55	//����
#define	LIGHTCYAN		0xFFFF55	//����
#define	LIGHTRED		0x5555FF	//����
#define	LIGHTMAGENTA	0xFF55FF	//����
#define	YELLOW			0x55FFFF	//��
#define	WHITE			0xFFFFFF	//��

/*----------*/
/*GUI��ʼ��*/
void LitterGUI_init(void);

/*�ײ�ӿں���*/
void set_screen_size(uint16_t h, uint16_t w);
void draw_point(uint16_t x, uint16_t y, uint64_t color);
void drow_rectangular(uint16_t start_x, uint16_t start_y, uint16_t end_x, uint16_t end_y, uint64_t color);
void screen_refresh(void);
#endif
