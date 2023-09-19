#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
	int size;
	scanf("%d", &size);
	
	//malloc() / free()
//	int *pArr;
//	pArr = malloc(size*sizeof(int)); //heap 상에 할당된 메모리공간에 접근할땐, 포인터를 사용한다.
	int *p = malloc(sizeof(int) * size);
	assert(p /* !=NULL */); // 디버깅 목적 1(참)이면 진행, 0(거짓)이면 NULL값을 출력시키고 종료시킴
	
	for (int i = 0; i < size; ++i) {	//포인터를 배열 식으로, 배열을 포인터식으로 사용할 수 있다.
		p[i] = i;
	}
	
	for (int i = 0; i < size; ++i) {
		printf("%d\n", p[i]);
	}
	printf("\n");
	
	free(p);	//free 를 사용하지 않으면 메모리 누수 발생
	return 0;
}
