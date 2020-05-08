#include "look.h"
#include "menu.h"
#include "vuborx.h"
#define BACK_b 98

void look(FILE* file, int a)
{
    char x;
    int i = 0;
    while (fscanf(file, "%s%s", w1[i].angl, w1[i].rus) != EOF) {
        printf("%s - %s\n", w1[i].angl, w1[i].rus);
        i++;
    }
    printf("\nНажмите \"b\" чтобы вернуться в меню, лбой другой символ для "
           "выхода из приложения ");
    scanf("%c%*c", &x);
    if (backmenu(x)) {
        system("clear");
        vuborx(a);
    } else {
        system("clear");
        printf("До новых встреч!\n");
        return;
    }
}
