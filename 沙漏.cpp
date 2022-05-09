

#include <stdio.h>

int main()
{
	int a,i,n,m;
	printf("请输入一个奇数\n");
	scanf_s("%d", &a);
	for (i = 1; i <= (a + 1)/2; ++i)
	{
		for (m = 1; m <= i - 1; ++m)
		{
			printf(" ");
		}
		for (n = 1; n <= a - 2 * (i - 1); ++n)
		{
			printf("*");
		}
		printf("\n");
	}//上半部分
	for (i = 1; i <= (a + 1) / 2 - 1; ++i)
	{
		for (m = 1; m <=(a-1)/2-i; ++m)
		{
			printf(" ");
		}
		for (n = 1; n <= 2 * i + 1; ++n)
		{
			printf("*");
		}
		printf("\n");
	}//下半部分
}


