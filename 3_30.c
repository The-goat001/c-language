#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//    int ch;
//
//    while ((ch = getchar()) != EOF)
//    {
//        if (isspace(ch))
//        {
//            continue;
//        }
//        ch = tolower(ch);
//        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//        {
//            puts("Vowel");
//        }
//        else
//        {
//            puts("Consonant");
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char alp;
//    while (scanf("%c", &alp) != EOF)
//
//    {
//        getchar();
//        if (alp >= 'a' && alp <= 'z' || alp >= 'A' && alp <= 'Z')
//        {
//            printf("%c is an alphabet.\n", alp);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", alp);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    char a = 0;
//    while (a = getchar() != EOF)
//    {
//        if (isalnum(a))
//        {
//            printf("%c is an alphabet.\n", a);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", a);
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    char a = 0;
//    while (scanf("%c\n", &a) != EOF)
//    {
//        if (isalnum(a))
//        {
//            printf("%c is an alphabet.\n", a);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", a);
//        }
//    }
//
//    return 0;
//}
#include<stdio.h>
#include<ctype.h>
int main()
{
    char a = 0;
    while (a = getchar() != EOF)
    {
        if (isalpha(a))
        {
            printf("%c is an alphabet.\n", a);
        }
        else
        {
            printf("%c is not an alphabet.\n", a);
        }
    }

    return 0;
}