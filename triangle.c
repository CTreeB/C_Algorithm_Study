/*
#include<stdio.h>

int main(void)
{
	double width;
	double height;
	double result;
	// int width, height;
	
	printf("bottom : ");
	scanf("%.1f", &bottom);
	printf("height : ");
	scanf("%.1f", &height);
	
	result = (bottom * height) / 2;
	
	printf("result : %lf\n", result);
	
	return 0;
}
내가 만든 코드*/

#include<stdio.h>

int main(void)

{
	int width, height;
	//scanf("%d", &width);
	//scanf("%d", &height);
	scanf("%d %d", &width, &height);

	double area = 1.0 / 2.0 * width * height;
	printf("area: %.1f\n", area);
	return 0;
}











