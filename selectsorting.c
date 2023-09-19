#include<stdio.h>

int main(void)
{
	//int num = 100 -> 변수초기화
	int nums[10] = {50, 30, 90, 30, 50, 80, 90, 100, 20, 10}; //초기화리스트
	
	//sorting
	for(int i = 0; i < 10 - 1; ++i){
		for(int j = i + 1; j<10; ++j){
			if(nums[i] > nums[j]){
			int tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
			}
		}
	}

	for(int i = 0; i < 10; ++i){
		printf("%d ", nums[i]);
		}
	printf("\n");
	return 0;
}
