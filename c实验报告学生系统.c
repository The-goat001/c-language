/* Note:Your choice is C IDE */
#include "stdio.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <setjmp.h>
#include <setjmp.h>
static jmp_buf buf;
struct Student
{
char num[10];
char name[20];
float score;
}stu[5];
void main()
{
void intput();
void query();
void qwe();
void fail();
void count();
void wonderfulcount();
void alter();
void read();
char a;
setjmp(buf);
printf("**************************\n");
printf("��ӭ����ѧ���ɼ�����ϵͳ\n������������Ҫѡ��Ĺ�������\n***1-��������*****\n");
printf("***2-��ѯ�ɼ�*****\n***3-�޸ĳɼ�*****\n***4-�������ѧ����Ϣ****\n");
printf("***5-ͳ�Ƽ������������***\n***6-����������ѧ���ɼ�**\n");
printf("***7-�����������ѧ�������ͳɼ�***\n***8-¼����һ�ε�����*****\n****9-�˳�ϵͳ******\n");
scanf("%s",&a);
switch(a)
{
case'1':intput();break;//��������
case '2':query();break;//��ѯ�ɼ�
case '3':alter();break;//�޸ĳɼ�
case '4':qwe();break;//�������ѧ����Ϣ
case '5':count();break;//ͳ�Ƽ������������
case '6':fail();break;//���������ѧ���ɼ�
case '7':wonderfulcount();break;//�����������ѧ�������ͳɼ�
case '8':read();break;//¼����������
case '9':exit(0);break;//�˳�ϵͳ
default:printf("�������ݴ���");
}
}


void query()
{
int i;
char b[10];
printf("������ѧ��ѧ��\n");
scanf("%s",&b);
for(i=0;i<=4;i++)
{
if(strcmp(stu[i].num,b)==0)printf("ѧ���ɼ�Ϊ%5.1f\n",stu[i].score);
}
longjmp(buf,1);
}

void intput()
{void save();
int i;
for(i=0;i<=4;i++)
{
printf("������ѧ������\n");
scanf("%s",&stu[i].name);
printf("������ѧ���ɼ�");
scanf("%f",&stu[i].score);
printf("������ѧ��ѧ��");
scanf("%s",&stu[i].num);
}
save();
longjmp(buf,1);
}


void qwe()
{
int k;
for(k=0;k<=4;k++)
printf("����:%s\tѧ��:%s\t�ɼ�%5.1f\t\n",stu[k].name,stu[k].num,stu[k].score);
longjmp(buf,1);   
}

void fail()
{
int i;
for(i=0;i<=4;i++)
{if(stu[i].score<=60)printf("ѧ������%s\nѧ���ɼ�%5.1f\n",stu[i].name,stu[i].score); } 
longjmp(buf,1); 
}

void count()
{
int e=0,i;
for(i=0;i<=5;i++)
{if(stu[i].score>=60)e++;}
printf("��������������һ����%d\n",e); 
longjmp(buf,1); 
}


void wonderfulcount()
{
int w;
for(w=0;w<=5;w++)
{if(stu[w].score>=80)printf("����ѧ������%s����ɼ�%5.1f\n",stu[w].name,stu[w].score);}
longjmp(buf,1);    
}

void alter()
{void save();
float x;
char y[10];
int i;
printf("��������Ҫ�޸ĳɼ���ѧ��ѧ��");
scanf("%s",&y);
printf("��������Ҫ�޸ĵĳɼ�");
scanf("%f",&x);
for(i=0;i<=4;i++)
if(strcmp(stu[i].num,y)==0)stu[i].score=x;
save();
longjmp(buf,1);   
}


void save()
{int i;
FILE *fp;
if((fp=fopen("baocun.txt", "wt+"))==NULL)printf("�޷����ļ�");
for (i=0; i<5; i++)            
{
fprintf(fp, "%s %s %f\n", stu[i].name, stu[i].num,stu[i].score);
}
fclose(fp); 
}

void read()
{
int i=0;
FILE *fp;
if((fp=fopen("baocun.txt", "r+"))==NULL)
printf("�޷����ļ�");                   //���ļ������ݶ�ȡ���ṹ������
while (!feof(fp))
{
	fscanf(fp, "%s %s %f\n", &stu[i].name, &stu[i].num,&stu[i].score);
	i++;
}
longjmp(buf,1);
}