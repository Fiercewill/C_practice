#define _CRT_SECURE_NO_WARNINGS 1

//�Ӽ���������һ���ַ�������Сд��ĸ��ɴ�д��ĸ��
#include <stdio.h>
#include <ctype.h >
#include <string.h>
#define strmax 100
//int main()
//{
//	char str[strmax];
//	int i = 0;
//
//	printf("������һ���ַ���\n");
//	gets(str,sizeof(str),stdin);
//
//	//while (str[i] != '\0')
//	//{
//	//	if (islower(str[i]))
//	//	{
//	//		str[i] = toupper(str[i]);
//	//	}
//	//	i++;
//	//}
//
//	//��һ����ѯ��ʽ
//	int length = strlen(str);
//	for (i = 0; i < length; i++)
//	{
//		if (islower(str[i]))
//			str[i] = str[i] - 32;
//	}
//
//
//	printf("%s",str);
//	return 0;
//}
// 
//�Ӽ���������һ���ַ��������ַ����е�abcɾ����
int main()
{
	char str[strmax];
	int i = 0;
	int j = 0;
	printf("������һ���ַ���\n");
	gets(str,sizeof(str),stdin);

	//while (str[i] != '\0')
	//{
	//	if(str[i] != 'a' && str[i] != 'b' && str[i] != 'c')
	//	{
	//		str[j] = str[i];
	//		j++;
	//	}
	//	i++;
	//}
	//str[j] = '\0';
	while (str[i] != '\0')
	{
		if(str[i] == 'a' && str[i+1] == 'b' && str[i+2] == 'c')
		{
			i += 3;
		}
		else
		{
			str[j] = str[i]; //��ֵ�Ŷ�j�����Լ�
			j++;
			i++;
		}
	}
	str[j] = '\0';
	printf("%s", str);
	return 0;
}