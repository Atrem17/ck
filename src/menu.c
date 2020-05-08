#include "menu.h"
#include "authors.h"
#include "pravila.h"
#include "vubortemy.h"
#include "vuborx.h"
#include "vvod.h"
#define BACK_b 98
#define EXIT_z 122
#define BACK_m 109

int check_word(char* a, char* b)
{
    if (strcmp(a, b) == 0) {
        return 1;
    } else {
        return 0;
    }
}
int end(int a)
{
    if (a == EXIT_z) {
        return 1;
    } else {
        return 0;
    }
}
int backmenu(int a)
{
    if (a == BACK_b) {
        return 1;
    } else {
        return 0;
    }
}
int back_m(int a)
{
    if (a == BACK_m) {
        return 1;
    } else {
        return 0;
    }
}

void menu()
{
    setlocale(LC_ALL, "UTF-8");
    for (int i = 0; i < 28; i++) {
        printf("-");
    }
    printf("\n|       0 - Правила        |\n");
    for (int i = 0; i < 28; i++) {
        printf("-");
    }
    printf("\n|      1 - Выбор темы      |\n");
    for (int i = 0; i < 28; i++) {
        printf("-");
    }
    printf("\n|        2 - Автроы        |\n");
    for (int i = 0; i < 28; i++) {
        printf("-");
    }
    printf("\n|        3 - Выход         |\n");
    for (int i = 0; i < 28; i++) {
        printf("-");
    }
    printf("\n");
    printf("Пожалуйста, выберите номер из меню (0, 1, 2, 3): ");
}

void print1()
{
    setlocale(LC_ALL, "UTF-8");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|         0 - Цвета          |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|         1 - Спорт          |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|         2 - Напитки        |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|         3 - Еда            |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|       4 - Транспорт        |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|         5 - Семья          |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|   6 - Дни недели, месяцы   |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|        7 - Интерьер        |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|        8 - Животные        |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|        9 - Профессии       |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|     \"m\" - Главное меню     |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("|         \"z\" - Выход        |");
    printf("\n");
    for (int i = 0; i < 30; i++) {
        printf("-");
    }
    printf("\n");
    printf("Пожалуйста, выберите номер или букву из меню (от 0 до 9; или "
           "\"m\", или \"z\": ");
}

void print2()
{
    setlocale(LC_ALL, "UTF-8");
    for (int i = 0; i < 29; i++) {
        printf("-");
    }
    printf("\n|    1 - Проверка знаний    |\n");
    for (int i = 0; i < 29; i++) {
        printf("-");
    }
    printf("\n| 2 - Просмотр слов из темы |\n");
    for (int i = 0; i < 29; i++) {
        printf("-");
    }
    printf("\n|     3 - Назад к темам     |\n");
    for (int i = 0; i < 29; i++) {
        printf("-");
    }
    printf("\n|        4 - Выход          |\n");
    for (int i = 0; i < 29; i++) {
        printf("-");
    }
    printf("\n|     \"m\" - Главное меню    |\n");
    for (int i = 0; i < 29; i++) {
        printf("-");
    }
    printf("\n");
    printf("Пожалуйста, выберите номер или букву из меню (1, 2, 3, 4; или "
           "\"m\"): ");
}
