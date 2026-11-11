#include <stdio.h>
#include <math.h>

int prostoe_iter(int n) {
    if (n <= 1) return 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}
int prostoe_rec(int n, int i) {
    if (n <= 1) return 0;
    if (i * i > n) return 1; 
    if (n % i == 0) return 0;     

    return prostoe_rec(n, i + 1);
}

int main(void) {
    int chislo;
    
    printf("Введите число для проверки на простоту: ");
    if (scanf("%d", &chislo) != 1) {
        printf("Ошибка ввода!\n");
        return 1;
    }

    int rez_iter = prostoe_iter(chislo);
    
    int rez_rec = prostoe_rec(chislo, 2);

    printf("\n--- Результаты ---\n");
    if (rez_iter) printf("Итеративно: Число %d — ПРОСТОЕ\n", chislo);
    else          printf("Итеративно: Число %d — СОСТАВНОЕ (или 0/1)\n", chislo);

    if (rez_rec)  printf("Рекурсивно: Число %d — ПРОСТОЕ\n", chislo);
    else          printf("Рекурсивно: Число %d — СОСТАВНОЕ (или 0/1)\n", chislo);

    return 0;
}