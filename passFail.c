#include<stdio.h>

int main(void)

{
	int num;
	printf("How was your score?: ");
	scanf("%d", &num);
	
	int pass = num >= 60;
	printf("%d\n", pass);
	return 0;
}

