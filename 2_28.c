#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}

//
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//
//
//
//
//	return 0;
//
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str)//递归  大事化小
{
	if (*str != '\0')
	   return 1 + my_strlen(str+1);
	else return 0;

}

int main()
{
	char arr[] = "666";
	int len = my_strlen(arr);
	printf("%d\n", len);


	/*unsigned int num = 0;
	scanf("%d", &num);
	print(num);*/


	/*printf("%d,printf("%d",printf(" %d",43)));*///链式
	return 0;
}
