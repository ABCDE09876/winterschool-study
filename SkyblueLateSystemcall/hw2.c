#include <stdio.h>

int main22222(void) {
    int n, i;
    printf("입력할 정수의 개수: ");
    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &array[i]);
    }

    
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}