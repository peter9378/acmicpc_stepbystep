/**
*	baekjoon_stepbystep
*	No. 2920 À½°è
*	@author	peter9378
*	@date		2018.02.11
*/

#include <iostream>
using namespace std;

int main()
{
	int arr[8];
	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	bool flag = true;
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] != i + 1)
			flag = false;
	}

	if (flag)
	{
		cout << "ascending";
		return 0;
	}
	else
	{
		for (int i = 0; i < 8; i++)
		{
			if (arr[i] != 8 - i)
			{
				cout << "mixed";
				return 0;
			}
		}
		cout << "descending";
	}

	return 0;
}