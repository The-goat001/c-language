#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



int main()
{
	int arr[] = { 1,2,4,5,6,7,8,9,10 };
	int k = 6;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while(left<=right)//
	{

		int mid = (left + right) / 2;//�м�Ԫ��
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}


	


	return 0;
}