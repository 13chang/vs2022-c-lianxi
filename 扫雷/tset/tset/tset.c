#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void nume()
{
	printf("******ɨ����Ϸ****\n");
	printf("******1.paly******\n");
	printf("******0.exit******\n");
	printf("******************\n");
}
void game()
{
	//�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų��׵���Ϣ
	char shou[ROWS][COLS] = { 0 };
	//��ʼ��
	initiali(mine,ROWS,COLS,'0');
	initiali(shou,ROWS,COLS,'*');
	//��ӡ����
	//Checker(mine, ROW, COL);
	Checker(shou, ROW, COL);
	//������
	Decorate(mine, ROW, COL);
	//Checker(mine, ROW, COL);
	//�Ų���
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
		printf("��ѡ��-->");
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
			printf("�����������������!!\n");
			break;
		}
	} while (input);
}
int main()
{
	tset();
	return 0;
}
