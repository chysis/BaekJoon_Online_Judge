#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 1000000

// 하노이 탑의 원판의 개수를 입력받고 옮기는 데 필요한 최소횟수와
// 그 과정을 출력하는 프로그램 (원판 20개 이하에 한해서)

/* 출발기둥, 도착기둥, 나머지기둥, 원판개수 */
void MoveHanoi(int from, int to, int no, int num)
{
    if (num == 1)
        printf("%d %d \n", from, to);
    else
    {
        MoveHanoi(from, no, to, num - 1); 
        printf("%d %d \n", from, to);
        MoveHanoi(no, to, from, num - 1);
    }
}

int main(void)
{
    int N;
    char k_result[MAX]; // 큰 수 처리를 
    long double pow_d = 2.0, tmp;

    scanf("%d", &N);

    tmp = pow(pow_d, N); // 2^N 의 값 저장

    sprintf(k_result, "%.0Lf", tmp);
    int size = strlen(k_result);
    k_result[size - 1] = (char)(((int)(k_result[size - 1] - 48) - 1) + 48);
    printf("%s\n", k_result);

    if (N <= 20)
    {
        MoveHanoi(1, 3, 2, N);
    }
    return 0;
}
