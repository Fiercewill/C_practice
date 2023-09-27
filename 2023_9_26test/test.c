#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//    char lowercase = 'a';
//    char uppercase = lowercase - 32;
//
//    printf("小写字母：%c\n", lowercase);
//    printf("对应的大写字母：%c\n", uppercase);
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
//    printf("小写字母：%c\n", lowercase);
//    printf("对应的大写字母：%c\n", uppercase);
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
//        printf("%c 是小写字母\n", ch);
//    }
//    else {
//        printf("%c 不是小写字母\n", ch);
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
//    printf("请输入一个字符串：");
//    fgets(str, sizeof(str), stdin);
//
//    int length = strlen(str);
//
//    for (int i = 0; i < length; i++) {
//        if (str[i] >= 'a' && str[i] <= 'z') {
//            str[i] = str[i] - 32;  // 将小写字母转换为大写字母
//        }
//    }
//
//    printf("转换后的字符串为：%s", str);
//
//    return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    char str[100];
//    printf("请输入一个字符串: ");
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
//    printf("转换后的字符串为: %s\n", str);
//
//    return 0;
//}

#include <stdio.h>
#include <string.h>

//void main()
//{
//    char str[10] = "ahud";
//    char* src = str;
//    char* dest = str;  //申请的两个指针指向同一地址
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
//    char* dest = str;  //申请的两个指针指向同一地址
//
//    while (*src)
//    {
//        if (*src == 'a' && *(src + 1) == 'b' && *(src + 2) == 'c') //判断连续的abc字符串
//        {
//            src += 3; //从字符a开始将指针后移到3个位置，跨越掉abc这部分
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
//    printf("请输入一个字符串: ");
//    fgets(str, sizeof(str), stdin);
//
//    removeABC(str);
//
//    printf("删除'abc'后的字符串为: %s\n", str);
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
//    for (i = 0; i < len; i++)  //遍历字符数组
//    {
//        if (str[i] != 'a' && str[i] != 'b' && str[i] != 'c')
//        {
//            str[j++] = str[i];  //str[j++]是先把j原来的值用掉再自加，这里是把留下来的字符又放回原数组，重新对数组赋值了
//        }
//    }
//
//    str[j] = '\0'; // 在新的字符串末尾加上结束标志符
//}
//
//int main()
//{
//    char str[100];  //申请一个字符数组
//
//    printf("请输入字符串: ");
//    scanf("%s", str);
//
//    remove_abc(str);
//
//    printf("删除abc后的字符串为: %s\n", str);
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

    // 逆序遍历两个字符串，从个位数开始相加
    for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        result[k] = sum % 10 + '0';  // 当前位的数字
        carry = sum / 10;  // 进位
    }

    // 反转结果字符串
    int len = k;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }

    result[len] = '\0';
}

int main() {
    char num1[MAX_DIGITS] = "12345678901";  // 第一个 11 位数字
    char num2[MAX_DIGITS] = "98765432109";  // 第二个 11 位数字
    char result[MAX_DIGITS + 1];  // 结果字符串，预留一位存储结束符 '\0'

    addStrings(num1, num2, result);

    printf("Sum: %s\n", result);

    return 0;
}