// 첫 줄에는 N, K값이 주어진다. N은 배열의 원소의 개수이고, K는 인덱스 값을 나타낸다.
// 둘째 줄에는 N개의 배열의 원소가 차례대로 주어진다.
// 배열의 원소들을 오름차순으로 나열한 뒤 K번째 원소를 출력하는 코드.

// 알게된 점: scanf가 std::cin보다 속도가 훨씬 빠르다.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, k;
	int a[5000001];

	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	printf("%d", a[k-1]);
}
