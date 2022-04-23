#include <stdio.h>

int main(void) {

	int i, j, k;
	char a[] = { 'P', 'r', 'a', 'c', 't', 'i', 'c', 'e', ' ', 'm', 'a', 'k', 'e', 's', ' ', 'p', 'e', 'r', 'f', 'e', 'c', 't', '.', '\0' };
	char b[5][10] = { {'A', '\0'},
						{'A', 'B', 'C', '\0'},
						{'A','B','C','D','E','\0'},
						{'A', 'B', 'C', 'D', 'E','F','G','\0'},
						{'A','B','C','D','E','F','G','H','I','\0'} };

	printf("배열 a\n");

	for (i = 0; i < sizeof(a); i++) {
		printf("%c", a[i]);
	}

	printf("\n");

	printf("a 역순\n");
	for(i = sizeof(a); i >= 0; i--) {
		printf("%c", a[i]);
	}

	printf("\n");

	printf("배열 b\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			printf("%c", b[i][j]);
		}
		printf("\n");
	}

	printf("\n배열 b에서 행과 열이 같은 값만 출력하기, 나머지 공백 출력\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (b[i] == b[j]) {
				printf("%c", b[i][j]);
			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}


	printf("배열 b를 세모 모양으로 출력하기\n");
	//추후 수정 예정 아직은 오류.
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5-i; j++) {
			printf(" ");
		}
		for (k = 1; k <= 2*i-1; k++) {
			printf("%c", b[i]);
		}
		printf("\n");
	}

	return 0;

	}
