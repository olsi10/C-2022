#include <stdio.h>

int main(void) {
	int score[4];
	int i;

	printf("5명 학생의 점수 입력 : ");

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &score[i]);
		
	}

	for (i = 0; i < 5; i++) {
		printf("%d번째 학생의 점수는 %d점 입니다.\n", i + 1, score[i]);
	}

	return 0;
}