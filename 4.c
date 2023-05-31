#include <stdio.h>

int nod(int a, int b) {
return b == 0 ? a : nod(b, a % b);
}

void reduce_fraction(int *a, int *b) {
int nod2 = nod(*a, *b);

*a /= nod2;
*b /= nod2;
}

int main() {
int a = 14, b = 49;

reduce_fraction(&a, &b);

printf("%d / %d", a, b);

return 0;
}
