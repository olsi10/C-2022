#include <stdio.h>

int main(void) {
	int score[4];
	int i;

	printf("5�� �л��� ���� �Է� : ");

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &score[i]);
		
	}

	for (i = 0; i < 5; i++) {
		printf("%d��° �л��� ������ %d�� �Դϴ�.\n", i + 1, score[i]);
	}

	return 0;
}