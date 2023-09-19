
#include<stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int max, mid, min;
	if (a > b) {
		max = a;
		min = b;
	
	}else{
		max = b;
		min = a;
	}
	
	if (c > max){
		mid = max;
		max = c;
	}else if (c > min){
		mid = c;
	} else{
		mid = min;
		min = c;
	}
	printf("max: %d mid: %d min:%d\n", max, mid, min);
	return 0;
}









/*
#include<stdio.h>

int main(void)
{
	int a, b, c;
	printf("input number a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	
	int max, mid, min;
	if (a > b){
	if (c > a){
		printf("max: %d mid: %d min: %d\n", c, a, b);
	}else if (c > b){
//		/*c, a, b*///printf("max: %d mid: %d min: %d\n", a, c, b);
//	} else {
//		/*a,b,c*/ printf("max: %d mid: %d min: %d\n", a, b, c);
//	}
//	}else {
//	if(c > b){
//		printf("max: %d mid: %d min: %d\n", c, b, a);
//	} else if (c > a){
//	/*b, c, a*/printf("max: %d mid: %d min: %d\n", b, c, a);
//	} else {
//	/*b, a, c*/printf("max: %d mid: %d min: %d\n", b, a, c);
//	}
//	}
//	
//	return 0;
//} 
*/
















