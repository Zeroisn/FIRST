
#include "decimal conversion.h"
#define _CRT_SECURE_NO_WARNINGS 1 
void menu()
{
	printf("********************************************************\n");
	printf("********************************************************\n");
	printf("********************************************************\n");
	printf("****************  0.ʮ����ת���ɶ�����   ***************\n");
	printf("****************  1.ʮ����ת���ɰ˽���   ***************\n");
	printf("****************  2.ʮ����ת����ʮ������ ***************\n");
	printf("****************  3.������ת����ʮ����   ***************\n");
	printf("****************  4.������ת���ɰ˽���   ***************\n");
	printf("****************  5.������ת����ʮ������ ***************\n");
	printf("****************  6.�˽���ת���ɶ�����   ***************\n");
	printf("****************  7.�˽���ת����ʮ����   ***************\n");
	printf("****************  8.�˽���ת����ʮ������ ***************\n");
	printf("****************  9.ʮ������ת����ʮ���� ***************\n");
	printf("**************** 10.ʮ������ת���ɶ����� ***************\n");
	printf("**************** 11.ʮ������ת���ɰ˽��� ***************\n");
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
		printf("��ѡ��:> ");
		scanf_s("%d", &input);
		switch (input)
	    {
		  case 0:
		  {
			  int n = 0;
			  printf("������Ҫת����ʮ����:> ");
			  scanf("%d", &n);
			  printf("��Ӧ�Ķ�����Ϊ:> ");
			  fun1(n);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 1:
		  {
			  int n = 0;
			  printf("������Ҫת����ʮ����:> ");
			  scanf("%d", &n);
			  printf("��Ӧ�İ˽���Ϊ:> ");
			  fun2(n);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 2:
		  {
			  int n = 0;
			  printf("������Ҫת����ʮ����:> ");
			  scanf("%d", &n);
			  printf("��Ӧ��ʮ������Ϊ:> ");
			  fun3(n);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 3:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("������Ҫת���Ķ�����:> ");
			  scanf("%lld", &n);
			  int ret=fun4(n, y);
              printf("��Ӧ��ʮ����Ϊ:> %d",ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 4:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("������Ҫת���Ķ�����:> ");
			  scanf("%lld", &n);
			  int ret = fun4(n, y);
			  printf("��Ӧ�İ˽���Ϊ:> ");
			  fun2(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 5:
		  {
			  long long n = 0;
			  int y1 = 0;
			  printf("������Ҫת���Ķ�����:> ");
			  scanf("%lld", &n);
			  int ret = fun4(n, y1);
			  printf("��Ӧ��ʮ������Ϊ:> ");
			  fun3(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 6:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("������Ҫת���İ˽���:> ");
			  scanf("%lld", &n);
			  int ret = fun5(n, y);
			  printf("��Ӧ�Ķ�����Ϊ:> ");
			  fun1(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 7:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("������Ҫת���İ˽���:> ");
			  scanf("%lld", &n);
			  int ret = fun5(n, y);
			  printf("��Ӧ��ʮ����Ϊ:> %d", ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 8:
		  {
			  long long n = 0;
			  int y = 0;
			  printf("������Ҫת���İ˽���:> ");
			  scanf("%lld", &n);
			  int ret = fun5(n, y);
			  printf("��Ӧ��ʮ������Ϊ:> ");
			  fun3(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 9:
		  {
			  char arr[100] = { 0 };
			  printf("������Ҫת����ʮ������:> ");
			  scanf("%s", arr);
			  int sz = strlen(arr);
			  int ret=fun6(arr, sz);
              printf("��Ӧ��ʮ����Ϊ:> %d",ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 10:
		  {
			  char arr[100] = { 0 };
			  printf("������Ҫת����ʮ������:> ");
			  scanf("%s", arr);
			  int sz = strlen(arr);
			  int ret = fun6(arr, sz);
			  printf("��Ӧ�Ķ�����Ϊ:> ");
			  fun1(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  case 11:
		  {
			  char arr[100] = { 0 };
			  printf("������Ҫת����ʮ������:> ");
			  scanf("%s", arr);
			  int sz = strlen(arr);
			  int ret = fun6(arr, sz);
			  printf("��Ӧ�İ˽���Ϊ:> ");
			  fun2(ret);
			  printf("\n");
			  printf("\n");
			  break;
		  }
		  default:
		  {
			  printf("ѡ���������ѡ��\n");
		  }

		
		}
	}
	return 0;
}