/**
*	baekjoon_stepbystep
*	No. 2292 ¹úÁı
*	@author	peter9378
*	@date		2018.02.12
*/

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int index = 1, distance = 1;
	while (N > index)
	{
		index += distance * 6;
		distance++;
	}
	cout << distance;
	return 0;
}