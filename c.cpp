#include<stdio.h>
int main()
{
	int a=0,b=0,sum=0,num[10],i,max,min,t;
	for(i=0;i<20;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<20;i++)
	{
		sum=sum+num[i];
	}
	int average =sum/10;
	max =num[0];
	for (i=0;i<10;i++)
	{
		if(num[i]>max)
		{
			t=num[i];
			num[i]=max;
			max=t;
		}
	 } 
	 printf("%d,%d,%d",sum,average,max);
}
