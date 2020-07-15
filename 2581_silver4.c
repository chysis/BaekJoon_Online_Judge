#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 
// 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.

int main(void)
{
    int a, b, num = 0, TRIG=0, total=0;
    scanf("%d", &a);
    scanf("%d", &b);
    int min = b + 1;

    for (int i = a; i <= b; i++)
    {
        TRIG = 0;
        while (1)
        {
            if (i == 1)
                break;
            else if (i == 2)
            {
                if (min > i)
                    min = i;
                total += i;
                num++;
                break;
            }
            else // 3~
            {
                for (int j = 2; j < i; j++)
                {
                    if (i % j == 0)
                    {
                        TRIG = 1;
                        break;
                    }
                }
                if (TRIG == 0)
                {
                    if (min > i)
                        min = i;
                    total += i;
                    num++;
                    break;
                }
                else
                    break;
            }
        }
    }
    if (num == 0)
        printf("-1");
    else
    {
        printf("%d \n", total);
        printf("%d \n", min);
    }
    return 0;
}
