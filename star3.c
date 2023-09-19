#include<stdio.h>

int main(void)
{
	for(int i = 1; i <= 10; ++i){
		for(int j = 1; j <= i*2-1; ++j ){
		printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*
#include<stdio.h>

int main(void)
{
	int x;
	printf("input number: ");
	scanf("%d", &x);
	
	for(int row =1; x >= row; ++row){
		for(int space=1; x-row >= space; ++space){
			printf(" ");
			}
		for(int star=1; star <= (2*row)-1; ++star){
			printf("*");
		}
			printf("\n");
		}
	
	return 0;
}
*/







