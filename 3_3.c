#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*char a[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", a[i]);
//	}*/
//
//	//int arr[10] = { 1,2,3,4 };
//	//char a[5] = { 'a','b' };
//	//char b[5] = "ab";
//	//char c[7] = "abcdef";
//	//printf("%d\n", sizeof(c));//������ռ�ռ��С ��\0
//	//printf("%d\n", strlen(c));//���ַ������� ����\0
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//3��4��
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };//3��4��
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%p\n", &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}