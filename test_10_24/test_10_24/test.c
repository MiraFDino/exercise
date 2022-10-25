#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test(int* ptr)
//{
//
//}
//int main()
//{
//	int a = 10;
//	test(&a);
//	int* p = &a;
//	test(p);
//	int arr[] = { 0 };
//	test(arr);
//	return 0;
//}


//void test(char **ptr)
//{
//
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	test(&pc);
//	char** ppc = &pc;
//	test(ppc);
//	char* arr[10];
//	test(arr);
//	return 0;
//}

//void test(int(*p)[3][5])
//{
//
//}
//int main()
//{
//	int arr[3][5];
//	test(&arr);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p)(int, int) = Add;
//	int ret = (*p)(3, 4);
//	printf("%d ", ret);
//	return 0;
//}

//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//int main()
//{
//	int (*p1)(int, int) = Add;
//	int (*p2)(int, int) = Sub;
//	int (*p3)(int, int) = Mul;
//	int (*p4)(int, int) = Div;
//	int(*pf[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pf[i](8, 2);
//		printf("%d ", ret);
//	}
//	return 0;
//}

//函数指针数组实现简易计算器
//void menu()
//{
//	printf("**********************\n");
//	printf("**** 1.Add  2.Sub ****\n");
//	printf("**** 3.Mul  4.Div ****\n");
//	printf("**** 0.exit       ****\n");
//	printf("**********************\n");
//}
//
//
//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			
//			printf("请输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			int ret = pf[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input != 0);
//	return 0;
//}

//void prt()
//{
//	printf("abcdef");
//}
//void clac(void(*p)())
//{
//	if (1)
//		p();
//}
//int main()
//{
//	clac(prt);
//	return 0;
//}


//回调函数实现
//void menu()
//{
//	printf("**********************\n");
//	printf("**** 1.Add  2.Sub ****\n");
//	printf("**** 3.Mul  4.Div ****\n");
//	printf("**** 0.exit       ****\n");
//	printf("**********************\n");
//}
//
//
//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//
//calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数\n");
//	scanf("%d%d", &x, &y);
//	int ret = p(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:calc(Add); break;
//		case 2:calc(Sub); break;
//		case 3:calc(Mul); break;
//		case 4:calc(Div); break;
//		}
//	} while (input);
//	return 0;
//}

















