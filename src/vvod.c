#include "authors.h"
#include "menu.h"
#include "pravila.h"
#include "vvod.h"
#define ESCAPE 27
#define ENTER 13
#define BACKSPESE 8
#define SIZE 2
#define MAX2 "2"

bool in_range2(char *buff, const char *max) {
  int lb = strlen(buff), lm = strlen(max);
  return (lb != lm) ? (lb < lm) : strcmp(max, buff) >= 0;
}
bool input2(const char *title) {
  char key, buffer[SIZE];
  char *ptr = buffer;
  memset(buffer, 0, sizeof(buffer));
  do {
    printf("\r%s%s", title, buffer);
    key = getch();
    if (key > 0x2F && key < 0x3A) {
      *ptr = key;
      if (in_range2(buffer, MAX2))
        ptr++;
      else
        *ptr = 0;
      continue;
    }
    if (key == BACKSPESE && ptr > buffer) {
      *--ptr = 0;
      printf("\b ");
      continue;
    }
    if (key == ENTER && strlen(buffer)) {
      switch (buffer[0] - 48) {
      case 0:
        system("cls");
        pravila();
        break;
      case 1:
        system("cls");
        print1();
        break;
      case 2:
        system("cls");
        authors();
        break;
      }
      return true;
    }
  } while (key != ESCAPE);
  return false;
}

void vvod() {
  setlocale(LC_ALL, "UTF-8");
  bool result;
  result = input2("Пожалуйста, выберите номер из меню (0, 1, 2), или \"Esc\" "
                  "для выхода из приложения: ");
  if (result == 0) {
    system("cls");
    printf("До новых встреч!\n");
  }
}
