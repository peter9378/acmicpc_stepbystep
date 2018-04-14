/**
*	baekjoon online judge
*	No. 14487 욱제는 효도쟁이야!!
*	@author	peter9378
*	@date		2018.04.09
*/
#include <iostream>
using namespace std;


// main
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int max = -1, sum = 0, temp;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp > max)
			max = temp;
		sum += temp;
	}

	cout << sum - max;
	return 0;
}