#define _CRT_SECURE_NO_WARNINGS 1
//void (*signal(int, void(*)(int)))(int);
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 9;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}


//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int main()//����ָ������
//{
//
//	int* arr[3];
//	int (*parr[3])(int, int) = { add,sub,mul };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
//�÷�



//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfarr[3])(int, int) = { 0,add,sub,nul };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && intput <= 5)
//		{
//
//		}
//		printf("������������������>");
//		scanf("%d%d", &x, &y);
//		int ret = pfarr[intput](x,y);//ת�Ʊ�
//
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", add(x, y));
//			break;
//		}
//	}
//}
v/*oid calc(int(*pf)(int, int))
{

}*/
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*pa)(int, int);//����ָ��
//	int(*pfarr[4])(int, int);//����ָ�� ����
//	int(*(*ppfarr)[4])(int, int);//����ָ������ ��ָ��
//	return 0;
//}


//�ص�����
//void print(char* str)
//{
//	printf("hehe  %s\n", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//
//}
//
//qsort-����������������


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int cmp_int(const void* e1,const void* e2)
{
	//�Ƚ�������������

}

int main()
{

	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);	
}

