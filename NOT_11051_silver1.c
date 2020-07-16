#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Factorial(int num)
{
    if (num == 0)
        return 1;
    else
        return num * Factorial(num - 1);
}

int Combination(int num1, int num2)
{
    if (num2 == 0)
        return 1;
    else if ((num1 == num2)&&(num1>0)&&(num2>0))
        return 1;
    else
        while (num1 > 1)
        {
            return Combination(num1 - 1, num2 - 1) + Combination(num1 - 1, num2);
        }
}

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    printf("%d", Combination(N, K) % 10007);
    return 0;
}
