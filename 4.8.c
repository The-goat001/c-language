#include<stdio.h>
int main()
{
	int grade;
	scanf("%f",&grade);
	printf("ÄãµÄ³É¼¨");
	switch(grade)
	{
		case'grade>=90':printf("A\n");break;
		default:printf("enter data error !\n");
	}
	return 0;
}
