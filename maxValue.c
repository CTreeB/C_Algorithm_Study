#include<stdio.h>

int main(void)
{
	//int num = 100 -> 변수초기화
	int nums[10] = {50, 30, 90, 30, 50, 80, 90, 100, 20, 10}; //초기화리스트
	
	int max = nums[0];
	
	for(int i =1; i < 10; ++i){
		if(max < nums[i]){
			max = nums[i];
		}/*else{
			max = max;
		}*/
	}
	
	printf("max: %d\n", max);
	return 0;
}
