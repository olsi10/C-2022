#include <stdio.h>

//포인터 변수에 저장할 특별한 초기값이 없는 경우 0번 주소값인 NULL로 초기화

int main(void) {

	int *ptr1, *ptr2, *ptr3, data = 10;
	ptr1 = NULL;

	printf("%p\n", ptr1);
	//초기값이 없어서 오류 발생
	//printf("%p", ptr2);
	printf("%d\n", data);
	return 0;
}
