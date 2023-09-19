#include<stdio.h>

int main(void)
{
	int code;
	printf("asc code : ");
	scanf("%d", &code);
	
	int isTrue = (code >= 'A' && code <= 'Z');
	printf("code : %d ---- Big letter ASC code : %d\n", code, 	isTrue);
	return 0;
}

//A = 65 , Z = 90
