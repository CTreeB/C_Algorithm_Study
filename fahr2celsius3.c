#include <stdio.h>

int main(void)
{
	int fahr;
	fahr = 100;
	int celsius1000 = 1000 * 5 * ( fahr - 32 ) / 9;
//int celsius1000 = 5000 * ( fahr - 32 ) / 9; 실행 시간 vs 컴파일 시간 -> 실행 시간을 줄여줌
	
	int left = celsius1000 / 1000;
	//int right = (celsius1000 - celsius1000 / 1000 * 1000 + 5) / 10;
	right = (celsius1000 % 1000 +5) / 10;
	
	printf("fahr:%d ----> celsius : %d.%d\n", fahr, left, right);
	return 0;
}
