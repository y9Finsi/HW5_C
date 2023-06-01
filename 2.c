
#include <stdio.h>

struct Person {
    int age;
    char name[100];
};

float srednii_vozrast(struct Person ludi[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ludi[i].age;  // Вычисляем сумму возрастов всех людей в массиве ludi
    }
    return (float)sum / n; // и возвращаем средний возраст всех людей в массиве ludi

}

int main() {
    // Создаем массив с данными о людишках (студентах сириуса)
    struct Person ludi[11] = {
        {17, "Богдан"},
        {17, "Федя"},
        {16, "Тима"},
        {17, "Аня"},
        {18, "Полшишкин"},
        {17, "Матюха"},
        {176, "Леша"},
        {16, "Полина"},
        {17, "Дима"},
        {16, "Егор"},
        {16, "Мукасяков"}
    };
    
    float srednii = srednii_vozrast(ludi, 11); // Вызываем функцию srednii_vozrast и передаем ей массив ludi и его размер. Результат функции сохраняем в переменной srednii
    printf("Srednii vozrast: %f\n", srednii); // Выводим на экран средний возраст всех людей в массиве ludi
    return 0;
}
