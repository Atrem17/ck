#include "menu.h"
#include "authors.h"
#include "pravila.h"
#include "vubortemy.h"
#include "vuborx.h"
#include "vvod.h"
#define BACK_b 98
#define ESCAPE 27
#define BACK_TAB 9

int check_word(char *a, char *b) {
  if (strcmp(a, b) == 0) {
    return 1;
  } else {
    return 0;
  }
}
int end(int a) {
  if (a == ESCAPE) {
    return 1;
  } else {
    return 0;
  }
}
int backmenu(int a) {
  if (a == BACK_b) {
    return 1;
  } else {
    return 0;
  }
}
int back_tab(int a) {
  if (a == BACK_TAB) {
    return 1;
  } else {
    return 0;
  }
}

int menu() {
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
  printf("\n");
  vvod();
  return 0;
}

int print1() {
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
  printf("|    \"TAB\" - Главное меню    |");
  printf("\n");
  for (int i = 0; i < 30; i++) {
    printf("-");
  }
  printf("\n");
  vubortemy();
  return 0;
}

int print2(int a) {
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
  printf("\n|    \"TAB\" - Главное меню   |\n");
  for (int i = 0; i < 29; i++) {
    printf("-");
  }
  printf("\n");
  vuborx(a);
  return 0;
}
