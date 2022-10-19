#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 100;
//	printf("%d\n", *p);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "1234567";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;
//	printf("%p", p);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int data1[] = { 1,2,3,4 };
//	int data2[] = { 2,3,4,5 };
//	int data3[] = { 3,4,5,6 };
//	int* arr[3] = { data1,data2,data3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(arr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

