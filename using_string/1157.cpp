/**
*	baekjoon_stepbystep
*	No. 1157 단어 공부
*	@author	peter9378
*	@date		2018.02.12
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	int arr[26];
	for (int i = 0; i < 26; i++)
		arr[i] = 0;
	cin >> S;
	for (int i = 0; i < S.length(); i++)
	{
		if ((int)S[i] > 91)
			S[i] = (int)S[i] - 32;
		arr[(int)S[i] - 65]++;
	}
	int ans = 0, same = 0;
	for (int i = 0; i < 26; i++)
	{
		if (ans < arr[i])
			ans = arr[i];
		else if (ans == arr[i] && ans>same)
			same = ans;
	}
	if (ans == same)
		cout << "?";
	else
	{
		for (int i = 0; i < 26; i++)
		{
			if (arr[i] == ans)
			{
				char alphabet = i + 65;
				cout << alphabet;
				break;
			}
		}
	}
	return 0;
}