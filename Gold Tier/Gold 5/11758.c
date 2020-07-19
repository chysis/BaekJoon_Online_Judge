#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// CCW 기본 문제. 세 점의 좌표가 주어지고, 그 점들을 이은 선분의 방향성을 구한다.
// 일직선이면 0, 시계방향이면 -1, 반시계방향이면 1을 출력한다.
// 행렬식을 이용한 삼각형의 넓이로 접근하여 해결함.

int CCW(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int temp = x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3;
    if (temp > 0)
        return 1;
    else if (temp == 0)
        return 0;
    else
        return -1;
}

int main(void)
{
    int x1, x2, x3, y1, y2, y3;
    int result;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    result = CCW(x1, y1, x2, y2, x3, y3);
    printf("%d", result);
    return 0;
}
