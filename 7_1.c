#include <stdio.h>
#include <ctype.h>

int main(void) {
    int tekushiy;
    int predydushiy_byl_probel = 0; 

    printf("Введите текст (Ctrl+D / Ctrl+Z для выхода):\n");
    while ((tekushiy = getchar()) != EOF) {
        if (isspace(tekushiy)) {
            if (!predydushiy_byl_probel) {
                putchar(' ');
                predydushiy_byl_probel = 1;
            }
        } else {
            putchar(tekushiy);
            predydushiy_byl_probel = 0;
        }
    }
    return 0;
}