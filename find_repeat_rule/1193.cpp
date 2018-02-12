/**
*	baekjoon_stepbystep
*	No. 1193 분수찾기
*	@author	peter9378
*	@date		2018.02.12
*/

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int index = 0, distance = 0;
	while (N>index)
	{
		index += distance;
		distance++;
	}
	if(distance%2)
		cout << distance-index+N-1 << "/" << index-N+1;
	else
		cout << index - N + 1 << "/" << distance - index + N - 1;
	return 0;
}