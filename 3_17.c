#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
/*nt main()
{
    float weight, height;
    float BMI;
    scanf("%f %f", &weight, &height);
    BMI = weight / pow((height / 100), 2);
    printf("%.2f", BMI);
    return 0;
}*/
int main()
{
    char ch;
    while ((ch = getchar()) != EOF) 
    {
        if (ch >= 'A' && ch <= 'Z') 
        {   ch += 32;
        }
        putchar(ch);
    }
}