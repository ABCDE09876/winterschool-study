#include <stdio.h>

int main(void) {
    int n, i,sum;
    printf("입력할 정수의 개수: ");
    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &array[i]);
      sum += array[i];
    }
    printf("합= %d", sum-1);

    
}