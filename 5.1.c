#include<stdio.h>
int main()
{
	int i,score1,score2,score3,aver;
	i=1;
	while(i<=3)
	{
		scanf("%d,%d,%d",&score1,&score2,&score3);
	    aver=(score1+score2+score3)/3;
		printf("aver=%d",aver);
		i++;
	}
	return 0;
}
