
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int znacheniya[n][m]; // создание двумерного масива размера n на m 

    // заполняем массив
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &znacheniya[i][j]);
        }
    }

    // находим столбец с максимальной и минимальной суммой значений 
    int max_sum=0, min_sum=0, max_ind=-1, min_ind=-1;
    for(int j=0; j<m; j++) {
        int sum=0;
        for(int i=0; i<n; i++) {
            sum += znacheniya[i][j];
        }
        max_ind = (max_ind==-1 || sum>max_sum) ? j : max_ind; // проверка на новый максимум 
        max_sum = (max_ind==j) ? sum : max_sum; // обновление максиальной суммы 
        min_ind = (min_ind==-1 || sum<min_sum) ? j : min_ind; // проверка на ноый минимум
        min_sum = (min_ind==j) ? sum : min_sum; // обновление минимальной суммы 
    }
    
    // меняем местами элементы столбца с максимальной и минимальной суммой 
    for(int i=0; i<n; i++) {
        int musor = znacheniya[i][max_ind];
        znacheniya[i][max_ind] = znacheniya[i][min_ind];
        znacheniya[i][min_ind] = musor;
    }
    
    // выводим измененный массив
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d ", znacheniya[i][j]);
        }
        printf("\n");
    }

    return 0;
}
