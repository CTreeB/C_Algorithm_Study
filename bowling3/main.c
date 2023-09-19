#include "board.h"

int main(void)
{
	scoreBoard[3][1] = '9';
	scoreBoard[3][3] = '0';
	scoreBoard[3][5] = 'X';
	scoreBoard[3][9] = '9';
	scoreBoard[3][11] = '/';


	int frame = 9;
	int cast = 1;
	int score = 5;
	
	scoreBoard[3][(frame-1)*4 + 2*cast-1] = 5 + '0';
	
	strcpy(&scoreBoard[5][1], "100");
	
	system("clear")
	for (int i = 0; i < 7; ++i) {
		printf("%s\n", &scoreBoard[i][0]); //scoreBoard[i]
	}
	return 0;
}


/*
#include "board.h"
#include <stdio.h>


static char board[7][60] = {
	"-------------------------------------------",
	"| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |",
	"--------------------------------------------",
	"| | | | | | | | | | | | | | | | | | | | | |",
	"--------------------------------------------",
	"|    |   |   |   |   |   |   |   |   |    |",
	"--------------------------------------------"
};

void setScore(int frame, int cast, int score)
{
	char c;
	if (cast == 2 && board[3][4*(frame-1) + 1] - '0'+ score == 10) {
		c = '/';
	}else if (frame < 10 && cast == 1 && score == 10 || frame == 10 && score == 10) {
		c = 'X';
	} else {
		c = score + '0';
	}
	
	
	board[3][4*(frame-1) + 2*cast-1] = c ;
}

void setFrameScore(int frame, int frameScore)
{
	char buf[4];
	sprintf(buf,"%3d",frameScore);
	strncpy(&board[5][0] + 4*(frame-1)+1, buf, 3);
}



void printBoard(void)
{
	system("clear");
	
	for (int i = 0; i < 7; ++i ) {
		printf("%s\n", &board[i][0]);  //board[i]
	}

}
*/
