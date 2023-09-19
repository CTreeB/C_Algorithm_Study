#include <stdio.h>

int main(void)
{
	int year;
	printf("input year : ");
	scanf("%d", &year);
	
	int isLeap = (( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0);
//int isLeap = (( year % 400 == 0 || year % 4 == 0 && year % 100 != 0); -> 400으로 나누면 확률이 떨어진다.
	printf("%d is a leap : %d\n", year, isLeap);
	return 0;
}
