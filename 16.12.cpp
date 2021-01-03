#include<stdio.h>
int main()
{
	int n=1,sum=0,a=1;
	while(n<=10)
	{
		n=n+1;
		sum=sum+a;
		a=a*n;
	}
	printf("计算结果是%d\n",sum);
	return 0;
}
