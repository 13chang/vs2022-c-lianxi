#include"game.h"
//��ʼ��
void initiali(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//��ӡ����
void Checker(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
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
void Decorate(char board[ROWS][COLS], int row, int col)
{
	int count = NUB;
	while (count)
	{
		int x = rand() % row+ 1;
		int y = rand() % col+ 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//��Χ�׵���Ϣ
int get_work(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y-1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] - 8 * '0';
}
//�Ų���
void NslooKup(char mine[ROWS][COLS], char shou[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	int  win=0;
	while (win < row * col - NUB)
	{
		printf("�������Ų��׵�����\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź��㱻ը����!!\n");
				Checker(mine, ROW, COL);
				break;
			}
			else
			{
				//	printf("����д���׵Ĺ���\n");
				int input = get_work(mine, x, y);
				shou[x][y] = input + '0';
				Checker(shou, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("���������������������\n");
		}
		if (win == row * col - NUB)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
		}
	}
}