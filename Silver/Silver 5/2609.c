// 두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FindGCD(int a, int b)
{
    if (b == 0)
        return a;
    else
        return FindGCD(b, a % b);
}

int FindLCM(int a, int b)
{
    return ((a * b) / FindGCD(a, b)); // 수학적 아이디어
}

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d \n", FindGCD(n, m));
    printf("%d", FindLCM(n, m));
    return 0;
}
