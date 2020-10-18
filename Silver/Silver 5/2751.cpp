// 입력받을 숫자의 개수 N과 N개의 숫자들이 각 줄에 주어지면, 그것을 오름차순으로 정렬하는 코드.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, num;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
		cout << v[i] << "\n";
}
