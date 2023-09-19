//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>


//int main(void)
//{
//	srand(time(NULL));
	
//	int a = rand() % 45 + 1, b = rand() % 45 + 1, c = rand() % 45 + 1, d = rand() % 45 + 1, e = rand() % 45 + 1, f = rand() % 45 + 1, g = rand() % 45 + 1;
	
//	while(  (a != b) && (a != c) && (a != d) && (a != e) && (a != f) && (a != g) &&/*a*/ 
//		 (b != c) && (b != d) && (b != e) && (b != f) && (b != g) &&/*b*/
//		 (c != d) && (c != e) && (c != f) && (c != g) &&/*c*/
//		 (d != e) && (d != f) && (d != g) && /*d*/
//		 (e != f) && (e != g) && /*e*/
//		 (f != g))  {
//	printf("Lotto Number: %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
//	break;
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{     
	int num[7];   
	srand(time(NULL));
	
	//create random number//
	
	num[0]= rand()%45+1;
	for(int i = 1 ; i <7 ; ++i){
		num[i] =rand()%45+1;
		for(int j= 0; j<i; ++j){
			while(num[i] == num[j]){ 
				num[i]=rand()%45+1; 
			}  
		}
	}
	
	printf("lotto num:%d %d %d %d %d %d\n", num[0],num[1],num[2],num[3],num[4],num[5]); printf("%d\n",num[6]);
       return 0;
             }























	
