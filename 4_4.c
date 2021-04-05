#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAXSIZE 100//�����λ100
#define MAXCHARA 10//�ַ���󳤶�
enum S
{
	end,//����
	buil,//����
	add,//����
	delete,//ɾ��
	display,//��ʾ
	lookup,//����
	Lsize,//���


};

struct Table//����
{
	char chara[MAXCHARA];

};

struct sqlist//��ű��ṹ��
{
	struct Table data[MAXSIZE];
	int length;//��

};

void InitLisp(struct sqlist* L)//��ʼ��
{
	memset(L->data, 0, sizeof(L->data));
	L->length = 0;// ��λ0
}

void AddList(struct sqlist* L)// ���
{
	if (L->length == MAXSIZE)
	{
		printf("˳�������\n");
	}
	else
	{
		printf("�������ַ�\n");
		scanf("%s", L->data[L->length].chara);
	}
	L->length++;
	printf("��ӳɹ���\n");
}

void ShowList(const struct sqlist* L)//��ʾ
{
	if (L->length == 0)
	{
		printf("��Ϊ��\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < L->length; i++)
		{
			printf("�ַ�%dΪ%s\n",i+1,L->data[i].chara);
		}
	}
}
void  LengthList(struct sqlist* L)//�����
{
	if (NULL == L)
	{
		printf("��Ϊ0\n");
	}
	else
	{
		printf("��Ϊ%d\n", L->length);
	}
}

void DeleteList(struct sqlist* L)//ɾ��ָ���ַ�
{
	char a[MAXCHARA];
	printf("������Ҫɾ�����ַ���>\n");
	scanf("%s", a);
	int pos=(FindBychara(L, a));//Ѱ��Ŀ���ַ� �ҵ������±� �Ҳ�������-1
	if (pos==-1)
	{
		printf("Ҫɾ�����ַ�������\n");
	}
	else//ɾ���ַ�
	{
		int j = 0;
		for (j = pos; j <L->length-1;j++ )
		{
			L->data[j] = L->data[j + 1];
		}
		L->length--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchList(struct sqlist* L)//����ָ���ַ�
{
	char a[MAXCHARA];
	printf("������Ҫ���ҵ��ַ�\n");
	scanf("%s", a);
	int pos = FindBychara(L, a);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��ַ�������\n");
	}
	else
	{
		printf("�ַ��ڵ�%dλ\n", pos + 1);
	}

}

static int FindBychara(struct sqlist* L, char a[MAXCHARA])//��������
{
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		if (0 == strcmp(L->data[i].chara, a))
		{
			return i;
		}
	}
	return -1;//�Ҳ��������
}




void menu()//�˵�
{
	printf("***** 1-���� *********** 2-���� ************\n");
	printf("***** 3-ɾ�� *********** 4-��ʾ ************\n");
	printf("***** 5-���� *********** 6-��� **********\n");
	printf("**********       0-����   ******************\n");
	
}

int main()
{
	int input = 0;

	do
	{
		menu();//�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case buil:
			struct sqlist ps;
			InitLisp(&ps);
			printf("����ɹ���\n");
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
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}