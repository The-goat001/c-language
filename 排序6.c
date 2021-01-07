#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf("请输入10个数:\n");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=8;i++)
	for(j=i+1;j<=9;j++)
	if(a[i]>a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("排列后的数：\n");
	for(i=0;i<=9;i++)
	printf("%d\t",a[i]);
	printf("\n");
	return 0;
}
