/**
*	baekjoon_stepbystep
*	No. 2941 크로아티아 알파벳
*	@author	peter9378
*	@date		2018.02.12
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	cin >> S;

	int ans = 0, flag = 0;
	for (int i = 0; i < S.length(); i++)
	{
		flag = 0;
		if (S[i] == 'c')
		{
			if (S[i + 1] == '=' || S[i + 1] == '-')
				flag = 1;
		}
		else if (S[i] == 'd')
		{
			if (S[i + 1] == '-')
				flag = 1;
			else if (S[i + 1] == 'z' && S[i + 2] == '=')
				flag = 2;
		}
		else if (S[i] == 'l' && S[i + 1] == 'j')
			flag = 1;
		else if (S[i] == 'n' && S[i + 1] == 'j')
			flag = 1;
		else if (S[i] == 's' && S[i + 1] == '=')
			flag = 1;
		else if (S[i] == 'z' && S[i + 1] == '=')
			flag = 1;
		ans++;
		i += flag;
	}
	cout << ans;
	return 0;
}