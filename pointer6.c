#include<stdio.h>

int main(void)
{
	void *p;
	
	int i = 100;
	p = &i;
	//*p = 200; X void  포인터는 타입캐스팅 후, 사용해야함
	*(int*)p = 200;
	
	printf("i : %d\n", i);
	
	double d = 3.14;
	p = &d;
	*(double*)p = 2.718;
	
	printf("d : %f\n", d);
	
	return 0;
}
