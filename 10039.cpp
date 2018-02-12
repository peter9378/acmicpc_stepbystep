/**
*	baekjoon_stepbystep
*	No. 10039 Æò±Õ Á¡¼ö
*	@author	peter9378
*	@date		2018.02.11
*/

#include <iostream>
using namespace std;

#define student_number 5

int main()
{
	int score[student_number];
	int sum = 0;
	for (int i = 0; i < student_number; i++)
	{
		cin >> score[i];
		if (score[i] < 40)
			score[i] = 40;
		sum += score[i];
	}

	cout << sum / student_number;
	return 0;
}