#include "authors.h"
#include "menu.h"
#include "vvod.h"

void authors()
{
    setlocale(LC_ALL, "UTF-8");
    char a = 0;
    printf("Приложение разработали:\nМакаров Артём Александрович\nВахов "
           "Дмитрий "
           "Павлович\nСтуденты группы ИП-911\nНовосибирск, 2020\n");
    printf("Нажмите \"m\", чтобы вернуться в главное меню, любой другой "
           "символ "
           "для выхода из приложения:\n");
    scanf("%c%*c", &a);
    if (back_m(a)) {
        system("clear");
        vvod();
    } else {
        system("clear");
        printf("До новых встреч!\n");
        return;
    }
}
