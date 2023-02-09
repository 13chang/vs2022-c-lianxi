#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<stdio.h>
//��ʼ��
void TialiZation(char board[ROWS][COLS], int row, int col, char set)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
//��ӡ����
void print(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <=row; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (int i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
//������
void Disposition(char board[ROWS][COLS], int row, int col)
{
	int count = NUM;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}
//����Χ������
int  Around(char mine[ROWS][COLS], int x, int y)
{
	return mine[x + 1][y - 1] +
		mine[x][y - 1] +
		mine[x - 1][y - 1] +
		mine[x + 1][y] +
		mine[x - 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
//�Ų���
void NsooKup(char mine[ROWS][COLS], char shou[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	int win = 0;
	while (win<col*row-NUM)
	{
		printf("�������Ų������\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("�ȵ����㱻ը���ˣ���\n");
				//print(mine, ROW, COL);
				break;
			}
			else
			{
				//�׵���Χ������
				int count=Around(mine,x,y);
				shou[x][y] = count + '0';
				print(shou, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("������Ƿ�������������\n");
		}
		if (win == col * row - NUM)
		{
			printf("��ϲ�����׳ɹ�����\n");
		}
	}
}