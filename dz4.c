#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    int x, y;
    setlocale(LC_ALL, "Rus");
    x = 1;
    y = 0;
    if (x != y) {
        printf("Дверь открывается\n");
    }
    else {
        printf("Ошибка\n");
    }
    return 0;
}