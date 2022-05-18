#include <stdio.h>

//변수를 각각 선언하여 값을 저장하고, 다시 그 변수의 주소를 저장하기 위해 자료형 포인터 변수를 선언해서 주소값과 저장값을 저장한 후 주소값과 저장값을 출력하여 알아보세요.

int main(void) {

	char c = '@';
	char *pc = &c;
	int m = 100;
	int *pn = &m;
	double x = 5.83;
	double *px = &x;

	printf("변수명\t주소명\t저장값\n");
	printf("==================================\n");

	printf("c\t%p\t%c", pc, c);
	printf("\nm\t%p\t%d", pn, m);
	printf("\nx\t%p\t%f", px, x);
	
	

	return 0;
}
