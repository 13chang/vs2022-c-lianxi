#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void mune()
{
	printf("**********************\n");
	printf("****1.paly  2.etix****\n");
	printf("**********************\n");
	printf("��ѡ��>>");
}
void game()
{
	//������Ӯ�Ż�ֵ
	char get;
	//���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	chessboard(board,ROW,COL);
	//��ӡ����
	printchessboard(board, ROW, COL);
	while (1)
	{
		//����
		//���
		playe(board, ROW, COL);
		printchessboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		get = Iswin(board, ROW, COL);
		if (get != 'C')
		{
			break;
		}
		//����
		ComPuter(board, ROW, COL);
		printchessboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		get = Iswin(board, ROW, COL);
		if (get != 'C')
		{
			break;
		}
	}
		//�ж���Ӯ
		if (get == '#')
		{
			printf("����Ӯ\n");
		}
		else if(get=='*')
		{
			printf("���Ӯ\n");
		}
		else
		{
			printf("ƽ��\n");
		}
	
}
void GameModule()
{
	int input;
	//���ɵ����������
	srand((unsigned int)time(NULL));//srand-->����ͷ�ļ�<stdlib.h>  time-->����ͷ�ļ�<time.h>
	do
	{
		mune();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ����\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("���������������!!\n");
			break;
		}
	} while (input);
}
int main()
{
	GameModule();

	return 0;
}