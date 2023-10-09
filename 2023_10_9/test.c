#define _CRT_SECURE_NO_WARNINGS 1

//1-1/4+1/7+1/10。。。
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int n = 0;
//	float sum = 0.0f;
//	float a = 0.0f;
//	printf("请输入n=\n",n);
//	scanf("%d",&n);
//	for (int i = 0; i <= n; i++)
//	{
//		a = (float)(1.0f / (float)(1 + 3 * i));
//		sum = pow(-1,i)* a + sum;
//	}
//	printf("求和的结果是%f",sum);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#define MAXLEN 10000
//int main()
//{
//    int i, up, tmp;
//    char buffer[MAXLEN + 1] = { 0 }, a[MAXLEN + 1] = { 0 }, b[MAXLEN + 1] = { 0 };
//
//    //逆序输入a
//    scanf("%s", buffer);
//    for (tmp = 0, i = strlen(buffer) - 1; i >= 0; i--)
//        a[tmp++] = buffer[i] - '0';  // 转换成对应ASCII码里面，就是对应的十进制的数字
//
//        //逆序输入b
//    scanf("%s", buffer);
//    for (tmp = 0, i = strlen(buffer) - 1; i >= 0; i--)
//        b[tmp++] = buffer[i] - '0'; // 转换成对应ASCII码里面，就是对应的十进制的数字
//
//    if (a[0] == 0 && b[0] == 0) // 这是加数都为零的情况
//    {
//        printf("0");
//        return 0;
//    }
//
//    //计算
//    for (up = 0, i = 0; i < MAXLEN; i++)
//    {
//        tmp = a[i] + b[i] + up; // 暂时存储数值
//        a[i] = tmp % 10;
//        up = tmp / 10; // 进位
//    }
//
//    // 输出结果
//    for (i = MAXLEN; i >= 0; i--)
//    {
//        if (a[i] != 0)
//        {
//            for (i; i >= 0; i--)
//            {
//                printf("%d", a[i]);
//            }
//            break;
//        }
//    }
//    return 0;
//}
//
// 
//这样将字符数组的每个元素转化为整数打印出来
//int main()
//{
//	char a[10] = {0};
//	int  b[10] = { 0 };
//	int i,tmp;
//	scanf("%s",a);
//	    for (tmp = 0, i = strlen(a) - 1; i >= 0; i--)
//	        b[tmp++] = a[i] - '0';  // 转换成对应ASCII码里面，就是对应的十进制的数字
//	printf("%d",b[1]);
//	return 0;
//}
//int main()
//{
//    int i = 0,tmp = 0;
//    char a[11] = { 0 };
//    char b[11] = { 0 };
//    scanf("%s",a);
//    for (tmp = 0, i = strlen(a) - 1; i >= 0; i--)
//        b[tmp++] = a[i] - '0';  // 转换成对应ASCII码里面，就是对应的十进制的数字
//    // 输出结果
//
//
//    for (i = 10; i >= 0; i--) //如果从i =10开始遍历的话，定义数组时要定义到大小为11，负责遍历到没有定义的元素，数组会溢出
//    {
//        if (b[i] != 0) 
//        {
//            for (i; i >= 0; i--)
//            {
//                printf("%d", b[i]);
//            }
//            //用不着break，到这的时候i已经等于0了
//           // break;
//        }
//    }
//
//	return 0;
//}

//整型数组不能用数组名打印，只有字符数组才能用数组名打印,整型数组只能一个一个数组元素打印
//int main()
//{
//	int a[10] = {1,2,3,4,5};
//	printf("%d",a);
//	return 0;
//}
//int main()
//{
//	char a[10] = "12345";
//	printf("%s",a);
//	return 0;
//}

//这样搭配的
//tmp = 0, i = strlen(buffer) - 1;
//tmp = 1, i = strlen(buffer);
//
//#define MAXLEN 10000
//int main()
//{
//	char len1 = 0, len2 = 0,len = 0;
//	char str1[MAXLEN] = { 0 };
//	char str2[MAXLEN] = { 0 };
//	int a[MAXLEN] = { 0 };
//	int b[MAXLEN] = { 0 };
//	int result[] = { 0 };
//	int tmp = 0; //临时变量
//	int i = 0; // 遍历
//	int up = 0; // 进位
//	scanf("%s",str1);
//	len1 = strlen(str1);
//	for (i = len1 - 1; i >= 0; i--)
//	{
//		a[tmp++] = str1[i] - '0'; //逆序读入第一个数
//	}
//
//	scanf("%s", str2);
//	len2 = strlen(str2);
//	len = len1 > len2 ? len1:len2;
//	tmp = 0;
//	for (i = len2 - 1; i >= 0; i--) //记得对 tmp = 0清零
//	{
//		b[tmp++] = str2[i] - '0'; //逆序读入第二个数
//	}
//
//	//    //计算  数组的第一位，即两个数的个位 初始进位值up = 0 计算出来应该要逆向输出 这是一个计算的好法子
//    for (up = 0, i = 0; i <= len; i++)
//    {
//        tmp = a[i] + b[i] + up; // 暂时存储数值
//        result[i] = tmp % 10;
//        up = tmp / 10; // 进位
//    }
//
//
//	/*for (i = 0;i < sizeof(result)/sizeof(result[0]) ; i++)
//	{
//		printf("%d", result[i]);
//	}*/
//
//
//	return 0;
//}

////这样是打印不出来1234的
//int main()
//{
//    int i = 0, tmp = 0;
//    char a[] = "1234";
//    char b[11] = { 0 };
//    //scanf("%s", a);
//    //for (i = strlen(a) - 1; i >= 0; i--)
//    //{
//    //    printf("%d",a[i]);
//    //}
//    printf("%d", strlen(a));
//    return 0;
//}
//int main()
//{
//    int i = 0, tmp = 0;
//    char a[11] = { 0 }; //如果从i =10开始遍历的话，定义数组时要定义到大小为11，负责遍历到没有定义的元素，数组会溢出
//    char b[11] = { 0 };
//    scanf("%s", a);
//
//    //逆序输入b
//    for (tmp = 0, i = strlen(a) - 1; i >= 0; i--)
//        b[tmp++] = a[i] - '0';  // ASCII码里面字符数字转化为对应的十进制的数字，可以用%d打印数字
//
//    // 输出结果
//    for (i = 10; i >= 0; i--) //如果从i =10开始遍历的话，定义数组时要定义到大小为11，负责遍历到没有定义的元素，数组会溢出
//    {
//        if (b[i] != 0)
//        {
//            for (i; i >= 0; i--)
//            {
//                printf("%d", b[i]);
//            }
//            //这里用不着break，到这的时候i已经等于0了，执行到这以后，i=0;在执行大for循环地i--后，不再满足大for循环的条件，直接退出循环
//           // break;
//        }
//    }
//
//    return 0;
//}
#include<stdio.h>
#include<string.h>
#define MAXLEN 10000
int main()
{
    int i, up, tmp;
    char buffer[MAXLEN + 1] = { 0 }, a[MAXLEN + 1] = { 0 }, b[MAXLEN + 1] = { 0 };

    //逆序输入a
    scanf("%s", buffer);
    for (tmp = 0, i = strlen(buffer) - 1; i >= 0; i--)
        a[tmp++] = buffer[i] - '0';  // ASCII码里面字符数字转化为对应的十进制的数字，可以用%d打印数字

        //逆序输入b
    scanf("%s", buffer);
    for (tmp = 0, i = strlen(buffer) - 1; i >= 0; i--)
        b[tmp++] = buffer[i] - '0'; // ASCII码里面字符数字转化为对应的十进制的数字，可以用%d打印数字

    if (a[0] == 0 && b[0] == 0) // 这是加数都为零的情况
    {
        printf("0");
        return 0;
    }

    //计算
    for (up = 0, i = 0; i < MAXLEN; i++)
    {
        tmp = a[i] + b[i] + up; // 暂时存储数值
        a[i] = tmp % 10;
        up = tmp / 10; // 进位
    }

    // 输出结果
    for (i = MAXLEN; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            for (i; i >= 0; i--)
            {
                printf("%d", a[i]);
            }
            break;
        }
    }
    return 0;
}