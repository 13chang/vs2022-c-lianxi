#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	/*int i = 1;
//	int* n1 = &i;
//	char* n2 = &i;
//	double* n3 = &i;
//	printf("%p\n",n1);
//	printf("%p\n",n1+1);
//	printf("%p\n",n2);
//	printf("%p\n",n2+1);
//	printf("%p\n",n3);
//	printf("%p\n",n3+1);*/
//	/*int arr[10] = { 0 };
//	char* p = &arr;*/
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = 1;
//	//}
//	//for (int j = 0; j < 10; j++)
//	//{
//	//	printf("%d ",arr[j]);
//	//}
//	
//	return 0;
//}
//int tset(char* arr)
//{
//	char* num = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - num;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = tset(arr);
//	printf("%d",len);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int *p  = &a;
//	int* p = &a;
//	*p = 2;
//	printf("%d",a);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p;
//	for ( p = &arr[0]; p < &arr[10];)
//	{
//		*p++ = 0;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ",arr[j]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", arr[9] - arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p;
//	for (p = &arr[10]; p > &arr[0];)
//	{
//		*--p = 0;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ",arr[j]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	printf("%p\n",arr);
//	printf("%p\n",arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n",&arr);
//	printf("%p\n",&arr+1);
//
//	
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%p=========%p\n",p+i,&arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa =&pa;
//	**ppa = 20;
//	printf("%d\n",a);
//	printf("%p\n",&a);
//	printf("%d\n",*pa);
//	printf("%p\n",&pa);
//	printf("%d\n",**ppa);
//	printf("%p\n",&ppa);
//	return 0;
//}
//int main()
//{
//	int a=1, b=2, c=3;
//	char c1 = 'l';
//	char c2 = 's';
//	char c3 = 'c';
//	int* arr1[3] = { &a,&b,&c };
//	char* arr2[3] = { &c1,&c2,&c3 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", *arr1[i]);
//		printf("%c\n", *arr2[i]);
//		printf("%p\n", &arr1[i]);
//		printf("%p\n", &arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	printf("%d", a ^ b);
//	return 0;
//}
//#include<assert.h>
//
//void print(char* arr1,const char* arr2)
//{
//	assert(arr2 != NULL);
//	assert(arr1 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = {"xxxxxxxxxxxxxxxxx"};
//	char arr2[] = { "hello" };
//	print(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}
int main()
{
	/*int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", a);*/
	//1.
	//const在int前面    const int * p 或者这种写法 int const * p 不能改变a是值 可以用*p去取向其他值的地址
	//int a = 10;
	 //int const * p = &a;
	//或者也可以
	// int n=20;
	// p = &n; 同样也不难改变n的值
	//*p = 20;
	//printf("%d\n", a);
	//2.const在p的前面 int * const p 可以改变该值 但是不能取向其他值的地址
	//int a = 10;
	//int n = 10;
	//int * const p = &a;
	//*p = 20; //这种是ok
	//p = &n; //这种是错的
	//printf("%d", a);


	return 0;
}

