#include<stdio.h>

int main(void)

{
	int num;
	printf("input num: ");
	scanf("%d", &num);
	
	int isOdd = num % 2 == 1;
	printf("%d is a odd : %d\n",num, isOdd);
	return 0;
}
