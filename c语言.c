/* Note:Your choice is cpp IDE */
#include "stdio.h"
void main()
{
    double a;
    printf("��������ĳɼ�");
    scanf("%lf,&a");
    if(a<0 || a>100)
    printf("����ɼ��ǲ����ܵ�");
    if(a>=0 && a<60)
    printf("����ɼ����ϸ�\n");
    if(a>60 && a<=100)
    printf("����ɼ��ϸ�\n");
    return 0;
}