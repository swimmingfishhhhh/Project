#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    // 輸入三個整數
    printf("請輸入三個整數: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // 初始化最大和最小值
    largest = smallest = num1;

    // 判斷最大值
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    // 判斷最小值
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    // 輸出結果
    printf("最大值是: %d\n", largest);
    printf("最小值是: %d\n", smallest);

    return 0;
}
