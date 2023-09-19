#include<stdio.h>
#include"date.h"
/*
void printDate(struct date d)
{
	printf("%d/%d/%d\n", d.year, d.month, d.day);
}
*/

void printDate(const struct date *pd)
{
	//printf("(%d/%d/%d)\n", (*pd).year, (*pd).month, (*pd).day);
	printf("(%d/%d/%d)\n", pd->year, pd->month, pd->day);
}

//연산자 우선순위 때문에 * 괄호에 넣어준다. 우선순위 1. . 2. *//
//구조체 자료 통해서 접근할땐 . 을 사용하고,포인터가 자료를 가질땐 -> 화살표 사용 //
