#include <stdio.h>
#include <string.h>

int main(void) {

	/*
	A
	A B
	A B C
	A B C D
	*/

	char ch = 65;
	int i, j;

	for (i = 0; i <= 4; i++ ) {
		for (j = 0; j < i; j++) {
			printf("%c", ch++);
		}
		ch = 65;
		printf("\n");
	}
	


	return 0;
}
