
#include <stdio.h>

struct Person {
    int age;
    char name[100];
};

float srednii_vozrast(struct Person ludi[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ludi[i].age;
    }
    return (float)sum / n;
}

int main() {
    struct Person ludi[7] = {
        {17, "Богдан"},
        {17, "Федя"},
        {16, "Тима"},
        {17, "Аня"},
        {18, "Полшишкин"},
        {17, "Матюха"},
        {176, "Леша"}
        
    };
    float srednii = srednii_vozrast(ludi, 3);
    printf("Srednii vozrast: %f\n", srednii);
    return 0;
}
