#include <stdio.h>

int main(void) {

	int arr[10];
	int i;

	printf("�迭 �Է� : ");
	for (i = 0; i <= 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	//i = 5, �ټ� ��°���� �Ųٷ� �ֱ�
	printf("�迭 �Ųٷ�\n");
	for (i = 5; i >= 0; i--) {
		printf("%d ", arr[i]);
	}

	return 0;
}