// 두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.
// input: 첫째 줄에 테스트 케이스의 개수, 둘째 줄부터 A, B가 한 줄에 주어진다.
// output: 각 줄에 입력된 수들의 최소공배수를 출력한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FindGCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return FindGCD(b, a%b);
}

int main(void)
{
	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d \n", (a*b)/FindGCD(a, b));
	}
	return 0;
}
