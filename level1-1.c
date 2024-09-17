#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char name;
    int a, b, c;

    printf("现在是摆放货物的时间\n请输入货品的名称（使用大写字母A-Z来表示）,通道号，单价，货物的数目。例如（A 3 7 5): ");
    scanf(" %c %d %d %d", &name, &a, &b, &c);

    printf("%d:", a);
    for (int i = 0; i < c; i++) {
        printf("%c", name);
    }
    printf(" %d\n", b);

    return 0;
}