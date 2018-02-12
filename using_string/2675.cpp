/**
*	baekjoon_stepbystep
*	No. 2675 문자열 반복
*	@author	peter9378
*	@date		2018.02.12
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;

	for (int T = 0; T < test_case; T++)
	{
		int R;
		string S, result = "";
		cin >> R >> S;

		for (int i = 0; i < S.length(); i++)
		{
			for (int j = 0; j < R; j++)
				result += S[i];
		}
		cout << result << endl;
	}

	return 0;
}