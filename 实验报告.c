#include<stdio.h>
#include<stdlib.h>    //��exit()��
#include<string.h>
/*����ṹ��students*/
struct student
{char num[10];    //ѧ��
 char name[8];    //����
 int score;     //�ɼ�
 }stu[3];


 /*�ɼ�����*/
	void student_new()  
	{int i;
	FILE *fp;
	fp=fopen("E:\\stud.dat","wb");
    for(i=0;i<3;i++)
     {printf("\n�����%dѧ���ĳɼ�:\n",i+1);
      printf("ѧ��:");
      scanf("%s",stu[i].num);
      printf("����:");
      scanf("%s",stu[i].name);
      printf("�ɼ�:");
      scanf("%d",&stu[i].score);
        } 
   for(i=0;i<3;i++)    //������д���ļ�
     if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
	    printf("�ļ�������� \n");
     fclose(fp);
}


 //*��ʾ���м�¼����*
 void load()    
	 { 
	  int i;
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb"); 
	  if(fp==NULL)
	  {printf("�ļ���ʧ��!\n");
	  exit(1);
	  }
      for (i=0;i<3;i++)
     {fread(&stu[i],sizeof(struct student),1,fp);
     printf("\n%-10s %-8s %4d\n",stu[i].num,stu[i].name,stu[i].score);
	  printf("\n");
	  }
	   fclose(fp);
 }


//*����ѧ�Ų�ѯѧ����Ϣ����*
 void score_search()     
 {
	 int i;
	 char stunum[10];   
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb"); 
	  if(fp==NULL)
	  {printf("�ļ���ʧ��!\n");
	  exit(1);
	  }
      for (i=0;i<3;i++)
        fread(&stu[i],sizeof(struct student),1,fp);
	    fclose(fp);
    printf( "������ѧ�ţ�");
	scanf("%s",stunum);
	for(i=0;i<3;i++)
	{  
	if(strcmp(stu[i].num,stunum)==0)
	{printf("====================================================\n");
	  printf("ѧ��     ����     C����\n");
     printf("====================================================\n");
	  printf("\n%-10s %-8s %4d\n",stu[i].num,stu[i].name,stu[i].score);
	  printf("\n");
	  break;
			}
		}
	if(i==3)
	 printf("��ѧ����Ϣ������");
}


//*�޸ĳɼ�����*
void modify()
	{
     int i;
	 char stunum[10];   
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb+"); 
	  if(fp==NULL)
	  {printf("�ļ���ʧ��!\n");
	  exit(1);
	  }
    for (i=0;i<3;i++)
        fread(&stu[i],sizeof(struct student),1,fp);
	    fclose(fp);
    printf( "������Ҫ�޸ĳɼ���ѧ��ѧ�ţ�");
	scanf("%s",stunum);
	for(i=0;i<3;i++)
	{  
	if(strcmp(stu[i].num,stunum)==0)
	{printf("====================================================\n");
	  printf("ѧ��     ����     C����\n");
      printf("====================================================\n");
	  printf("\n%-10s %-8s %4d\n",stu[i].num,stu[i].name,stu[i].score);
	  printf("\n");
      printf( "�������������ȷ�ɼ���");
	  scanf("%d",&stu[i].score);
	  printf("\n%-10s %-8s %4d\n",stu[i].num,stu[i].name,stu[i].score);
	  printf("\n");
	  break;
	}
	if(i==3)
	 printf("��ѧ����Ϣ������");
}

fp=fopen("E:\\stud.dat","wb");  
   for(i=0;i<3;i++)    //������д���ļ�
     if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
	   printf("�ļ�������� \n");
   fclose(fp);
}



 //*ͳ�Ƽ���������������*
 void loadsum()    
	 { 
	  int i,s1=0,s2=0;
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb"); 
	  if(fp==NULL)
	  {printf("�ļ���ʧ��!\n");
	  exit(1);
	  }
      for (i=0;i<3;i++)
     {fread(&stu[i],sizeof(struct student),1,fp);
	  if(stu[i].score>=60) s1=s1+1;
      if(stu[i].score>=85) s2=s2+1;
	  }
	    fclose(fp);
     printf("��������:%4d\n��������:%4d\n",s1,s2);
	  printf("\n");
	  }


//*���������ѧ���ɼ�����*
 void loadpen1()    
	 { 
	  int i,s1=0,s2=0;
	  FILE *fp;
	  fp=fopen("E:\\stud.dat","rb"); 
	  if(fp==NULL)
	  {printf("�ļ���ʧ��!\n");
	  exit(1);
}

