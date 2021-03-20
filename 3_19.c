#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*int* p = NULL;
//	char* pc = NULL;
//	int arr[10] = { 0 };*/
//	//arr首因素地址
//	//&arr[0]首因素地址
//	//&arr-数组地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组指针
//
//	return 0;
//
//}
//int main()
//{
	/*char* arr[5];
	char* (*pa)[5] = &arr;
	int arr2[10] = { 0 };
	int(*pa2)[10] = &arr2;
}*/
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(*pa + i));
//	}
//	return 0;
//}
//void printf1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void printf2(int(*p)[5], int x, int y)//
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for(j=0;j<y;j++)
//		{
//			printf("%d ", *(*(p + i) + j));//(*(p+i))[j]
//		}
//		printf("\n");
//		
//	}
//
//
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	printf1(arr, 3, 5);//arr数组名 -首元素地址
//	printf2(arr, 3, 5);
//	return 0; 
//}
//test(int arr)
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//
//}
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 9;
	Add(a, b);
	
	int (*pa)(int, int) = Add;	
	printf("%d\n", (*pa)(2, 3));
	return 0;
}