/**
*	baekjoon_stepbystep
*	No. 1316 그룹 단어 체커
*	@author	peter9378
*	@date		2018.02.12
*/

#include <iostream>
#include <string>
using namespace std;

bool arr[26];

int main()
{
	int test_case, ans=0;
	cin >> test_case;
	for (int T = 0; T < test_case; T++)
	{
		string S;
		cin >> S;

		for (int i = 0; i < 26; i++)
			arr[i] = false;

		bool flag = true;
		for (int i = 0; i < S.length(); i++)
		{
			if (arr[(int)S[i] - 97] == true)
			{
				flag = false;
				break;
			}
			else
			{
				arr[(int)S[i] - 97] = true;
				char temp = (char)S[i];
				while (temp == S[i])
					i++;
				i--;
			}
		}
		if (flag)
			ans++;
	}
	cout << ans;
	return 0;
}