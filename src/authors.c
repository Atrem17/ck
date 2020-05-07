#include "authors.h"
#include "menu.h"

void authors() {
  setlocale(LC_ALL, "UTF-8");
  int a = 0;
  printf("Приложение разработали:\nМакаров Артём Александрович\nВахов Дмитрий "
         "Павлович\nСтуденты группы ИП-911\nНовосибирск, 2020\n");
  printf("Нажмите \"TAB\", чтобы вернуться в главное меню, любой другой символ "
         "для выхода из приложения:\n");
  a = getchar();
  if (back_tab(a)) {
    system("cls");
    menu();
  } else {
    system("cls");
    printf("До новых встреч!\n");
  }
}
