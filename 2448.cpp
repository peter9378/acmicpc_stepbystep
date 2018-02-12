/**
*	baekjoon_stepbystep
*	No. 2448 º°Âï±â-11
*	@author	peter9378
*	@date		2018.02.10
*/#include <iostream>
using namespace std;

char arr[9999][9999];

void star(int height, int x, int y)
{
	// ³ôÀÌ°¡ 3ÀÌ¸é ÇÁ·¢Å» ¸ð¾ç »ý¼º
	if (height == 3)
	{
		arr[y][x] = '*';
		arr[y + 1][x - 1] = '*';
		arr[y + 1][x + 1] = '*';
		arr[y + 2][x - 2] = '*';
		arr[y + 2][x - 1] = '*';
		arr[y + 2][x] = '*';
		arr[y + 2][x + 1] = '*';
		arr[y + 2][x + 2] = '*';
		return;
	}
	
	// Àç±Í·Î ÇÁ·¢Å» »ý¼º
	int next_height = height / 2;
	star(next_height, x, y);
	star(next_height, x - next_height, y + next_height);
	star(next_height, x + next_height, y + next_height);
	return;
}


int main()
{
	int height;
	cin >> height;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < 2 * height; j++)
		{
			if (j == 2 * height - 1)
				arr[i][j] = '\0';
			else
				arr[i][j] = ' ';
		}
	}

	// ÇÁ·¢Å» »ý¼º Àç±Í ½ÃÀÛ
	star(height, height - 1, 0);

	// ÇÁ·¢Å» ¸ð¾çÀÇ º° ±×¸®±â
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < 2 * height - 1; j++)
			cout << arr[i][j];
		cout << endl;
	}
	return 0;
}