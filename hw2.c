#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    float km;
    float mile;

    printf("Please enter kilometers: ");
    scanf("%f", &km);

    mile = km / 1.609;

    printf("%.1lf km is equal to %.1lf miles.", km, mile);

    return 0;

}