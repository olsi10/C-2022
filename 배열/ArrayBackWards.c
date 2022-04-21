#include <stdio.h>

int main(void) {

	int arr[10];
	int i;

	printf("배열 입력 : ");
	for (i = 0; i <= 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	//i = 5, 다섯 번째부터 거꾸로 넣기
	printf("배열 거꾸로\n");
	for (i = 5; i >= 0; i--) {
		printf("%d ", arr[i]);
	}

	return 0;
}