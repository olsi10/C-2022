#include <stdio.h>
#define SIZE 11

int main(void) {

	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', '\0'}; // ****** \0�� ���ڿ��� ��ǥ��
	int index, i; //���� ��ġ
	int value; //������ ��

	printf("���� ��ġ : ");
	scanf_s("%d", &index);

	getchar();

	//��ǻ�� ó���ӵ��� Ű���� �Է¼ӵ� ���̸� �ؼ��ϱ� ���� Buffer �Է¹޾Ƽ� ó��
	
	printf("���� data : ");
	scanf_s("%c", &value);

	getchar();

	for (i = SIZE - 1; i > index; i--) {
		a[i] = a[i - 1];
	}
	
	a[SIZE - 1] = '\0';
	
	a[index] = value;
	
	printf("���԰��:%s\n", a);

	return 0;
}




