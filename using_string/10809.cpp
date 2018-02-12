/**
*	baekjoon_stepbystep
*	No. 10809 ¾ËÆÄºª Ã£±â
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
		arr[i] = -1;
	cin >> S;

	for (int i = 0; i < S.length(); i++)
	{
		if (arr[(int)S[i] - 97] == -1)
			arr[(int)S[i] - 97] = i;
	}
	cout << arr[0];

	for (int i = 1; i < 25; i++)
		cout << " " << arr[i];

	return 0;
}