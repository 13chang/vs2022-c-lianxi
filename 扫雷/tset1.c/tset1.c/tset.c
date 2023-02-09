#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void nume()
{
	printf("*************扫雷游戏***********\n");
	printf("**********1.paly  0.exit********\n");
	printf("********************************\n");
}
void game()
{
	//布置雷的信息
	char board_mine[ROWS][COLS] = {0};
	//排查雷的信息
	char board_shou[ROWS][COLS] = {0};
	//初始化
	TialiZation(board_mine,ROWS,COLS,'0');
	TialiZation(board_shou,ROWS,COLS,'*');
	//打印棋盘
	//print(board_mine,ROW,COL);
	print(board_shou,ROW,COL);
	//布置雷
	Disposition(board_mine,ROW,COL);
	//print(board_mine, ROW, COL);
	//排查雷
	NsooKup(board_mine,board_shou,ROW,COL);
	print(board_mine, ROW, COL);
}
void tset()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		nume();
		printf("********************请选择-->");
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
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	tset();
	return 0;
}