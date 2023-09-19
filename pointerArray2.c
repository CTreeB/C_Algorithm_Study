#include<stdio.h>

int main(void)
{
	int nums[] = {1, 2, 3, 4, 5};
	int *p;
	
	p = nums;

	for (int i = 0; i < 5; ++i) {
		printf("%d ", nums[i]);
	}
       printf("\n");

	for (int i = 0; i < 5; ++i) {
		printf("%d ", *(nums + i));
	}
	printf("\n");
	
	for (int i = 0; i < 5; ++i) {
		printf("%d ", *(p + i));
	}
	printf("\n");
	
	for (int i = 0; i < 5; ++i) {
		printf("%d ", (p[i]));
	}
	printf("\n");
	
	return 0;
}

/*배열과 포인터 선언:

1. int형 배열 nums를 선언하고 초기값으로 1, 2, 3, 4, 5를 할당합니다.
int형 포인터 p를 선언합니다.

2.포인터에 배열 주소 할당:
p에 nums의 시작 주소를 할당합니다. 이로써 p는 nums 배열의 첫 번째 요소를 가리		키게 됩니다.

3. 첫 번째 반복문:
for 루프를 사용하여 nums 배열의 요소들을 인덱스를 통해 직접 접근하여 출력합니다.
nums[i]는 nums 배열의 i번째 요소를 나타냅니다.

3. 두 번째 반복문:
for 루프를 사용하여 포인터 산술을 이용하여 nums 배열의 요소들을 출력합니다.
*(nums + i)는 nums 포인터에 i를 더한 주소의 값을 역참조하여 nums 배열의 i번째 요소를 나타냅니다.

4. 세 번째 반복문:
for 루프를 사용하여 포인터 산술을 이용하여 p가 가리키는 주소의 값을 출력합니다.
*(p + i)는 p 포인터에 i를 더한 주소의 값을 역참조하여 nums 배열의 i번째 요소를 나타냅니다.

5. 네 번째 반복문:
for 루프를 사용하여 배열 인덱스를 이용하여 p가 가리키는 배열의 요소들을 출력합니다.
(p[i])는 p 포인터를 배열처럼 인덱스를 사용하여 i번째 요소를 나타냅니다.*/
