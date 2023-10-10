#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#define MAXLEN 10000  //定义阶乘结果的最大位数
int main()
{
    int n, i, j, up, tmp;
    char arr[MAXLEN + 1] = { 1 };  //最开始arr[0] = 1，用1来乘

    printf("请输入你要求n的阶乘的n值：");
    // 输入n
    scanf("%d", &n);

    //计算    
    //arr[0]保存结果的个位，arr[1]保存结果的十位，以此类推
    for (i = 2; i <= n; i++)
    {
        for (up = 0, j = 0; j <= MAXLEN; j++)
        {
            tmp = arr[j] * i + up; 
            arr[j] = tmp % 10;
            up = tmp / 10;
        }
    }
    // 输出结果  逆序输出
    for (i = MAXLEN; i >= 0; i--)
        if (arr[i] != 0)
            for (i; i >= 0; i--)
                printf("%d", arr[i]);
    return 0;

}

//#define _CRT_SECURE_NO_WARNINGS 1
//
////1-1/4+1/7+1/10。。。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	float sum = 0.0f;
//	float a = 0.0f;
//	printf("请输入n=\n", n);
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++)
//	{
//		a = (float)(1.0f / (float)(1 + 3 * i));
//		sum = pow(-1, i) * a + sum;
//	}
//	printf("求和的结果是%f", sum);
//	return 0;
//}