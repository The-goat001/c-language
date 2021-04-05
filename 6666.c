#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//void my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;	
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//void* my_memove(void* dest, void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = ((char*)src + count);
//		}
//	}
//	return ret;
//
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//	//memset-内存设置
//}


//int main()
//{/*
//	int arr1[] = { 1,2,3,4,5 }; 
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	my_memmove(arr+2,arr,20);//处理内存重叠
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;


//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
// };
//typedef struct	node
//{
//	int data;
//	struct node* next;
//}node;
//
//int main()
//
//{
//	
//
//	return 0;
//}
//
//


struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;

};
int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//结构体内存对齐
	return 0;
}
