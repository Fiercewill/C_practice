#define _CRT_SECURE_NO_WARNINGS 1

//1-1/4+1/7+1/10������
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int n = 0;
//	float sum = 0.0f;
//	float a = 0.0f;
//	printf("������n=\n",n);
//	scanf("%d",&n);
//	for (int i = 0; i <= n; i++)
//	{
//		a = (float)(1.0f / (float)(1 + 3 * i));
//		sum = pow(-1,i)* a + sum;
//	}
//	printf("��͵Ľ����%f",sum);
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
//    //��������a
//    scanf("%s", buffer);
//    for (tmp = 0, i = strlen(buffer) - 1; i >= 0; i--)
//        a[tmp++] = buffer[i] - '0';  // ת���ɶ�ӦASCII�����棬���Ƕ�Ӧ��ʮ���Ƶ�����
//
//        //��������b
//    scanf("%s", buffer);
//    for (tmp = 0, i = strlen(buffer) - 1; i >= 0; i--)
//        b[tmp++] = buffer[i] - '0'; // ת���ɶ�ӦASCII�����棬���Ƕ�Ӧ��ʮ���Ƶ�����
//
//    if (a[0] == 0 && b[0] == 0) // ���Ǽ�����Ϊ������
//    {
//        printf("0");
//        return 0;
//    }
//
//    //����
//    for (up = 0, i = 0; i < MAXLEN; i++)
//    {
//        tmp = a[i] + b[i] + up; // ��ʱ�洢��ֵ
//        a[i] = tmp % 10;
//        up = tmp / 10; // ��λ
//    }
//
//    // ������
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
//�������ַ������ÿ��Ԫ��ת��Ϊ������ӡ����
//int main()
//{
//	char a[10] = {0};
//	int  b[10] = { 0 };
//	int i,tmp;
//	scanf("%s",a);
//	    for (tmp = 0, i = strlen(a) - 1; i >= 0; i--)
//	        b[tmp++] = a[i] - '0';  // ת���ɶ�ӦASCII�����棬���Ƕ�Ӧ��ʮ���Ƶ�����
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
//        b[tmp++] = a[i] - '0';  // ת���ɶ�ӦASCII�����棬���Ƕ�Ӧ��ʮ���Ƶ�����
//    // ������
//
//
//    for (i = 10; i >= 0; i--) //�����i =10��ʼ�����Ļ�����������ʱҪ���嵽��СΪ11�����������û�ж����Ԫ�أ���������
//    {
//        if (b[i] != 0) 
//        {
//            for (i; i >= 0; i--)
//            {
//                printf("%d", b[i]);
//            }
//            //�ò���break�������ʱ��i�Ѿ�����0��
//           // break;
//        }
//    }
//
//	return 0;
//}

//�������鲻������������ӡ��ֻ���ַ������������������ӡ,��������ֻ��һ��һ������Ԫ�ش�ӡ
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

//���������
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
//	int tmp = 0; //��ʱ����
//	int i = 0; // ����
//	int up = 0; // ��λ
//	scanf("%s",str1);
//	len1 = strlen(str1);
//	for (i = len1 - 1; i >= 0; i--)
//	{
//		a[tmp++] = str1[i] - '0'; //��������һ����
//	}
//
//	scanf("%s", str2);
//	len2 = strlen(str2);
//	len = len1 > len2 ? len1:len2;
//	tmp = 0;
//	for (i = len2 - 1; i >= 0; i--) //�ǵö� tmp = 0����
//	{
//		b[tmp++] = str2[i] - '0'; //�������ڶ�����
//	}
//
//	//    //����  ����ĵ�һλ�����������ĸ�λ ��ʼ��λֵup = 0 �������Ӧ��Ҫ������� ����һ������ĺ÷���
//    for (up = 0, i = 0; i <= len; i++)
//    {
//        tmp = a[i] + b[i] + up; // ��ʱ�洢��ֵ
//        result[i] = tmp % 10;
//        up = tmp / 10; // ��λ
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

////�����Ǵ�ӡ������1234��
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
//    char a[11] = { 0 }; //�����i =10��ʼ�����Ļ�����������ʱҪ���嵽��СΪ11�����������û�ж����Ԫ�أ���������
//    char b[11] = { 0 };
//    scanf("%s", a);
//
//    //��������b
//    for (tmp = 0, i = strlen(a) - 1; i >= 0; i--)
//        b[tmp++] = a[i] - '0';  // ASCII�������ַ�����ת��Ϊ��Ӧ��ʮ���Ƶ����֣�������%d��ӡ����
//
//    // ������
//    for (i = 10; i >= 0; i--) //�����i =10��ʼ�����Ļ�����������ʱҪ���嵽��СΪ11�����������û�ж����Ԫ�أ���������
//    {
//        if (b[i] != 0)
//        {
//            for (i; i >= 0; i--)
//            {
//                printf("%d", b[i]);
//            }
//            //�����ò���break�������ʱ��i�Ѿ�����0�ˣ�ִ�е����Ժ�i=0;��ִ�д�forѭ����i--�󣬲��������forѭ����������ֱ���˳�ѭ��
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

    //��������a
    scanf("%s", buffer);
    for (tmp = 0, i = strlen(buffer) - 1; i >= 0; i--)
        a[tmp++] = buffer[i] - '0';  // ASCII�������ַ�����ת��Ϊ��Ӧ��ʮ���Ƶ����֣�������%d��ӡ����

        //��������b
    scanf("%s", buffer);
    for (tmp = 0, i = strlen(buffer) - 1; i >= 0; i--)
        b[tmp++] = buffer[i] - '0'; // ASCII�������ַ�����ת��Ϊ��Ӧ��ʮ���Ƶ����֣�������%d��ӡ����

    if (a[0] == 0 && b[0] == 0) // ���Ǽ�����Ϊ������
    {
        printf("0");
        return 0;
    }

    //����
    for (up = 0, i = 0; i < MAXLEN; i++)
    {
        tmp = a[i] + b[i] + up; // ��ʱ�洢��ֵ
        a[i] = tmp % 10;
        up = tmp / 10; // ��λ
    }

    // ������
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