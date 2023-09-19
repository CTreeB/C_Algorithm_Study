#include<stdio.h>

int main(void)
{
	//int sum = 0;
	long long sum = 0LL;
	
	int i = 1;
	while( i <= 1000000) {
		sum = sum + i;
		++i;
	}
	
	int i = 1;
	while(i <= 100000){
		sum = sum + i + i + 1;
		i += 2;//i = i + 2;
	}
	//코드를 반으로 줄였다. 코드 스프레드, 1개씩 더할 것을 2개씩 더하는 것으로 수정
	printf("sum[1, 1000000] : %lld\n", sum);
	return 0;
}

