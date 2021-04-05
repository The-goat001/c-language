#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAXSIZE 100//表长最大位100
#define MAXCHARA 10//字符最大长度
enum S
{
	end,//结束
	buil,//建表
	add,//插入
	delete,//删除
	display,//显示
	lookup,//查找
	Lsize,//求表长


};

struct Table//建表
{
	char chara[MAXCHARA];

};

struct sqlist//存放表长结构体
{
	struct Table data[MAXSIZE];
	int length;//表长

};

void InitLisp(struct sqlist* L)//初始化
{
	memset(L->data, 0, sizeof(L->data));
	L->length = 0;// 表长位0
}

void AddList(struct sqlist* L)// 添加
{
	if (L->length == MAXSIZE)
	{
		printf("顺序表已满\n");
	}
	else
	{
		printf("请输入字符\n");
		scanf("%s", L->data[L->length].chara);
	}
	L->length++;
	printf("添加成功！\n");
}

void ShowList(const struct sqlist* L)//显示
{
	if (L->length == 0)
	{
		printf("表为空\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < L->length; i++)
		{
			printf("字符%d为%s\n",i+1,L->data[i].chara);
		}
	}
}
void  LengthList(struct sqlist* L)//计算表长
{
	if (NULL == L)
	{
		printf("表长为0\n");
	}
	else
	{
		printf("表长为%d\n", L->length);
	}
}

void DeleteList(struct sqlist* L)//删除指定字符
{
	char a[MAXCHARA];
	printf("请输入要删除的字符：>\n");
	scanf("%s", a);
	int pos=(FindBychara(L, a));//寻找目标字符 找到返回下标 找不到返回-1
	if (pos==-1)
	{
		printf("要删除的字符不存在\n");
	}
	else//删除字符
	{
		int j = 0;
		for (j = pos; j <L->length-1;j++ )
		{
			L->data[j] = L->data[j + 1];
		}
		L->length--;
		printf("删除成功\n");
	}
}

void SearchList(struct sqlist* L)//查找指定字符
{
	char a[MAXCHARA];
	printf("请输入要查找的字符\n");
	scanf("%s", a);
	int pos = FindBychara(L, a);
	if (pos == -1)
	{
		printf("要查找的字符不存在\n");
	}
	else
	{
		printf("字符在第%d位\n", pos + 1);
	}

}

static int FindBychara(struct sqlist* L, char a[MAXCHARA])//遍历查找
{
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		if (0 == strcmp(L->data[i].chara, a))
		{
			return i;
		}
	}
	return -1;//找不到的情况
}




void menu()//菜单
{
	printf("***** 1-建表 *********** 2-插入 ************\n");
	printf("***** 3-删除 *********** 4-显示 ************\n");
	printf("***** 5-查找 *********** 6-求表长 **********\n");
	printf("**********       0-返回   ******************\n");
	
}

int main()
{
	int input = 0;

	do
	{
		menu();//菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case buil:
			struct sqlist ps;
			InitLisp(&ps);
			printf("建表成功！\n");
			break;
		case add:
			AddList(&ps);
			break;
		case delete:
			DeleteList(&ps);
			break;
		case display:
			ShowList(&ps);
			break;
		case lookup:
			SearchList(&ps);
			break;
		case Lsize:
			LengthList(&ps);
			break;
		case end:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}