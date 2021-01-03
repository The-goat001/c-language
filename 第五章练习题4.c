#include<stdio.h>
int main()
{
	char c;
	int letters=0,space=0,other=0,digt=0;
	printf("输入一行字符：");
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		 letters++;
		else if(c=' ')
		space++;
		else if(c>='0'&&c<='9')
		 digt++;
		 else 
		 other++;
	}
	printf("字母数%d\n空格数%d\n数字数%d\n其他数字%d\n",letters,space,digt,other);
	return 0;
}
