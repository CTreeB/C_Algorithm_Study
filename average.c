/* #include<stdio.h>

int main(void)
{
	double 국어;
	double 수학;
	double 영어;
	double 합계;
	double 평균;
	
	printf("국어 : ");
	scanf("%lf", &국어);
	printf("수학 : ");
	scanf("%lf", &수학);
	printf("영어 : ");
	scanf("%lf", &영어);
	
	
	
	합계 = (국어 + 수학 + 영어);
	
	평균 = (국어 + 수학 + 영어) / 3;
	
	
	printf("합계 : %.2f\n 평균 : %.2f\n" , 합계, 평균);
	
	return 0;
}*/

#include<stdio.h>

int main(void)

{
	int kor, eng, mat;
	printf("input kor eng mat : ");
	scanf("%d %d %d", &kor, &eng, &mat);
	
	int sum = kor + eng + mat;
	
	//double average = sum / 3.0;
	double average = (double) sum / (double) 3.0;
	//->섬은 더블 값을 가진다
	printf("sum : %d\taverage: %.2f\n", sum, average);

	return 0;
}




















