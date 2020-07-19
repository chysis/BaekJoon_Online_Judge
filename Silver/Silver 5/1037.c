#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 어떤 수의 진짜 약수(1, 어떤 수를 제외한 약수)의 개수와 진짜 약수들이 주어졌을 때 어떤 수 찾기
int main(void)
{
    int n, tmp;
    scanf("%d", &n);
    int arr[50] = { 0, };
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
        for (int j = 0; j < n - 1; j++)
        {
            int tmp;
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    if (n == 1)
    {
        printf("%d", arr[0] * arr[0]);
        return 0;
    }
    else if (n % 2 == 0)
    {
        printf("%d", arr[0] * arr[n - 1]);
    }
    else
    {
        printf("%d", arr[(n - 1) / 2] * arr[(n - 1) / 2]);
    }
    return 0;
}
