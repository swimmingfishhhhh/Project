#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a, b, c, BMI;

    printf("輸入身高(公分)與體重(公斤)\n");
    scanf("%f %f", &a, &b);
    a = a / 100;  // 將身高轉換為公尺

    BMI = b / (a * a);  // 計算 BMI
    printf("%f\n", BMI);

    // 將 BMI 乘以 10 並轉換為整數進行分類
    c = 10 * BMI;

    // 使用 if-else 來替代 switch
    if (c <= 184) {
        printf("Underweight\n");
    } else if (c <= 249) {
        printf("Normal\n");
    } else if (c <= 299) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }

    // 顯示 BMI 分類範圍
    printf("BMI VALUES\n");
    printf("Underweight:\tLess than 18.5 \nNormal:\t\tbetween 18.5 and 24.9 \nOverweight:\tbetween 25 and 29.9 \nObese:\t\t30 or greater\n");

    system("pause");
    return 0;
}

