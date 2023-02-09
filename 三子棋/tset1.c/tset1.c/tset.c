#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void mune()
{
	printf("**********************\n");
	printf("****1.paly  2.etix****\n");
	printf("**********************\n");
	printf("请选择>>");
}
void game()
{
	//接受输赢放回值
	char get;
	//存放棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	chessboard(board,ROW,COL);
	//打印棋盘
	printchessboard(board, ROW, COL);
	while (1)
	{
		//下棋
		//玩家
		playe(board, ROW, COL);
		printchessboard(board, ROW, COL);
		//判断玩家是否赢
		get = Iswin(board, ROW, COL);
		if (get != 'C')
		{
			break;
		}
		//电脑
		ComPuter(board, ROW, COL);
		printchessboard(board, ROW, COL);
		//判断电脑是否赢
		get = Iswin(board, ROW, COL);
		if (get != 'C')
		{
			break;
		}
	}
		//判断输赢
		if (get == '#')
		{
			printf("电脑赢\n");
		}
		else if(get=='*')
		{
			printf("玩家赢\n");
		}
		else
		{
			printf("平局\n");
		}
	
}
void GameModule()
{
	int input;
	//生成电脑随机坐标
	srand((unsigned int)time(NULL));//srand-->引用头文件<stdlib.h>  time-->引用头文件<time.h>
	do
	{
		mune();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏！！\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输出错误，重新输入!!\n");
			break;
		}
	} while (input);
}
int main()
{
	GameModule();

	return 0;
}