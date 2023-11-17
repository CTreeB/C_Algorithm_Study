#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int question[3];
	int strike;
	int ball;
	int count = 0;

	srand(time(NULL));

	// 1부터 9까지의 난수를 생성하여 question 배열에 저장 (중복 없이)
	question[0] = rand() % 9 + 1;
	question[1] = rand() % 9 + 1;
	while (question[0] == question[1]) {
		question[1] = rand() % 9 + 1;
	}
	question[2] = rand() % 9 + 1;
	while (question[2] == question[0] || question[2] == question[1]) {
		question[2] = rand() % 9 + 1;
	}

	printf("question: %d %d %d\n", question[0], question[1], question[2]);

	while (strike != 3) {
		int answer[3];
		strike = ball = 0;

		// 사용자로부터 3개의 숫자를 입력 받음
		printf("Enter your answer: ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);

		// 입력한 숫자와 정답을 비교하여 strike와 ball을 계산
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				if (question[i] == answer[j]) {
					if (i == j) {
						strike++;  // 같은 위치에 같은 숫자가 있으면 strike 증가
					} else {
						ball++;  // 다른 위치에 같은 숫자가 있으면 ball 증가
					}
				}
			}
		}

		// strike와 ball 수를 출력
		printf("Strike: %d, Ball: %d\n", strike, ball);

		count++;  // 시도 횟수 증가
	}

	printf("Congratulations! You've guessed the correct numbers in %d attempts.\n", count);

	return 0;
}

