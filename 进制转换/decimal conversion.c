#include "decimal conversion.h"
void fun1(int n)
{
	if (n != 0)
	{
		fun1(n / 2);
		int ret = n % 2;
		printf("%d", ret);
	}
}
void fun2(int n)
{
	if (n != 0)
	{
		fun2(n / 8);
		int ret = n % 8;
		printf("%d", ret);
	}
}
void fun3(int n)
{
	if (n != 0)
	{
		fun3(n / 16);
		int ret = 0;
		char ch = 0;
		int i = 0;
		if (n % 16 >= 10)
		{
			for (i = 0;i <= 5;i++)
			{
				if (n % 16 == 10 + i)
				{
					ch = ('A' + i);
					printf("%c", ch);
				}
			}
		}
		else
		{
			ret = n % 16;
			printf("%d", ret);
		}
	}
}
int fun4(long long n, int y)
{
	int x = 2;
	if (n != 0)
	{
		y++;
		return fun4(n / 10, y) + (n % 10) * pow(x, y - 1);
	}
	else
		return 0;
}
int fun5(long long n, int y1)
{
	int x = 8;
	if (n != 0)
	{
		y1++;
		return fun5(n / 10, y1) + (n % 10) * pow(x, y1 - 1);
	}
	else
		return 0;
}
int  fun6(char arr[], int sz)
{
	int ret = 0;
	int i = 0;
	int x = 16;
	for (i = 0;i <sz;i++)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			ret = ret + (arr[i] - '0') * pow(x, sz - i-1);
		}
		if (arr[i] >= 'A' && arr[i] <= 'F')
		{
			ret = ret + ((arr[i] - 'A')+10) * pow(x, sz - i-1);
		}
	}
	return ret;
}