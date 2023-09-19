#include<stdio.h>
//#include<string.h>
#include "string.h"


int main(void)
{
	char str1[] = "hello";
	char str2[10];
	
	printf("str1 len : %d\n", my_strlen(str1));
	
	my_strcpy(str2, str1); // 문자열 복사함, 배열 배열 복사함. str1 -> str2 로 복사
	
	printf("%s\n", str2);
	
	//str1 == str2 // same address value compare
	
	if(my_strcmp(str1, str2) == 0)   {
		printf("str1 and str2 are equal\n");
	}else {
		printf("str1 and str2 are not equal\n");
	}
	// 문자열 비교하고 0이면 두개 문자가 같다.
	
	char *title = "just the way you are";
	char *singer = "billy joel";
	char result[100];
	my_strcpy(result, title);
	my_strcat(result, "-");
	my_strcat(result, singer); //concatenation
	
	printf("result: %s\n", result);
	return 0;
}

/*
int main(void)
{
//	char buf[100];
//	char *name = buf;
//	char *name;
	char name[21];
	scanf("%20s", name);
	
	
	printf("%s", name);
	return 0;
}
*/


