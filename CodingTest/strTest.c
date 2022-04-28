#include <stdio.h>
#include <string.h>

int main(void) {

	char s1[7][10] = { "한국", "미국", "일본", "영국", "독일", "호주", "독일" };

//	int len = strlen(s1[7]);

	for (int i = 0; i < strlen(s1[7]); i++) {
	if (strcmp(s1[i], "독일") == 0) {
			printf("독일은 %d번째 있습니다.\n", i + 1);
		}
	}

	return 0;
}
