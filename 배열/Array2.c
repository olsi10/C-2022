#include <stdio.h>
#define SIZE 11

int main(void) {
    char a[] = { 'A','B','C','D','E','F','G','H','I','J','\0' };
    int index, i;

    printf("삭제 위치:");
    scanf_s("%d", &index);
    
    getchar();
    
    for (i = index; i < SIZE - 1; i++) {
        a[i] = a[i + 1];
    }

    a[SIZE - 1] = '\0'; 
//  a[SIZE - 1] = 0;
   
    printf("삽입 결과 :%s\n", a);

    printf("\n");

    return 0;
}