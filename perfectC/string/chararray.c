#include <stdio.h>

int main(void) {

	//문자 선언, 출력
	char ch = 'A';
	printf("%c, %d\n", ch, ch); //A, 65 (아스키코드)

	//문자열 선언법1
	char java[] = { 'J', 'A', 'V', 'A', '\0'}; //배열 초기화 시 배열 크기는 지정하지 않는 것이 편리, 만일 지정한다면 마지막 문자인 '\0'을 고려하여 실제 문자 수보다 1크게 선언
	printf("%s\n", java);

	//문자열 선언법2
	char c[] = "C Language";
	printf("%s\n", c);

	//문자열 선언법3
	char csharp[5] = "C#";
	printf("%s\n", csharp);

	//문자열 배열에서 문자 출력
	printf("%c%c\n", csharp[0], csharp[1]);

	return 0;
}
