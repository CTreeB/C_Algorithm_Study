#include <stdio.h>

int main(void)
{
	int year;
	printf("input year : ");
	std::cin >> year;


	if((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0){
	printf("%d is a leap\n", year);
	}else {
	printf("%d is a ordinary\n", year);
	}

	printf("%d is a %s year\n", year, ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? "leap" : "ordinary");

	return 0;
}
