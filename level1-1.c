#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char name;
    int a, b, c;

    printf("�����ǰڷŻ����ʱ��\n�������Ʒ�����ƣ�ʹ�ô�д��ĸA-Z����ʾ��,ͨ���ţ����ۣ��������Ŀ�����磨A 3 7 5): ");
    scanf(" %c %d %d %d", &name, &a, &b, &c);

    printf("%d:", a);
    for (int i = 0; i < c; i++) {
        printf("%c", name);
    }
    printf(" %d\n", b);

    return 0;
}