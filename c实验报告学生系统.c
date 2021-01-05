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
printf("欢迎进入学生成绩管理系统\n请输入下列您要选择的功能数字\n***1-输入数据*****\n");
printf("***2-查询成绩*****\n***3-修改成绩*****\n***4-输出所有学生信息****\n");
printf("***5-统计及格和优秀人数***\n***6-输出不及格的学生成绩**\n");
printf("***7-输出所有优秀学生姓名和成绩***\n***8-录入上一次的数据*****\n****9-退出系统******\n");
scanf("%s",&a);
switch(a)
{
case'1':intput();break;//输入数据
case '2':query();break;//查询成绩
case '3':alter();break;//修改成绩
case '4':qwe();break;//输出所有学生信息
case '5':count();break;//统计及格和优秀人数
case '6':fail();break;//输出不及格学生成绩
case '7':wonderfulcount();break;//输出所有优秀学生姓名和成绩
case '8':read();break;//录入已有数据
case '9':exit(0);break;//退出系统
default:printf("输入数据错误");
}
}


void query()
{
int i;
char b[10];
printf("请输入学生学号\n");
scanf("%s",&b);
for(i=0;i<=4;i++)
{
if(strcmp(stu[i].num,b)==0)printf("学生成绩为%5.1f\n",stu[i].score);
}
longjmp(buf,1);
}

void intput()
{void save();
int i;
for(i=0;i<=4;i++)
{
printf("请输入学生姓名\n");
scanf("%s",&stu[i].name);
printf("请输入学生成绩");
scanf("%f",&stu[i].score);
printf("请输入学生学号");
scanf("%s",&stu[i].num);
}
save();
longjmp(buf,1);
}


void qwe()
{
int k;
for(k=0;k<=4;k++)
printf("姓名:%s\t学号:%s\t成绩%5.1f\t\n",stu[k].name,stu[k].num,stu[k].score);
longjmp(buf,1);   
}

void fail()
{
int i;
for(i=0;i<=4;i++)
{if(stu[i].score<=60)printf("学生名称%s\n学生成绩%5.1f\n",stu[i].name,stu[i].score); } 
longjmp(buf,1); 
}

void count()
{
int e=0,i;
for(i=0;i<=5;i++)
{if(stu[i].score>=60)e++;}
printf("及格和优秀的人数一共是%d\n",e); 
longjmp(buf,1); 
}


void wonderfulcount()
{
int w;
for(w=0;w<=5;w++)
{if(stu[w].score>=80)printf("优秀学生姓名%s优秀成绩%5.1f\n",stu[w].name,stu[w].score);}
longjmp(buf,1);    
}

void alter()
{void save();
float x;
char y[10];
int i;
printf("请输入想要修改成绩的学生学号");
scanf("%s",&y);
printf("请输入需要修改的成绩");
scanf("%f",&x);
for(i=0;i<=4;i++)
if(strcmp(stu[i].num,y)==0)stu[i].score=x;
save();
longjmp(buf,1);   
}


void save()
{int i;
FILE *fp;
if((fp=fopen("baocun.txt", "wt+"))==NULL)printf("无法打开文件");
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
printf("无法打开文件");                   //将文件中数据读取到结构体数组
while (!feof(fp))
{
	fscanf(fp, "%s %s %f\n", &stu[i].name, &stu[i].num,&stu[i].score);
	i++;
}
longjmp(buf,1);
}