// 세 변수 E(1<=E<=15), S(1<=S<=28), M(1<=M<=19)이 주어진다.
// 우리가 알고있는 1년은 1 1 1로 표시된다. 또한 1년이 지날 때마다 세 수는 1씩 증가한다.
// 만약 어떤 수가 범위를 넘어갈 경우 1로 돌아온다.
// 이때 입력된 E S M을 만족하는 가장 빠른 년도를 찾는 것이 문제다.

#include <iostream>
using namespace std;

int main()
{
	int e, s, m, year = 1;
	cin >> e >> s >> m;

	if (e == 15)
		e = 0;
	if (s == 28)
		s = 0;
	if (m == 19)
		m = 0;
	while ((year % 15 != e) || (year % 28 != s) || (year % 19 != m))
	{
		year++;
	}
	cout << year;
}
