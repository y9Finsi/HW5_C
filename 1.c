#include <stdio.h>

int main() {
    int razmer, i;

    // вводим размер массива
    printf("введите размер массива: ");
    scanf("%d", &razmer);

    // создаем массив и заполняем его данными
    int array[razmer];
    for (i = 0; i < razmer; i++) {
        scanf("%d", &array[i]);
    }

    // меняем местами элементы в массиве до середины
    for (i = 0; i < razmer / 2; i++) {
        int musor = array[i];
        array[i] = array[razmer - i - 1];
        array[razmer - i - 1] = musor;
    }

    // выводим измененный массив
    printf("поменяный местами массивик: ");
    for (i = 0; i < razmer; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
