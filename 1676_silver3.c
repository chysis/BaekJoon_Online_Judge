#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 입력받은 수의 팩토리얼 값에 일의 자리부터 0이 몇 개 있는지 세기.

// 팩토리얼을 직접 계산해서 한 자리씩 구하는 것은 비효율적.
// 어떤 수가 0으로 끝난다는 것은 소인수분해 했을 때 10(2*5)이 있다는 것이다.
// n! = 1*2*...*(n-1)*n 을 소인수분해 했을 때 2의 개수는 항상 5의 개수보다 많다.
// 따라서 5의 개수에 따라 0의 개수가 달라진다.

int Find_5_Involution(int num)
{
    int n = 0;
    while (num > 0)
    {
        if (num % 5 == 0)
        {
            num /= 5;
            n++;
        }
        else
            return n; // 5의 제곱수가 아니면 0, 5이면 1, 5의 n승은 n
    }
    return n;
}

int main(void)
{
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if ((i % 5 == 0) && (Find_5_Involution(i) < 2))
            count++;
        else if (Find_5_Involution(i) >= 2)
            count += Find_5_Involution(i);
    }
    printf("%d", count);
    return 0;
}
