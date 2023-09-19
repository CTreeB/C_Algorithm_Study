#include<stdio.h>

int main(void)

{
	int man, woman;
	printf("man? woman?: ");
	scanf("%d %d", &man, &woman);
	
	//double manRatio = 100.0*man / (man + woman);
	double manRatio = (double)man / (man + woman) * 				(double)100;
	//double womanRatio = 100.0*woman / (man + woman);
	double womanRatio = (double)woman / (man + woman) * 100;
	printf("manRatio: %.2f%%\nwomanRatio: %.2f%%\n", manRatio, womanRatio);

	return 0;
}



{
int man, woman;
scanf("%d %d", &man, &woman);

//1. double man, woman;

//2. double manRatio = 100.0*man / (man + woman);
//2. double womanRatio = 100.0*woman / (man + woman);

//3. 1.0*double manRatio = 100.0*man / (man + woman);

printf("manRatio: %.2f%%\nwomanRatio: %.2f%%\n", manRatio, womanRatio);

	return 0;
	}

