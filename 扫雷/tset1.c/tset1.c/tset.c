#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void nume()
{
	printf("*************ɨ����Ϸ***********\n");
	printf("**********1.paly  0.exit********\n");
	printf("********************************\n");
}
void game()
{
	//�����׵���Ϣ
	char board_mine[ROWS][COLS] = {0};
	//�Ų��׵���Ϣ
	char board_shou[ROWS][COLS] = {0};
	//��ʼ��
	TialiZation(board_mine,ROWS,COLS,'0');
	TialiZation(board_shou,ROWS,COLS,'*');
	//��ӡ����
	//print(board_mine,ROW,COL);
	print(board_shou,ROW,COL);
	//������
	Disposition(board_mine,ROW,COL);
	//print(board_mine, ROW, COL);
	//�Ų���
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
		printf("********************��ѡ��-->");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ!!\n");
		break;
		case 1:
			game();
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{
	tset();
	return 0;
}