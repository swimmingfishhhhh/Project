#include <stdio.h>

int main() {
    int number;

    // 輸入一個整數
    printf("請輸入一個整數: ");
    scanf("%d", &number);

    // 判斷奇偶
    if (number % 2 == 0) {
        printf("%d 是偶數\n", number);
    } else {
        printf("%d 是奇數\n", number);
    }

    return 0;
}
