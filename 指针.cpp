#include <stdio.h>
int main()
{
	int a,b,*p,*q,*r;
	printf("��������\n");
	scanf("%d,%d",&a,&b);
	p=&a;
	q=&b;
	if(a<b)
	{
	r=p;
	p=q;
	q=r;
	}
	printf("�����%d С����%d",*p,*q);
	return 0;
 } 
