/**
*	baekjoon_stepbystep
*	No. 15552 ºü¸¥ A+B
*	@author	peter9378
*	@date		2018.03.8
*/

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, numA, numB;
	cin >> T;
	for (int test_case = 0; test_case < T; test_case++)
	{
		cin >> numA >> numB;
		cout << numA + numB << "\n";
	}

	return 0;
}