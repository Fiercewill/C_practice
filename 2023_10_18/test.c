#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
int main()
{
	int num[100] = {0};
	int i = 0;
	while (1)
	{
		for (i = 0; i < 100; i++)
		{
			if (num[i] > 10)
			{
				printf("%s", num[i] % 2 ? "电子一班":"天天开心");
			}
			else printf(" ");
			if (num[i]-- < 0)
				num[i] = rand() % 20;
		}
		system("color 2     ");
		Sleep(100);
	}
	return 0;
}
