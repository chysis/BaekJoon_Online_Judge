#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 링의 개수(첫 줄)와 각각의 반지름(둘째 줄)이 입력된다. 링들은 서로 맞물려있다. 
// 첫 번째 링이 한 바퀴 돌 때 나머지 링들은 몇 바퀴를 도는지 기약분수로 나타내는 프로그램.
// 맞물려있는 톱니바퀴 상황이다. 

int Euclidean(int a, int b) // 유클리드 호제법으로 최대공약수 구하기
{
    if (b == 0)
        return a;
    else
        return Euclidean(b, a % b);
}

int main(void)
{
    int N, GCD, j = 0, k = 1;
    int arr[100] = { 0, };
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    while(j<N-1)
    {
        GCD = Euclidean(arr[0], arr[k]);
        printf("%d/%d \n", arr[0] / GCD, arr[k] / GCD); // 최대공약수로 나누어 기약분수 형태로 나타내기
        k++;
        j++;
    }
    return 0;
}
