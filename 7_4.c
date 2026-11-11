#include <stdio.h>
#include <stdio.h>

void swap(double *x, double *y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}

void sort_tri(double *a, double *b, double *c) {
    if (*a > *b) swap(a, b); // Если a > b, поменяй их
    if (*a > *c) swap(a, c); // Если a > c, поменяй их
    if (*b > *c) swap(b, c); // Если b > c, поменяй их
}
int main(void) {
    double x, y, z;

    printf("Введите три числа (x, y, z): ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("\nИсходные значения:\n");
    printf("x = %.2f, y = %.2f, z = %.2f\n", x, y, z);

    sort_tri(&x, &y, &z);

    printf("\nПосле сортировки по возрастанию:\n");
    printf("x = %.2f, y = %.2f, z = %.2f\n", x, y, z);

    return 0;
}