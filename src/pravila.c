#include "pravila.h"
#include "menu.h"

void pravila() {
  setlocale(LC_ALL, "UTF-8");
  int a;
  printf(
      "1. Перед тем как приступить к тесту рекомендуем ознакомиться со словами "
      "из выбранной темы\n2. Слова в которых нужен пробел вводить через нижнее "
      "подчеркивание\n3. Слова в которых нужен дефис вводить через дефис\n");
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
