#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void  menu()
{
	printf("***********************\n");
	printf("****1.play   0.exit****\n");
	printf("***********************\n");
}
//游戏的整个算法实现
void game()
{
	char get=0;
	//数字-存放走出的棋盘信息
	char board[ROW][COL] = {0};//全部空格
	//初始化棋盘
	intboard(board, ROW, COL);
	//打印棋盘
	disboard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家
		playermove(board, ROW, COL);
		disboard(board, ROW, COL);
		//判断玩家是否赢
		get = inwin(board,ROW,COL);
		if (get != 'C')
		{
			break;
		}
		//电脑
		computemovew(board, ROW, COL);
 		disboard(board, ROW, COL);
		//判断电脑是否赢
		get =inwin(board,ROW,COL);
		if (get != 'C')
		{
			break;
		}
	}
	if (get == '*')
	{
		printf("玩家赢\n");
	}
	else if (get == '#')
	{
		printf("电脑赢\n");
	}
	else
		printf("平局\n");
}
void  test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择数字>");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			printf("退出游戏!!\n");
			break;
		case 1:
			game();
			break;
		default :
			printf("输出错误,请重新选择！！\n");
				break;
		}
	} 
	while (input);
}
int main()
{
	test();
	return 0;
}