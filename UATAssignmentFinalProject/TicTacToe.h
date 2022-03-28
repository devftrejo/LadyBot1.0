#pragma once

// Class TicTacToe.
class TicTacToe
{
public: // public member functions.

	TicTacToe();

	void playGame();

private: // private member functions.

	int arr[3][3];
	int playerTurn;
	int checkWin();

	void drawBoard();
	void playerMove();

	bool checkDraw();
	bool checkResult();
};
