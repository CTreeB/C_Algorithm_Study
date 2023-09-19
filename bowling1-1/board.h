#ifndef BOARD_H
#define BOARD_H

//extern char scoreBoard[][150]; //decalration - 다른 .c file 파일 안에 있는 전역 변수를 사용할 땐, extern 의 선언이 필요함.

void printBoard(void);
void setFrameScore(int frame, int cast, int score);
void setScore(int frame, int score);


#endif
