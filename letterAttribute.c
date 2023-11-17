#include<stdio.h>

define BOLD (0x01 << 0)
#define ITALIC (0x01 << 1)
#define SHADOW (0x01 << 2)
#define UL     (0x01 << 3)

int main(void)

{
	unsigned char attr, attr1, attr2, attr3, attr4, attr5;
	attr = attr ^ attr;
	attr1 = attr | BOLD;
	attr2 = attr | ITALIC;
	attr3 = attr | SHADOW;
	attr4 = attr | SHADOW + ITALIC;
	attr5 = attr & (~BOLD);

	printf("attr: 0x%02x\n", attr);
	printf("attr: 0x%02x\n", attr1);
	printf("attr: 0x%02x\n", attr2);
	printf("attr: 0x%02x\n", attr3);
	printf("attr: 0x%02x\n", attr4);
	printf("attr: 0x%02x\n", attr5);

	return 0;
}
