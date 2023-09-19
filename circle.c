#include<stdio.h>
//#define PI 3.141592 메크로 상수 -> PI = 3.141592

int main(void)

{
	int radius;
	printf("input radius : ");
	scanf("%d", &radius);
	
	double area = PI * radius * radius;
	
	printf("area: %.2f\n", area);
	return 0;
}
