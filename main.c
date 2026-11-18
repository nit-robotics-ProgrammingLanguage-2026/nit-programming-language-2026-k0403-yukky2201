#include <stdio.h>

int main(void) {
    /* 課題0403: 入力されたintのデータを1.08倍した結果を整数(int)として表示するプログラムを書け．intへの変換には「キャスト演算(前回スライドを参照のこと)」を使用せよ */
    int input;
    double temp;
    int result;

    scanf("%d", &input);
    temp = input * 1.08;
    result = (int)temp;
    printf("%d\n", result);
    return 0;
}
