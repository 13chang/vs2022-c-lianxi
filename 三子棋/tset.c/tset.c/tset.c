#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void  menu()
{
	printf("***********************\n");
	printf("****1.play   0.exit****\n");
	printf("***********************\n");
}
//��Ϸ�������㷨ʵ��
void game()
{
	char get=0;
	//����-����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	intboard(board, ROW, COL);
	//��ӡ����
	disboard(board,ROW,COL);
	//����
	while (1)
	{
		//���
		playermove(board, ROW, COL);
		disboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		get = inwin(board,ROW,COL);
		if (get != 'C')
		{
			break;
		}
		//����
		computemovew(board, ROW, COL);
 		disboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		get =inwin(board,ROW,COL);
		if (get != 'C')
		{
			break;
		}
	}
	if (get == '*')
	{
		printf("���Ӯ\n");
	}
	else if (get == '#')
	{
		printf("����Ӯ\n");
	}
	else
		printf("ƽ��\n");
}
void  test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ������>");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ!!\n");
			break;
		case 1:
			game();
			break;
		default :
			printf("�������,������ѡ�񣡣�\n");
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