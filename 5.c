
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int znacheniya[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &znacheniya[i][j]);
        }
    }

    int max_sum=0, min_sum=0, max_ind=-1, min_ind=-1;
    for(int j=0; j<m; j++) {
        int sum=0;
        for(int i=0; i<n; i++) {
            sum += znacheniya[i][j];
        }
        max_ind = (max_ind==-1 || sum>max_sum) ? j : max_ind;
        max_sum = (max_ind==j) ? sum : max_sum;
        min_ind = (min_ind==-1 || sum<min_sum) ? j : min_ind;
        min_sum = (min_ind==j) ? sum : min_sum;
    }

    for(int i=0; i<n; i++) {
        int musor = znacheniya[i][max_ind];
        znacheniya[i][max_ind] = znacheniya[i][min_ind];
        znacheniya[i][min_ind] = musor;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d ", znacheniya[i][j]);
        }
        printf("\n");
    }

    return 0;
}
