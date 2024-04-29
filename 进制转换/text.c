
#include "decimal conversion.h"
#define _CRT_SECURE_NO_WARNINGS 1 
void menu()
{
	printf("********************************************************\n");
	printf("********************************************************\n");
	printf("********************************************************\n");
	printf("****************  0.十进制转化成二进制   ***************\n");
	printf("****************  1.十进制转化成八进制   ***************\n");
	printf("****************  2.十进制转化成十六进制 ***************\n");
	printf("****************  3.二进制转化成十进制   ***************\n");
	printf("****************  4.二进制转化成八进制   ***************\n");
	printf("****************  5.二进制转化成十六进制 ***************\n");
	printf("****************  6.八进制转化成二进制   ***************\n");
	printf("****************  7.八进制转化成十进制   ***************\n");
	printf("****************  8.八进制转化成十六进制 ***************\n");
	printf("****************  9.十六进制转化成十进制 ***************\n");
	printf("**************** 10.十六进制转化成二进制 ***************\n");
	printf("**************** 11.十六进制转化成八进制 ***************\n");
	printf("********************************************************\n");
	printf("********************************************************\n");
	printf("********************************************************\n");
}
int main()
{
	int input = 0;
	while (1)
	{
		menu();
		printf("请选择:> ");
		scanf_s("%d", &input);
		switch (input)
	    {
		  case 0:
		  {
			  int n = 0;
			  printf("请输入要转换的十进制:> ");
			  scanf("%d", &n);
			  printf("对应的二进制为:> ");
			  fun1(n);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 1:
		  {
			  int n = 0;
			  printf("请输入要转换的十进制:> ");
			  scanf("%d", &n);
			  printf("对应的八进制为:> ");
			  fun2(n);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 2:
		  {
			  int n = 0;
			  printf("请输入要转换的十进制:> ");
			  scanf("%d", &n);
			  printf("对应的十六进制为:> ");
			  fun3(n);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 3:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("请输入要转换的二进制:> ");
			  scanf("%lld", &n);
			  int ret=fun4(n, y);
              printf("对应的十进制为:> %d",ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 4:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("请输入要转换的二进制:> ");
			  scanf("%lld", &n);
			  int ret = fun4(n, y);
			  printf("对应的八进制为:> ");
			  fun2(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 5:
		  {
			  long long n = 0;
			  int y1 = 0;
			  printf("请输入要转换的二进制:> ");
			  scanf("%lld", &n);
			  int ret = fun4(n, y1);
			  printf("对应的十六进制为:> ");
			  fun3(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 6:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("请输入要转换的八进制:> ");
			  scanf("%lld", &n);
			  int ret = fun5(n, y);
			  printf("对应的二进制为:> ");
			  fun1(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 7:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("请输入要转换的八进制:> ");
			  scanf("%lld", &n);
			  int ret = fun5(n, y);
			  printf("对应的十进制为:> %d", ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 8:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("请输入要转换的八进制:> ");
			  scanf("%lld", &n);
			  int ret = fun5(n, y);
			  printf("对应的十六进制为:> ");
			  fun3(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 9:
		  {
			  char arr[100] = { 0 };
			  printf("请输入要转换的十六进制:> ");
			  scanf("%s", arr);
			  int sz = strlen(arr);
			  int ret=fun6(arr, sz);
              printf("对应的十进制为:> %d",ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 10:
		  {
			  char arr[100] = { 0 };
			  printf("请输入要转换的十六进制:> ");
			  scanf("%s", arr);
			  int sz = strlen(arr);
			  int ret = fun6(arr, sz);
			  printf("对应的二进制为:> ");
			  fun1(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 11:
		  {
			  char arr[100] = { 0 };
			  printf("请输入要转换的十六进制:> ");
			  scanf("%s", arr);
			  int sz = strlen(arr);
			  int ret = fun6(arr, sz);
			  printf("对应的八进制为:> ");
			  fun2(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  default:
		  {
			  printf("选择错误，重新选择\n");
		  }

		
		}
	}
	return 0;
}