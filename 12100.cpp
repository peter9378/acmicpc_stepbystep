/**
*	baekjoon online judge
*	No. 12100 2048(Easy)
*	@author	peter9378
*	@date		2018.04.14
*/
#include <iostream>
#include <queue>
using namespace std;

int N;
int board[21][21];
int result;


void check(int direction)
{
	queue<int> q;
	int count = 0;

	switch (direction)
	{
	// 위쪽
	case 0:
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (board[j][i] != 0)
					q.push(board[j][i]);
				board[j][i] = 0;
			}

			int index = 0;
			int temp;

			while (!q.empty()) {
				temp = q.front();
				q.pop();

				if (board[index][i] == 0)
					board[index][i] = temp;
				else if (board[index][i] == temp)
				{
					board[index][i] *= 2;
					index++;
				}
				else
					board[++index][i] = temp;
			}

		}
		break;
	// 아래쪽
	case 1:
		for (int i = 0; i < N; i++)
		{
			for (int j = N - 1; j >= 0; j--)
			{
				if (board[j][i] != 0) q.push(board[j][i]);
				board[j][i] = 0;
			}

			int index = N - 1;
			int temp;

			while (!q.empty())
			{
				temp = q.front();
				q.pop();

				if (board[index][i] == 0)
					board[index][i] = temp;
				else if (board[index][i] == temp)
				{
					board[index][i] *= 2;
					index--;
				}
				else
					board[--index][i] = temp;
			}
		}
		break;
	// 왼쪽
	case 2:
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (board[i][j] != 0)
					q.push(board[i][j]);
				board[i][j] = 0;
			}

			int index = 0;
			int temp;

			while (!q.empty())
			{
				temp = q.front();
				q.pop();

				if (board[i][index] == 0)
					board[i][index] = temp;
				else if (board[i][index] == temp)
				{
					board[i][index] *= 2;
					index++;
				}
				else
					board[i][++index] = temp;
			}

		}
		break;
	// 오른쪽
	case 3:
		for (int i = 0; i < N; i++)
		{
			for (int j = N - 1; j >= 0; j--)
			{
				if (board[i][j] != 0)
					q.push(board[i][j]);
				board[i][j] = 0;
			}

			int index = N - 1;
			int temp;

			while (!q.empty())
			{
				temp = q.front();
				q.pop();

				if (board[i][index] == 0)
					board[i][index] = temp;
				else if (board[i][index] == temp)
				{
					board[i][index] *= 2;
					index--;
				}
				else
					board[i][--index] = temp;
			}
		}
		break;
	}
}



void copy_board(int(*a)[21], int(*b)[21]) 
{
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
			a[i][j] = b[i][j];
	}
}

void dfs(int direction)
{
	if (direction == 5)
	{
		for (int i = 0; i < N; i++) 
		{
			for (int j = 0; j < N; j++) 
			{
				if (board[i][j] > result) 
					result = board[i][j];
			}
		}
		return;
	}

	int temp_board[21][21];
	copy_board(temp_board, board);

	for (int i = 0; i < 4; i++) 
	{
		check(i);
		dfs(direction + 1);
		
		copy_board(board, temp_board);
	}
}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> board[i][j];
	}

	dfs(0);

	cout << result;
	return 0;
}
