#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int ret = rand();
	srand((unsigned int)time(NULL));
	//int ret1 = rand() % 10 + 1;//����1~10�������
	//int ret2 = rand() % 100 + 1;//����1~100�������
	//int ret3 = rand() % 34 + 66;//����66~99�������
	//int ret4 = rand() % (n - m + 1) + m;//����m~n�������
	int ret1 = rand() % 3;
	printf("%d\n", ret1);
	return 0;
}

