#ifndef DATE_H
#define DATE_H

struct date {
	int year;
	int month;
	int day;
};//일반적으로 date 정의는 헤더 파일에서 하고 쓸땐 선언 include해서 사용//

//void printDate(struct date d);
void printDate(const struct date *pd);

#endif
