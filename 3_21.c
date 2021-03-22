#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1,void* e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;

}
int main()
{

}