#include <stdio.h>

// определение структуры с координатами точек
typedef struct {
    int x;
    int y;
} Koordinaty;

// функция для получения конечной точки
Koordinaty getFinishPoint(Koordinaty arr[], int n) {
    Koordinaty result = { 0 };

    for (int i = 0; i < n; i++) {
        result.x += arr[i].x; // складываем координаты X каждой точки
        result.y += arr[i].y; // складываем координаты Y каждой точки
    }

    return result;
}

int main() {
    Koordinaty array[] = { {1, 1}, {1, 1}, {10, 10}, {-15, -15} }; // массив точек
    Koordinaty result = getFinishPoint(array, 4); // получение конечной точки из массива и количества точек

    printf("%d %d\n", result.x, result.y); // вывод конечных координат на экран
    return 0;
}
