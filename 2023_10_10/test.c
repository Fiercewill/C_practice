#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#define MAXLEN 10000  //����׳˽�������λ��
int main()
{
    int n, i, j, up, tmp;
    char arr[MAXLEN + 1] = { 1 };  //�ʼarr[0] = 1����1����

    printf("��������Ҫ��n�Ľ׳˵�nֵ��");
    // ����n
    scanf("%d", &n);

    //����    
    //arr[0]�������ĸ�λ��arr[1]��������ʮλ���Դ�����
    for (i = 2; i <= n; i++)
    {
        for (up = 0, j = 0; j <= MAXLEN; j++)
        {
            tmp = arr[j] * i + up; 
            arr[j] = tmp % 10;
            up = tmp / 10;
        }
    }
    // ������  �������
    for (i = MAXLEN; i >= 0; i--)
        if (arr[i] != 0)
            for (i; i >= 0; i--)
                printf("%d", arr[i]);
    return 0;

}

//#define _CRT_SECURE_NO_WARNINGS 1
//
////1-1/4+1/7+1/10������
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	float sum = 0.0f;
//	float a = 0.0f;
//	printf("������n=\n", n);
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++)
//	{
//		a = (float)(1.0f / (float)(1 + 3 * i));
//		sum = pow(-1, i) * a + sum;
//	}
//	printf("��͵Ľ����%f", sum);
//	return 0;
//}