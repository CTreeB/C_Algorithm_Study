#include <stdio.h>

int sumArray(const int *pArr, int size)
//int sumArray(const int *pArr[], int size) -> 함수 배열 인자 뒤에 대괄호는 변수, 포인터이다. 배열과 배열은 복사가 되지않는다!
//int sumArray(const int *pArr[5], int size)                                                                                                                                                                                                                  
{
	int sum = 0;
	for (int i = 0; i < 5; ++i) {
		sum = sum + pArr[i];   //*(pArr + i)
	}
	return sum;
}



int main(void)
{
	
	int nums[10] = {50, 30, 100, 30, 50, 80, 90, 100, 20, 10};
	
//	int sum = 0;
//	for (int i=0; i < 10; ++i){
//		sum = sum + nums[i];     //sumArray(&nums[0])
//	}
	int sum = sumArray(nums + 5, 5);   //&nums[5] == nums + f
	printf("sum: %d\n", sum);
	return 0;
}

/*
1. nums + 5:

2. nums는 배열의 첫 번째 요소인 nums[0]을 가리키는 포인터입니다.
nums + 5는 nums에 5를 더한 값을 의미합니다. 따라서, nums + 5는 배열의 6번째 요소인 nums[5]를 가리키는 포인터가 됩니다.

3. 5:
5는 sumArray() 함수에 전달되는 두 번째 인자로, 계산할 요소의 개수를 나타냅니다. 즉, 배열의 6번째 요소부터 10번째 요소까지의 합을 계산합니다.

4. sumArray(nums + 5, 5):
sumArray() 함수를 호출하고, 인자로 nums + 5와 5를 전달합니다. 이는 sumArray() 함수가 배열 nums의 6번째 요소부터 10번째 요소까지의 합을 계산하도록 지시하는 것입니다.

5. int sum = sumArray(nums + 5, 5);:
sumArray(nums + 5, 5)의 반환값인 배열 일부 요소들의 합을 sum 변수에 저장합니다. sum 변수는 int형으로 선언되어야 합니다. */
