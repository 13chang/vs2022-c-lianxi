#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
//��ʼ�����飨���̣�
void chessboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//��ӡ����
//   |   |
//---|---|---
//   |   |   
//---|---|---
//   |   |   
void printchessboard(char board[ROW][COL], int row, int col)
{
	//��ӡһ������
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	//��ӡ�ָ���
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//���
void  playe(char board[ROW][COL], int row, int col)
{
	int x;
	int y;
	//�ж�����Ϸ���
	printf("�����>>\n");
	while (1)
	{
		printf("������Ҫ�ߵ����꣺");
		scanf("%d%d", &x, &y);
		//����������ҽǶ��루����Ӧ�ô�1��ʼ��������������±꣩��
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}
}
//����
void ComPuter(char board[ROW][COL], int row, int col)
{
	printf("������>>\n");
	while (1)
	{
		int x = rand() % row;//rand-->����ͷ�ļ�<stdlib.h>
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//�ж�����
//����ֵΪ1������
//����ֵΪ0����û����
int Draw(char board[ROW][COL],int  row,int  col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if(board[i][j] == ' ')
			return 0;
		}
	}
	return 1;
}
//�ж���Ӯ
char Iswin(char board[ROW][COL], int row, int col)
{
	//������
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//������
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�Խ���
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	int num=Draw(board,row,col);
	if (1 == num)
	{
		return 'Q';
	}
	return 'C';
}