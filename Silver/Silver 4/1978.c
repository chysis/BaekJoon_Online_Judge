#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램.
// N은 100이하, 각 수는 1000 이하의 자연수

int main(void)
{
    int N, num = 0, TRIG=0;
    int arr[100] = { 0, };

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < N; i++)
    {
        TRIG = 0;
        while (1)
        {
            if (arr[i] == 1)
                break;
            else if (arr[i] == 2)
            {
                num++;
                break;
            }
            else // 3~
            {
                for (int j = 2; j < arr[i]; j++)
                {
                    if (arr[i] % j == 0)
                    {
                        TRIG = 1;
                        break;
                    }
                }
                if (TRIG == 0)
                {
                    num++;
                    break;
                }
                else
                    break;
            }
        }
    }
    printf("%d", num);
    return 0;
}
