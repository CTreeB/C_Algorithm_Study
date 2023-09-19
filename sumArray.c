#include<stdio.h>

int main(void)
{
	//int num = 100 -> 변수초기화
	int nums[10] = {50, 30, 100, 30, 50, 80, 90, 100, 20, 10}; //초기화리스트
	
	int sum = 0;
	for (int i=0; i < 10; ++i){
		sum = sum + nums[i];
	}
	
	printf("sum: %d\n", sum);
	return 0;
}








