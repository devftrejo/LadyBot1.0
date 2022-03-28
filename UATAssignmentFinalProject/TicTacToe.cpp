//#include <bits/stdc++.h> // Suppose to include every standard library, but does not work.
#include <iostream> // Includes functions for cin, cout, etc..
#include <windows.h> // Accesses the Win32 API functions, suppose to include libraries stdio.h and stdlib.
#include <stdio.h> // Includes input/output functions for printf, scanf, etc..
#include <string.h> // Used to manipulate arrays of characters.
#include <cstdlib> // Includes general purpose functions for math, inter alia. Must be called for system commands/functions as well.
#include <ctime> // For time, converts given time since epoch to a calendar local time and then to a character representation.
#include <string> // Includes functions to use strings.
#include <fstream> // Access to fstream, (file stream), objects, for file input and output.
#include <climits> // Includes the limitation of an integer, highest number it can hold, (For using INT_MAX.).
#include <exception> // base class for standard exceptions.

#include "TicTacToe.h"

using namespace std;

// Constructor:
TicTacToe::TicTacToe()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = 0;
		}
	}
	srand(time(0));

	playerTurn = rand() % 2 + 1;
}

// Member Function Definitions:
void TicTacToe::playGame()
{
	while (1)
	{
		system("cls");

		drawBoard();
		playerMove();

		if (checkResult())
		{
			break;
		}
	}
	cout << endl;
}

void TicTacToe::drawBoard()
{
	cout << "Player 1(1) - Player 2(2) " << endl << endl;
	cout << "Turn: Player " << playerTurn << endl << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << " ";

		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];

			if (j == 2)
		
				continue;
				cout << " | ";
			
		}
		if (i == 2)
		
			continue;
			cout << endl << "___|___|___" << endl << "   |   |   " << endl;
		
	}
}

void TicTacToe::playerMove()
{
	int row, col;

	bool correctMove = false;

	cout << endl << endl << "Time to make a move!" << endl;

	while (!correctMove)
	{
		cout << "Enter Row (0-2): ";
		cin >> row;

		cout << "Enter Col (0-2): ";
		cin >> col;

		if ((row < 3 && row > -1) || (col > -1 && col < 3))
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (arr[row][col] == 0)
					{
						arr[row][col] = playerTurn;
						correctMove = true;
						playerTurn++;
					}
						
					if (playerTurn > 2)
					{
						playerTurn = 1;
					}
						
				}
			}
		}
		if (!correctMove)
		{
			cout << "Wrong Input, please try again." << endl;
		}
	}
}

bool TicTacToe::checkResult()
{
	int check = checkWin();

	switch (check)
	{
	case 1:
		system("cls");

		drawBoard();

		cout << endl << endl << "Player 1 Wins!";

		return true;

	case 2:
		system("cls");

		drawBoard();

		cout << endl << endl << "Player 2 Wins!";

		return true;

	case -1:
		if (checkDraw())
		{
			system("cls");

			drawBoard();

			cout << endl << endl << "Draw!";

			return true;
		}
		break;
	}
	return false;
}

int TicTacToe::checkWin()
{
	for (int player = 1; player < 3; player++)
	{
		for (int i = 0; i < 3; i++)
		{
			if (arr[i][0] == player && arr[i][1] == player && arr[i][2] == player)
			{
				return player;
			}
			if (arr[0][i] == player && arr[1][i] == player && arr[2][i] == player)
			{
				return player;
			}
		}
		if (arr[0][0] == player && arr[1][1] == player && arr[2][2] == player)
		{
			return player;
		}
		if (arr[0][2] == player && arr[1][1] == player && arr[2][0] == player)
		{
			return player;
		}
	}
	return -1;
}

bool TicTacToe::checkDraw()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 0)
			{
				return false;
			}
		}
	}
	return true;
}
