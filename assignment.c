#include<stdio.h>

int main(void)

{
	int a, b, c;
	a = 100;
	b = a;
	c = a + b;

	printf("%d %d %d\n", a, b, c);
	
	
	//100 = a; -> 잘 못된 표현
	//a + b  = c; -> 잘 못된 표현
	a = b = c = 100; //daisy-chain
	printf("%d %d %d\n", a, b, c);
	
	return 0;
}
