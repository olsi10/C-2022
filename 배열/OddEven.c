#include <stdio.h>

int main(void) {

	int arr[10];
	int i;

	printf("�� �Է� : ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("¦��\n");
	for (i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}

	printf("\n");

	printf("Ȧ��\n");
	for (i = 0; i < 10; i++) {
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}