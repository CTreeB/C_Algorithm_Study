#include<stdio.h>

int main(void)
{
	int nums1[] = {1, 2, 3, 4, 5};
	int nums2[5];

	//nums2 = nums1;     //&nums2[0] = &nums1[0]; X
	//왼쪽에 상수가 있을 땐, 대입연산자를 사용할 수 없다.
	//조건문(FOR)으로 치환해서 각각의 엘리먼트의 주소값으로 접근해야한다.
	
	for(int i = 0; i < 5; ++i){
		nums2[i] = nums1[i];
	}
	
	for (int i = 0; i < 5; ++i){
		printf("%d ", nums2[i]);
	}
	
	printf("\n");
	return 0;
}
