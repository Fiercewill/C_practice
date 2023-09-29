#define _CRT_SECURE_NO_WARNINGS 1

//从键盘上输入一个字符串，将小写字母变成大写字母。
#include <stdio.h>
#include <ctype.h >
#include <string.h>
#define strmax 100
//int main()
//{
//	char str[strmax];
//	int i = 0;
//
//	printf("请输入一段字符：\n");
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
//	//换一种轮询方式
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
//从键盘上输入一个字符串，将字符串中的abc删除。
int main()
{
	char str[strmax];
	int i = 0;
	int j = 0;
	printf("请输入一段字符：\n");
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
			str[j] = str[i]; //赋值才对j进行自加
			j++;
			i++;
		}
	}
	str[j] = '\0';
	printf("%s", str);
	return 0;
}