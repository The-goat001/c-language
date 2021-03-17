#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*int a = 10;
//	float f = 10.0;*/
//
//
//	
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	
//	scanf("%d %d", &a, &b);
//	c = a + b;
//	if (a + b < 100&&a+b>0)
//	{
//		
//		printf("%d\n", c);
//	}
//	else
//	{
//		d = c % 100;
//		printf("%d\n", d);
//		
//
//	}
//	return 0;

//}
//#include <stdio.h>
//
//int main(void) {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int res = a % 100 + b % 100;
//    printf("%d", res >= 100 ? res - 100 : res);
//    return 0;
//}
//int main()
//{
//	double i = 0;
//	int a = 0;
//	
//	scanf("%lf", &i);
//	a = (int)i;
//	
//	printf("%d\n", a % 10);
//	return 0;
//}
//#define 
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//}
int main()
{
	
    long int age, second;//需用到长整型
    scanf("%ld", &age);
    second = age * 31560000;
    printf("%ld", second);
    return 0;
}