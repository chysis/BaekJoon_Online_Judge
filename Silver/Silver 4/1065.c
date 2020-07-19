#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 
등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. 
N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. */

int main(void)
{
    int N, i=1, n=0;
    int a, b, c;
    scanf("%d", &N);

    while (i <= N)
    {
        if (i < 10)
        {
            n++;
            i++;
            continue;
        }
        else if ((i >= 10) && (i < 100))
        {
            n++;
            i++;
            continue;
        }
        else if ((i >= 100) && (i < 1000))
        {
            c = i % 10;
            b = (i / 10) % 10;
            a = (i / 10) / 10;
            if ((b - a) == (c - b))
            {
                n++;
                i++;
                continue;
            }
            else
            {
                i++;
                continue;
            }
        }
        else // i=1000
        {
            i++;
            continue;
        }
    }
    printf("%d", n);
    return 0;
}
