#include <stdio.h>
#include <ctype.h> 
int main(void) {
    int tekushiy_simvol;
    int kol_vo_hex = 0;       
    int obshee_kol_vo = 0;    

    printf("Введите текст (для выхода нажмите Ctrl+D или Ctrl+Z + Enter):\n");

    while ((tekushiy_simvol = getchar()) != EOF) {
        obshee_kol_vo++; 

        if (isxdigit(tekushiy_simvol)) {
            kol_vo_hex++;
        }
    }
    printf("\nСтатистика\n");
    printf("Количество шестнадцатеричных цифр: %d\n", kol_vo_hex);
    printf("Общее количество символов: %d\n", obshee_kol_vo);

    return 0;
}