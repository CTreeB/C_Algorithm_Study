
static int seed;			// func. definition, 위 코드에서 static int seed;는 정적 전역 변수로서, seed라는 이름의 변수를 선언하고 있습니다. 이 변수는 해당 파일 내에서만 접근 가능하며, 다른 파일에서는 접근할 수 없습니다. -> main.c 파일에서 함수를 수정할 수 없도록 하기 위해서, static 정적 전역 변수를 사용함.

void my_srand(int s)
{
	seed = s;
}

int my_rand(void)
{
	//seed_ = seed_ * (복잡한 연산)
	seed = seed * 1103515245 + 12345;
               
       return((unsigned)(seed/65536) % 32768);
}
