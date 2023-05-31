#include <stdio.h>

typedef struct {
    int x;
    int y;
} Koordinaty;

Koordinaty getFinishPoint(Koordinaty arr[], int n) {
    Koordinaty result = { 0 };

    for (int i = 0; i < n; i++) {
        result.x += arr[i].x;
        result.y += arr[i].y;
    }

    return result;
}

int main() {
    Koordinaty array[] = { {1, 1}, {1, 1}, {10, 10}, {-15, -15} };
    Koordinaty result = getFinishPoint(array, 4);

    printf("%d %d\n", result.x, result.y);
    return 0;
}
