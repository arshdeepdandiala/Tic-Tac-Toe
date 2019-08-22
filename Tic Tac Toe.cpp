#include <iostream>
using namespace std;

char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int n;
void Draw()
{
	system("cls");

	cout << "Tic Tac Toe" << endl;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Input()
{
	int a;
	cout << " It's "<< player << " Turn " << " Press the number in the field  ";
	cin >> a;

	if (a == 1)
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
		{
			cout << "this field is alreday in use try again"<<endl;
			Input();
		}
	}
	if (a == 2)
	{
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
		{
			cout << "this field is alreday in use try again" << endl;
			Input();
		}
	}
	if (a == 3)
	{
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else
		{
			cout << "this field is alreday in use try again" << endl;
			Input();
		}
	}
	if (a == 4)
	{
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else
		{
			cout << "this field is alreday in use try again" << endl;
			Input();
		}
	}
	if (a == 5)
	{
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
		{
			cout << "this field is alreday in use try again" << endl;
			Input();
		}
	}
	if (a == 6)
	{
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
		{
			cout << "this field is alreday in use try again" << endl;
			Input();
		}
	}
	if (a == 7)
	{
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
		{
			cout << "this field is alreday in use try again" << endl;
			Input();
		}
	}
	if (a == 8)
	{
		if (matrix[2][1] == '3')
			matrix[2][1] = player;
		else
		{
			cout << "this field is alreday in use try again" << endl;
				Input();
		}
	}
	if (a == 9)
	{
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
		{
			cout << "this field is alreday in use try again" << endl;
			Input();
		}
	}
}

void TogglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}


char Win()
{
	//first player
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	//second player
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '/';
}


int main()
{
	Draw();
	
	while (1)
	{
		int n = 0;
		n++;
		Input();
		Draw();
		if (Win() == 'X')
		{
			cout << "X Wins!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << "O Wins!" << endl;
			break;
		}
		else if (Win() == '/' && n == 9)
		{
			cout << " it's a draw " << endl;
			break;
		}
		TogglePlayer();

	}
	system("pause");
	return 0;
	   	  
}



