/**
*	baekjoon_stepbystep
*	No. 2577 숫자의 개수
*	@author	peter9378
*	@date		2018.02.11
*/

#include <iostream>
using namespace std;

int arr[10];

int main()
{
	int a, b, c, result;
	cin >> a >> b >> c;
	result = a * b*c;

	for (int i = 0; i < 10; i++)
		arr[i] = 0;

	while (result>0)
	{
		arr[result % 10]++;
		result /= 10;
	}
	
	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;

	return 0;
}