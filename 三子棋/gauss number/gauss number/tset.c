#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int ret = rand();
	srand((unsigned int)time(NULL));
	//int ret1 = rand() % 10 + 1;//生成1~10的随机数
	//int ret2 = rand() % 100 + 1;//生成1~100的随机数
	//int ret3 = rand() % 34 + 66;//生成66~99的随机数
	//int ret4 = rand() % (n - m + 1) + m;//生成m~n的随机数
	int ret1 = rand() % 3;
	printf("%d\n", ret1);
	return 0;
}

