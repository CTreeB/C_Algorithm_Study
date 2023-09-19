#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{

	int question[3];
	
	srand(time(NULL));
	
	question[0] = rand() % 9 + 1;
	question[1] = rand() % 9 + 1;
	while(question[0] == question[1]){
		question[1] = rand() % 9 + 1;
	}
	
	question[2] = rand() % 9 + 1;	
	while(question[2] == question[0] || question[2] == question[1]) {
		question[2] = rand() % 9 + 1;
	}
	
	printf("question: %d %d %d\n", question[0],question[1],question[2]);
	
	//rand() [1, 9]-> question array. unique(숫자 겹치지 않게) num!
	
	
	//step2
	int strike;
	int ball;
	int count;
	
	while (strike != 3) {
	//strike, ball, count???
		int answer[3];
		scanf("%d %d %d", &answer[0],&answer[1],&answer[2]);
		
		for(int i = 0; i<3; ++i){
			for(int j = 0; j < 3; ++j)
			if(question[i] == answer[j])
				
		}
	
	
	
	// #strike, #ball and print
	
	
	return 0;
	}
	
//-----------------------	

	
	
	
	
	
	
	
	
	
	
	
	
	
