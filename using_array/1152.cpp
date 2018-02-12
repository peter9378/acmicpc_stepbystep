/**
*	baekjoon_stepbystep
*	No. 1152 단어의 개수
*	@author	peter9378
*	@date		2018.02.11
*/

#include <iostream>
using namespace std;

char arr[1000001];

int main()
{
	int total = 0;
	cin.getline(arr, 1000001);

	for (int i = 0; i < 1000001; i++)
	{
		if (arr[i] == '\0')
			break;
		if (arr[i] != ' ')
		{
			while (arr[i] != ' ')
				i++;
			total++;
		}
	}
		cout << total;
	return 0;
}