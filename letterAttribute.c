#include<stdio.h>

#define BOLD (0x01 << 0)
#define ITALIC (0x01 << 1)
#define SHADOW (0x01 << 2)
#define UL     (0x01 << 3)

//괄호를 묶어서 연산자 우선순위를 정해줘야, 정확한 출력을 할 수 있다.
//0x02 << 1,0x04 << 2, 0x08 << 3

int main(void)

{
	unsigned char attr;
	attr = attr ^ attr;
	attr = attr | BOLD;
	attr = attr | SHADOW + ITALIC;
	attr = attr & (~BOLD);
	
	printf("attr: 0x%02x\n", attr);
	return 0;
}
