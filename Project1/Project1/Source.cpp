#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, gcd = 1, lcm;
    printf("Please input first number : ");
    scanf("%d", &a);
    printf("Please input second number : ");
    scanf("%d", &b);
    int x = abs(a), y = abs(b);
    while (y != 0)
    {
        int t = y;
        y = x % y;
        x = t;
    }
    gcd = x;
    lcm = (a * b) / gcd;

    printf("\nThe greatest common divisor is %d\n", abs(gcd));
    printf("The least common multiple is %d", abs(lcm));
    return 0;
}