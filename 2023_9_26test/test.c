#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//    char lowercase = 'a';
//    char uppercase = lowercase - 32;
//
//    printf("Сд��ĸ��%c\n", lowercase);
//    printf("��Ӧ�Ĵ�д��ĸ��%c\n", uppercase);
//
//    return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    char lowercase = 'a';
//    char uppercase = toupper(lowercase);
//
//    printf("Сд��ĸ��%c\n", lowercase);
//    printf("��Ӧ�Ĵ�д��ĸ��%c\n", uppercase);
//
//    return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    char ch = 'a';
//
//    if (islower(ch)) {
//        printf("%c ��Сд��ĸ\n", ch);
//    }
//    else {
//        printf("%c ����Сд��ĸ\n", ch);
//    }
//
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[100];
//
//    printf("������һ���ַ�����");
//    fgets(str, sizeof(str), stdin);
//
//    int length = strlen(str);
//
//    for (int i = 0; i < length; i++) {
//        if (str[i] >= 'a' && str[i] <= 'z') {
//            str[i] = str[i] - 32;  // ��Сд��ĸת��Ϊ��д��ĸ
//        }
//    }
//
//    printf("ת������ַ���Ϊ��%s", str);
//
//    return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    char str[100];
//    printf("������һ���ַ���: ");
//    fgets(str, sizeof(str), stdin);
//
//    int i = 0;
//    while (str[i] != '\0') {
//        if (islower(str[i])) {
//            str[i] = toupper(str[i]);
//        }
//        i++;
//    }
//
//    printf("ת������ַ���Ϊ: %s\n", str);
//
//    return 0;
//}

#include <stdio.h>
#include <string.h>

//void main()
//{
//    char str[10] = "ahud";
//    char* src = str;
//    char* dest = str;  //���������ָ��ָ��ͬһ��ַ
//    //printf("%p\n", src);
//    //printf("%p\n", dest);
//    //src += 3;
//    //*src = 'a';
//    //printf("%p\n",src);
//    //printf("%p\n", dest);
//    *dest = '\0';
//    printf("%s\n", str);
//
//    //printf("%p\n", &src);
//    //printf("%p\n", &dest);
//}

//void removeABC(char* str)
//{
//    int len = strlen(str);
//    char* src = str;
//    char* dest = str;  //���������ָ��ָ��ͬһ��ַ
//
//    while (*src)
//    {
//        if (*src == 'a' && *(src + 1) == 'b' && *(src + 2) == 'c') //�ж�������abc�ַ���
//        {
//            src += 3; //���ַ�a��ʼ��ָ����Ƶ�3��λ�ã���Խ��abc�ⲿ��
//        }
//        else
//        {
//            *dest++ = *src++;
//        }
//    }
//    *dest = '\0';
//}
//
//int main()
//{
//    char str[100];
//
//    printf("������һ���ַ���: ");
//    fgets(str, sizeof(str), stdin);
//
//    removeABC(str);
//
//    printf("ɾ��'abc'����ַ���Ϊ: %s\n", str);
//
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//void remove_abc(char* str)
//{
//    int len = strlen(str);
//    int i, j = 0;
//
//    for (i = 0; i < len; i++)  //�����ַ�����
//    {
//        if (str[i] != 'a' && str[i] != 'b' && str[i] != 'c')
//        {
//            str[j++] = str[i];  //str[j++]���Ȱ�jԭ����ֵ�õ����Լӣ������ǰ����������ַ��ַŻ�ԭ���飬���¶����鸳ֵ��
//        }
//    }
//
//    str[j] = '\0'; // ���µ��ַ���ĩβ���Ͻ�����־��
//}
//
//int main()
//{
//    char str[100];  //����һ���ַ�����
//
//    printf("�������ַ���: ");
//    scanf("%s", str);
//
//    remove_abc(str);
//
//    printf("ɾ��abc����ַ���Ϊ: %s\n", str);
//
//    return 0;
//}
#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 100

void addStrings(char* num1, char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry = 0;
    int i, j, k;

    // ������������ַ������Ӹ�λ����ʼ���
    for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        result[k] = sum % 10 + '0';  // ��ǰλ������
        carry = sum / 10;  // ��λ
    }

    // ��ת����ַ���
    int len = k;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }

    result[len] = '\0';
}

int main() {
    char num1[MAX_DIGITS] = "12345678901";  // ��һ�� 11 λ����
    char num2[MAX_DIGITS] = "98765432109";  // �ڶ��� 11 λ����
    char result[MAX_DIGITS + 1];  // ����ַ�����Ԥ��һλ�洢������ '\0'

    addStrings(num1, num2, result);

    printf("Sum: %s\n", result);

    return 0;
}