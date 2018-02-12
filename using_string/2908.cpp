/**
*	baekjoon_stepbystep
*	No. 2908 »ó¼ö
*	@author	peter9378
*	@date		2018.02.12
*/

#include <iostream>
#include <string>
using namespace std;

string int_to_string_reverse(int target)
{
	string result="";
	while (target > 0)
	{
		result+=to_string(target % 10);
		target /= 10;
	}

	return result;
}

void print_big_one(string targetA, string targetB)
{
	if (targetA[0] > targetB[0])
		cout << targetA;
	else if (targetA[0] < targetB[0])
		cout << targetB;
	else
	{
		if (targetA[1] > targetB[1])
			cout << targetA;
		else if (targetA[1] < targetB[1])
			cout << targetB;
		else
		{
			if (targetA[2] > targetB[2])
				cout << targetA;
			else if (targetA[2] < targetB[2])
				cout << targetB;
		}
	}
	return;
}

int main()
{
	int numA, numB;
	cin >> numA >> numB;
	print_big_one(int_to_string_reverse(numA), int_to_string_reverse(numB));
	
	return 0;
}