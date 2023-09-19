#include<stdio.h>

int main(void)
{
	int frameScores[11] = {0, };

	// 1 ~ 9 frame
	int scores[10][3] = {0, };
	for(int i = 1; i < 10; ++i) {
		printf("%d frame 1st cast : ", i);
		scanf("%d", &scores[i][1]);
		
		if (i >= 2 && scores[i-1][1] + scores[i-1][2] == 10 && scores[i-1][1] != 10) {
			int bonus = scores[i][1];
			frameScores[i-1] = frameScores[i-2] + 10 + scores[i][1];
			printf("%d frame Score : %d\n", i-1, frameScores[i-1]);
		} else if (i >=3 && scores[i-2][1] == 10 && scores[i-1][1] == 10) {
			int bonus = scores[i-1][1] + scores[i][1];
			frameScores[i-2] = frameScores[i-3] + 10 + bonus;
			printf("%d frame Score : %d\n", i-2, frameScores[i-2]);
		}
		
		if (scores[i][1] != 10) {
			printf("%d frame second cast : ", i);
			scanf("%d", &scores[i][2]);
			
			if (i >= 2 && scores[i-1][1] == 10) {
				int bonus = scores[i][1] + scores[i][2];
				frameScores[i-1] = frameScores[i-2] + 10 + bonus;
				printf("%d frame Score : %d\n", i-1, frameScores[i-1]);
			}
			
			if (scores[i][1] + scores[i][2] < 10){
				frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2];
				printf("%d frame Score : %d\n", i, frameScores[i]);
			}
		}
	}

		
		
		// calculate score
			
		// 2st cast. ? 1st cast != 10
//		if (frameScore[i] )
		// calculate score
	
	
	
	
	// 10 frame
	int score10[4] = {0, };
	printf("%d frame first cast : ",10);
	scanf("%d", &score10[1]);
	
	if (scores[9][1] + scores[9][2] == 10 && scores[9][1] != 10){
		frameScores[9] = frameScores[8] + 10 + score10[1];
		printf("%d frame Score: %d\n", 9, frameScores[9]);
		
	} else if (scores[8][1] == 10 && scores[9][1] == 10){
		frameScores[8] = frameScores[7] + 10 + scores[9][1] + score10[1];
		printf("%d frame Score : %d\n", 8, frameScores[8]);
	}
	
	printf("%d frame second cast : ", 10);
	scanf("%d", &score10[2]);
	
	if (scores[9][1] == 10){
		frameScores[9] = frameScores[8] + 10 + score10[1] + score10[2];
		printf("%d frame Score : %d\n", 9, frameScores[9]);
	}
	
	if (score10[1] + score10[2] < 10){
		frameScores[10] = frameScores[9] + score10[1] + score10[2];
		printf("%d frame Score : %d\n", 10, frameScores[10]);
	}else{
		
		printf("%d frame third cast : ", 10);
		scanf("%d", &score10[3]);
		
		frameScores[10] = frameScores[9] + score10[1] + score10[2] + score10[3];
		printf("%d frame Score : %d\n", 10, frameScores[10]);
	
	}
	return 0;
}
/*
#include <stdio.h>

typedef struct {
    int p1, p2;
    int score;
    int total;
    int bonus;
} Score;

void print_hit(int x, int y);

int main()
{
    int i, j;
    
    Score s[12] = {{0, }, };
    
    for (i = 1; i < 12; i++) {
        printf("%d회 1차 : ", i);
        scanf("%d", &s[i].p1);

        if (s[i].p1 < 10) {
            printf("%d회 2차 : ", i);
            scanf("%d", &s[i].p2);
        }

        if (i == 11)
            s[i].bonus = 0;
        else if (s[i].p1 == 10)
            s[i].bonus = 2;    // strike
        else if (s[i].p1 + s[i].p2 == 10)
            s[i].bonus = 1;    // spare
        else
            s[i].bonus = 0;
        
        s[i].score = s[i].p1 + s[i].p2; // 케이스 합산 - 나중에 토탈 낼때 사용

        if (s[i-1].bonus == 1)
            s[i-1].score += s[i].p1; // 전판 스페어 1case
        else if (s[i-1].bonus == 2 && s[i].bonus != 2 && i >= 3) // 전판 스트라이크 그리고 현재판 스페어 또는 노스페어
            s[i-1].score += s[i].p1 + s[i].p2;

        if (s[i-2].bonus == 2 && s[i-1].bonus == 2 && i >= 3) // 연속 스트라이크 case1
            s[i-2].score += s[i].p1 + s[i-1].p1 + s[i-1].p2; // 3프레임 이상 부터, 현 프레임 case1 부터 이전 프레임까지 합산한다.
        
        s[i].total = s[i-1].total + s[i].score; // 모두 합산 이후, 케이스 합산하기
        
        for (j = 1; j <= i; j++)
            s[j].total = s[j-1].total + s[j].score;
        
        for (j = 1; j < 12; j++)
            printf("   %2d회  ", j);
        printf("\n");
        
        for (j = 1; j <= i; j++)
            print_hit(s[j].p1, s[j].p2);
        printf("\n");
        
        for (j = 1; j <= i; j++)
            printf("   %3d   ", s[j].total);
        printf("\n");
        
        if (i == 10 && s[i].p1 + s[i].p2 < 10)
            break;
    }
 
    return 0;
}

void print_hit(int x, int y)
{
    char b = ' ';
 
    if (x == 10)
        b = 'X';
    else if (x + y == 10)
        b = '/';
    else if (x + y == 0)
        b = 'G';
 
    printf("  %2d %2d%c ", x, y, b);
}
*/
