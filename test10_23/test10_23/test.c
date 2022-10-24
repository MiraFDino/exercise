#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*p)[5] = &arr;
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int(*p)[10] = &arr;
//	printf("%d\n", *(*p));
//	printf("%d", *arr);
//	return 0;
//}


//void print1(int(*p)[5],int c, int r)
//{
//	int i = 0;
//	for (i = 0; i < c; i++)
//	{
//		int j = 0;
//		for (j = 0; j < r; j++)
//		{
//			printf("%d ", *(*(p + i)) + j);
//			//printf("%d ",p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}












