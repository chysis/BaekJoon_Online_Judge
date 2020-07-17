#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 두 원의 중심과 각각의 반지름이 주어졌을 때 두 원의 교점의 개수를 출력
int CompareRadius(int r1, int r2, int opt)
{
    if (opt == 1) // 두 반지름의 합 계산
        return (r1 + r2) * (r1 + r2);
    else if (opt == 2) // 두 반지름의 차 계산
        return (r1 >= r2) ? (r1 - r2) * (r1 - r2) : (r2 - r1) * (r2 - r1);
}

int distance(int x1, int y1, int x2, int y2)
{
    return ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void)
{
    int T, dt;
    int x1, x2, y1, y2, r1, r2;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dt = distance(x1, y1, x2, y2);
        if ((CompareRadius(r1, r2, 2) < dt) && (dt < CompareRadius(r1, r2, 1)))
            printf("2 \n");
        else if (dt == CompareRadius(r1, r2, 1))
            printf("1 \n");
        else if (dt > CompareRadius(r1, r2, 1))
            printf("0 \n");
        else if (CompareRadius(r1, r2, 2) > dt)
            printf("0 \n");
        else if ((CompareRadius(r1, r2, 2) == dt)&&(r1!=r2))
            printf("1 \n");
        else if ((dt == 0) && (r1 != r2))
            printf("0 \n");
        else if ((x1==x2)&&(y1==y2)&&(r1==r2))
            printf("-1 \n");
    }
    return 0;
}
