#include<stdio.h>

int main(void)
{
	int a = 0x12345678;
	//int *p;
	
	//p = &a;
	char *p;
	//p = static_cast<char*>(&a);
	p = reinterpret_cast<char *>(&a);
	printf("*p : 0x%x\n", *p);
	return 0;
}
