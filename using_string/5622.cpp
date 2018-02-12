/**
*	baekjoon_stepbystep
*	No. 5622 ´ÙÀÌ¾ó
*	@author	peter9378
*	@date		2018.02.12
*/

#include <iostream>
#include <string>
using namespace std;

int arr[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };

int main()
{
	string dial;
	cin >> dial;

	int ans = 0;
	for (int i = 0; i < dial.length(); i++)
	{
		ans += arr[(int)(dial[i] - 65)];
	}
	cout << ans;
	return 0;
}