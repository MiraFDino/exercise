#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void jug(char *a)
//{
//	if (*a == 1)
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;//大端
//	}
//}
//int main()
//{
//	int a = 1;
//	jug(&a);
//	printf("小端");
//
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret = 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

int main()
{
	char a = -1;
	printf("%d", a);
	return 0;
}