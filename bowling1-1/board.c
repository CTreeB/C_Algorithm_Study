#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"board.h"

//허용된 연산을 통해서만 자료에 접근하게 하기 위해 static 함수를 사용!(매우 중요)
static char scoreBoard[][150] =  {
    "------------------------------------------",
    "| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |",
    "-----------------------------------------",
    "| | | | | | | | | | | | | | | | | | | | |",
    "------------------------------------------",
    "|   |   |   |   |   |   |   |   |   |   |",
    "------------------------------------------"
};

void printBoard(void)
{
	system("clear");
	for (int i = 0; i < 7; ++i) {
		printf("%s\n", &scoreBoard[i][0]);	//	scoreBoard[i]
	}
}

void setFrameScore(int frame, int cast, int score)
{
	//scoreBoard[3][(frame-1)*4+2*cast-1] = score + '0' or '/' or 'X'; //숫자 0에 해당하는 아스키 코드값 입력후 5를 더해줌
	char c;
	if (cast == 2 && (scoreBoard[3][(frame-1)*4 + 1]-'0' + score) == 10){
		c = '/';
	} else if ((cast == 1 && score == 10) || frame == 10 && (cast == 2 || cast == 3) && score == 10) {
		c = 'X';
	} else{
		c = score +'0';
	}
	
	scoreBoard[3][(frame-1)*4 + 2*cast-1] = c;
}

void setScore(int frame, int score)
{
	char str[10];
	sprintf(str, "%3d", score);
	strncpy(&scoreBoard[5][(frame-1)*4+1], str, 3);
}
