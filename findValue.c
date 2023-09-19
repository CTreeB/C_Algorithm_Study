#include<stdio.h>

int main(void)
{
	//int num = 100 -> 변수초기화
	int nums[10] = {50, 30, 90, 30, 50, 80, 90, 100, 20, 10}; //초기화리스트
	
	int value;
	printf("input value: ");
	scanf("%d",&value);
	
	int i;
	
	for(i = 0; i < 10; ++i){
		if(value == nums[i]){
		break;
		}
	}
	
	if(i == 10) {
		printf("%d is not found\n", value);
	}else{
		printf("%d is found index: %d\n",value, i);
	}
	return 0;
}
