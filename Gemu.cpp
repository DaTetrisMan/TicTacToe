#include <iostream>
#include "Windows.h"
using namespace std;

/*Please keep in mind that I'm still very new to programming in general, meaning that I'm no more than an amateur. Feel free to criticize
as much as you want. It would help me improve my skills. 
You can use this source code as much as you want. But please cite me as the author*/

int field[10];
int input;

void wincondition();
void wincondition()
{
	if (field[1] && field[2] && field[3] == 1)
	{
		cout << "Player 1 wins !" << endl;
		Sleep(2000);
		exit(0);
	}

	if (field[4] && field[5] && field[6] == 1)
	{
		cout << "Player 1 wins !" << endl;
		Sleep(2000);
		exit(0);
	}

	if (field[7] && field[8] && field[9] == 1)
	{
		cout << "Player 1 wins !" << endl;
		Sleep(2000);
		exit(0);
	}

	if (field[1] && field[2] && field[3] == 2)
	{
		cout << "Player 2 wins !" << endl;
		Sleep(2000);
		exit(0);
	}

	if (field[4] && field[5] && field[6] == 2)
	{
		cout << "Player 2 wins !" << endl;
		Sleep(2000);
		exit(0);
	}

	if (field[7] && field[8] && field[9] == 2)
	{
		cout << "Player 2 wins !" << endl;
		Sleep(2000);
		exit(0);
	}
}


void draw();
void draw()
{
	system("cls");
	cout << "\n\n\n"
		<< "	" << field[1] << " | " << field[2] << " | " << field[3] << endl
		<< "       ---|---|---" << endl
		<< "	" << field[4] << " | " << field[5] << " | " << field[6] << endl
		<< "       ---|---|---" << endl
		<< "	" << field[7] << " | " << field[8] << " | " << field[9] << endl;
}

void userinput();
void userinput()
{
	int i = input;
	draw();
	cout <<  endl << "Please select a field : " << endl;
	cin >> input;
	switch (input)
	{
	case 1:
		if (field[1] == 0)
		{
			field[1] = 1;
		}
		else if (field[1] == 2)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 2:
		if (field[2] == 0)
		{
			field[2] = 1;
		}
		else if (field[2] == 2)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 3:
		if (field[3] == 0)
		{
			field[3] = 1;
		}
		else if (field[3] == 2)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 4:
		if (field[4] == 0)
		{
			field[4] = 1;
		}
		else if (field[4] == 2)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 5:
		if (field[5] == 0)
		{
			field[5] = 1;
		}
		else if (field[5] == 2)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 6:
		if (field[6] == 0)
		{
			field[6] = 1;
		}
		else if (field[6] == 2)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 7:
		if (field[7] == 0)
		{
			field[7] = 1;
		}
		else if (field[7] == 2)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 8:
		if (field[8] == 0)
		{
			field[8] = 1;
		}
		else if (field[8] == 2)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 9:
		if (field[9] == 0)
		{
			field[9] = 1;
		}
		else if (field[9] == 2)
		{
			cout << "Field already selected" << endl;
		}
		break;
	default:
		cout << "Error";
		Sleep(1000);
		exit(0);
	}
	draw();
}

void inputuser2();
void inputuser2()
{
	int i = input;
	draw();
	cout << endl << "Please select a field : " << endl;
	cin >> input;
	switch (input)
	{
	case 1:
		if (field[1] == 0)
		{
			field[1] = 2;
		}
		else if (field[1] == 1)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 2:
		if (field[2] == 0)
		{
			field[2] = 2;
		}
		else if (field[2] == 1)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 3:
		if (field[3] == 0)
		{
			field[3] = 2;
		}
		else if (field[3] == 1)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 4:
		if (field[4] == 0)
		{
			field[4] = 2;
		}
		else if (field[4] == 1)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 5:
		if (field[5] == 0)
		{
			field[5] = 2;
		}
		else if (field[5] == 1)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 6:
		if (field[6] == 0)
		{
			field[6] = 2;
		}
		else if (field[6] == 1)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 7:
		if (field[7] == 0)
		{
			field[7] = 2;
		}
		else if (field[7] == 1)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 8:
		if (field[8] == 0)
		{
			field[8] = 2;
		}
		else if (field[8] == 1)
		{
			cout << "Field already selected" << endl;
		}
		break;
	case 9:
		if (field[9] == 0)
		{
			field[9] = 2;
		}
		else if (field[9] == 1)
		{
			cout << "Field already selected" << endl;
		}
		break;
	default:
		cout << "Error";
		Sleep(1000);
		exit(0);
	}
	draw();
}


void game();
void game()
{
	for (int j = 0; j < 10000; j++)
	{
		for (int i = 0; i < 1001; i++)
		{
			wincondition();
			userinput();
			inputuser2();
		}
	}
}

int main()
{
	game();
	Sleep(20000);
	return 0;
}
