#include<stdio.h>

int main(void)
{
	//int num = 100 -> 변수초기화
	int nums[10] = {10, 20, 70, 30, 50, 80, 90, 100, 20, 10}; //초기화리스트
	
	//sorting
	for (int i = 9; i >= 0 + 1; --i){
		for(int j=0; j<i; ++j){
		if(nums[j] > nums[j+1]){
			int tmp = nums[j];
			nums[j] = nums[j+1];
			nums[j+1] = tmp;
		}
		}
	}
	
	for(int i = 0; i < 10; ++i){
		printf("%d ", nums[i]);
		}
	printf("\n");
	return 0;
}
