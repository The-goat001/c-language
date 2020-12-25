/* Note:Your choice is cpp IDE */
#include "stdio.h"
void main()
{
    double a;
    printf("请输入你的成绩");
    scanf("%lf,&a");
    if(a<0 || a>100)
    printf("这个成绩是不可能的");
    if(a>=0 && a<60)
    printf("这个成绩不合格\n");
    if(a>60 && a<=100)
    printf("这个成绩合格\n");
    return 0;
}