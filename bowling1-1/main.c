#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "board.h"

int main(void)
{
	

	setFrameScore(1, 1, 9);
	setFrameScore(1, 2, 0);
	setFrameScore(2, 1, 5);
	setFrameScore(9, 1, 9);
	setFrameScore(9, 2, 1);
	setFrameScore(10, 1, 0);
	setFrameScore(10, 2, 10);
	setFrameScore(10, 3, 10);
	
	
	setScore(1, 20);
	setScore(10, 150);


	




/*	scoreBoard[3][1] = '9';
	scoreBoard[3][3] = '0';
	scoreBoard[3][5] = 'X';
	scoreBoard[3][9] = '9';
	scoreBoard[3][11] = '/';
	
	int frame = 9;
	int cast = 1;
	int score = 5;
	
	
	strncpy(&scoreBoard[5][1], "100", 3); //100뒤에 백슬러쉬 0가 들어가서, 뒤에는 모두 0이 되어버린다. 3을 써주면 3개의 공간만 할당한다.
	strncpy(&scoreBoard[5][5], "200", 3);
	
	frame = 9;
	score = 100;
*/
	

printBoard();
	
	return 0;
	
}
