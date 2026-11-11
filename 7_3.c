#include <stdio.h>

double kub_summy(double a, double b) {
    return (a + b) * (a + b) * (a + b);   
}

int main(void) {
    double a, b;
    printf("Введите пары чисел a и b (для выхода нажмите Ctrl+Z + Enter):\n");

    while (scanf("%lf %lf", &a, &b) == 2) {
        
        double rezultat = kub_summy(a, b);

        printf("Куб суммы (%.2f + %.2f)^3 = %.4f\n", a, b, rezultat);
        
        printf("Введите следующую пару: ");
    }
    printf("\nПрограмма завершена.\n");
    return 0;
}