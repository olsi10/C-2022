#include <stdio.h>

//포인터 변수와 간접연산자 *를 이용한 간접참조

int main(void) {

	int data = 100;
	char ch = 'A';
	int* ptrint = &data;
	char* ptrchar = &ch;

	printf("간접참조 출력 : %d %c\n", *ptrint, *ptrchar); //*ptrint = 변수 data와 같다, *ptrchar = 변수 ch와 같다.

	*ptrint = 200;
	*ptrchar = 'B';

	printf("직접참조 출력 : %d %c", data, ch);


	return 0;
}
