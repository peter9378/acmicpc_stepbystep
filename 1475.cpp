/**
*	baekjoon online judge
*	No. 1475	방 번호경사로
*	@author	peter9378
*	@date		2019.03.12
*/
#include <iostream>
#include <algorithm>
using namespace std;

int arr[11];

// main function
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// input data
	int N;
	cin >> N;

	while (true)
	{
		arr[N % 10]++;
		if (N / 10 == 0)
			break;
		N /= 10;
	}

	int answer = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i != 9 && i != 6)
			answer = max(answer, arr[i]);
	}
	
	// print answer
	cout << max(answer, (arr[6] + arr[9] + 1) / 2);
	return 0;
}
