#include<stdio.h>

int main(void)
{
	char name[21];
//	char buf[100];
//	char *name;	//포인터가 가리키는 대상이 없다.
//	name = buf;

	scanf("%20s ", name);	//scanf("%s", &name[0]);
				//name의 주소의 첫번째 값을 받아서 %s에 저장함
				//-> 크기가 21 이닌깐 %20으로 받아야한다 마지막자리는 아스키 코드 0 제어문자 자리이다.
	printf("%s\n", name);	//printf("%s", &name[0]);
	return 0;		//name의 주소값을 받아와서 %s 로 출력해줌 아스키 코드 0을 만날때 까지, 출력해줌
}
