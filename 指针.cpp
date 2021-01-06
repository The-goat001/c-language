#include <stdio.h>
int main()
{
	int a,b,*p,*q,*r;
	printf("输入数字\n");
	scanf("%d,%d",&a,&b);
	p=&a;
	q=&b;
	if(a<b)
	{
	r=p;
	p=q;
	q=r;
	}
	printf("大的是%d 小的是%d",*p,*q);
	return 0;
 } 
