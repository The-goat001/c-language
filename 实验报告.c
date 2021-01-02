#include<stdio.h>
#include<stdlib.h>    //供exit()用
#include<string.h>
/*定义结构体students*/
struct student
{char num[10];    //学号
 char name[8];    //姓名
 int score;     //成绩
 }stu[3];


 /*成绩输入*/
	void student_new()  
	{int i;
	FILE *fp;
	fp=fopen("E:\\stud.dat","wb");
    for(i=0;i<3;i++)
     {printf("\n输入第%d学生的成绩:\n",i+1);
      printf("学号:");
      scanf("%s",stu[i].num);
      printf("姓名:");
      scanf("%s",stu[i].name);
      printf("成绩:");
      scanf("%d",&stu[i].score);
        } 
   for(i=0;i<3;i++)    //将数据写入文件
     if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
	    printf("文件保存错误 \n");
     fclose(fp);
}


 //*显示所有记录函数*
 void load()    
	 { 
	  int i;
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb"); 
	  if(fp==NULL)
	  {printf("文件打开失败!\n");
	  exit(1);
	  }
      for (i=0;i<3;i++)
     {fread(&stu[i],sizeof(struct student),1,fp);
     printf("\n%-10s %-8s %4d\n",stu[i].num,stu[i].name,stu[i].score);
	  printf("\n");
	  }
	   fclose(fp);
 }


//*根据学号查询学生信息函数*
 void score_search()     
 {
	 int i;
	 char stunum[10];   
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb"); 
	  if(fp==NULL)
	  {printf("文件打开失败!\n");
	  exit(1);
	  }
      for (i=0;i<3;i++)
        fread(&stu[i],sizeof(struct student),1,fp);
	    fclose(fp);
    printf( "请输入学号：");
	scanf("%s",stunum);
	for(i=0;i<3;i++)
	{  
	if(strcmp(stu[i].num,stunum)==0)
	{printf("====================================================\n");
	  printf("学号     姓名     C语言\n");
     printf("====================================================\n");
	  printf("\n%-10s %-8s %4d\n",stu[i].num,stu[i].name,stu[i].score);
	  printf("\n");
	  break;
			}
		}
	if(i==3)
	 printf("该学生信息不存在");
}


//*修改成绩函数*
void modify()
	{
     int i;
	 char stunum[10];   
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb+"); 
	  if(fp==NULL)
	  {printf("文件打开失败!\n");
	  exit(1);
	  }
    for (i=0;i<3;i++)
        fread(&stu[i],sizeof(struct student),1,fp);
	    fclose(fp);
    printf( "请输入要修改成绩的学生学号：");
	scanf("%s",stunum);
	for(i=0;i<3;i++)
	{  
	if(strcmp(stu[i].num,stunum)==0)
	{printf("====================================================\n");
	  printf("学号     姓名     C语言\n");
      printf("====================================================\n");
	  printf("\n%-10s %-8s %4d\n",stu[i].num,stu[i].name,stu[i].score);
	  printf("\n");
      printf( "请输入该生的正确成绩：");
	  scanf("%d",&stu[i].score);
	  printf("\n%-10s %-8s %4d\n",stu[i].num,stu[i].name,stu[i].score);
	  printf("\n");
	  break;
	}
	if(i==3)
	 printf("该学生信息不存在");
}

fp=fopen("E:\\stud.dat","wb");  
   for(i=0;i<3;i++)    //将数据写入文件
     if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
	   printf("文件保存错误 \n");
   fclose(fp);
}



 //*统计及格及优秀人数函数*
 void loadsum()    
	 { 
	  int i,s1=0,s2=0;
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb"); 
	  if(fp==NULL)
	  {printf("文件打开失败!\n");
	  exit(1);
	  }
      for (i=0;i<3;i++)
     {fread(&stu[i],sizeof(struct student),1,fp);
	  if(stu[i].score>=60) s1=s1+1;
      if(stu[i].score>=85) s2=s2+1;
	  }
	    fclose(fp);
     printf("及格人数:%4d\n优秀人数:%4d\n",s1,s2);
	  printf("\n");
	  }


//*输出不及格学生成绩函数*
 void loadpen1()    
	 { 
	  int i,s1=0,s2=0;
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb"); 
	  if(fp==NULL)
	  {printf("文件打开失败!\n");
	  exit(1);
}

