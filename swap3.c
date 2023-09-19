#include<stdio.h>
//전역변수를 이용한, 스왑
int a;
int b;

void swap(void)
{
	int tmp = a;
	a = b;
	b = tmp;
}


int main(void)
{
	a = 100;
	b = 200;
	
	printf("a : %d b : %d\n", a, b );
	
	swap();
	
	printf("a : %d b : %d\n", a, b );

	return 0;
}


