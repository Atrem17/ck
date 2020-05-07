#include "look.h"
#include "menu.h"
#define ESCAPE 27

void look(FILE *file, int a) {
  int x;
  int i = 0;
  while (fscanf(file, "%s%s", w1[i].angl, w1[i].rus) != EOF) {
    printf("%s - %s\n", w1[i].angl, w1[i].rus);
    i++;
  }
  printf("Нажмите \"b\" чтобы вернуться в меню, \"ESC\" для выхода из "
         "приложения ");
  do {
    x = getchar();
    if (backmenu(x)) {
      system("cls");
      print2(a);
    }
  } while (x != ESCAPE);
  system("cls");
  printf("До новых встреч!\n");
  return;
}
