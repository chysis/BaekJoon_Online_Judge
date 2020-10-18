// 사용자로부터 1,000,000,000 이하의 자연수를 입력받아 내림차순으로 정렬하는 코드.
// 예를 들어, 2143을 입력하면 4321을 출력해야 한다.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	string s;
	vector<int> v;

	cin >> s;
	for (unsigned int i = 0; i < s.length(); i++)
	{
		int num = s[i]-'0';
		v.push_back(num);
	}
	
	sort(v.begin(), v.end(), compare);

	for (unsigned int i = 0; i < s.length(); i++)
		cout << v[i];
}
