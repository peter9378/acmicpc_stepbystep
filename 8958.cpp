/**
*	baekjoon_stepbystep
*	No. 8958 OXÄûÁî
*	@author	peter9378
*	@date		2018.02.11
*/

#include <iostream>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;

	for (int t = 0; t < test_case; t++)
	{
		char arr[81];
		for (int i = 0; i < 81; i++)
			arr[i] = '/0';
		cin >> arr;

		int total_score = 0;
		for(int i=0;arr[i] != '\0';i++)
		{
			int score = 1;
			while (arr[i] == 'O')
			{
				total_score += score;
				score++;
				i++;
			}
		}

		cout << total_score << endl;
	}
	return 0;
}