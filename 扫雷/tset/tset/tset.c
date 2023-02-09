#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void nume()
{
	printf("******扫雷游戏****\n");
	printf("******1.paly******\n");
	printf("******0.exit******\n");
	printf("******************\n");
}
void game()
{
	//布置雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查雷的信息
	char shou[ROWS][COLS] = { 0 };
	//初始化
	initiali(mine,ROWS,COLS,'0');
	initiali(shou,ROWS,COLS,'*');
	//打印棋盘
	//Checker(mine, ROW, COL);
	Checker(shou, ROW, COL);
	//布置雷
	Decorate(mine, ROW, COL);
	//Checker(mine, ROW, COL);
	//排查雷
	NslooKup(mine,shou,ROW,COL);
	Checker(mine, ROW, COL);
}
void tset()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		nume();
		printf("请选择-->");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏!!\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入!!\n");
			break;
		}
	} while (input);
}
int main()
{
	tset();
	return 0;
}
