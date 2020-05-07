#include "test.h"
#include "look.h"
#include "menu.h"
#define THREE 51
#define FIVE 53
#define SEVEN 55
#define BACK 98
#define ESCAPE 27

void test(FILE *file, int a) {
  int i = 0, k = 0;
  setlocale(LC_ALL, "UTF-8");
  while (fscanf(file, "%s%s", w1[k].angl, w1[k].rus) != EOF) {
    k++;
  }
  srand(time(NULL));
  char s[15];
  int t, n, p = 0;
  i = rand() % k;
  printf("Введите количество слов в тесте (3, 5 или 7): ");
  do {
    n = getchar();
    if (n == THREE || n == FIVE || n == SEVEN) {
      printf("\n");
      for (int j = 0; j < n - 48; j++) {
        printf("%s - ", w1[i].rus);
        scanf("%s", s);
        if (check_word(w1[i].angl, s)) {
          p++;
          printf("Правильно!\n");
        } else {
          printf("Не правильно! Правильно: %-20s\n", w1[i].angl);
        }
        if (i <= k - 2) {
          i++;
        } else {
          i = 0;
        }
      }
    }
  } while (n != THREE && n != FIVE && n != SEVEN);
  if (p == n && (n == THREE || n == FIVE || n == SEVEN)) {
    printf("Отличный результат: %d/%d Поздравляем!\n", p, n - 48);
    printf(
        "Нажмите \"b\" для выхода из теста, \"ESC\" для выхода из приложения ");
    do {
      t = getchar();
      if (backmenu(t)) {
        system("cls");
        print2(a);
      }
    } while (t != ESCAPE);
    system("cls");
    printf("До новых встреч!");
    return;
  } else if (p == 0 && (n == THREE || n == FIVE || n == SEVEN)) {
    printf("Ужасный результат: %d/%d Нет ни одного правильного ответа! "
           "Рекомендуем обратиться к словам из темы и пройти тест "
           "заново!\nНажмите \"b\" для выхода из теста, \"ESC\" для выхода из "
           "приложения ",
           p, n - 48);
    do {
      t = getchar();
      if (backmenu(t)) {
        system("cls");
        print2(a);
      } else if (end(t)) {
        system("cls");
        printf("До новых встреч!");
        return;
      }
    } while (t != BACK && t != ESCAPE);
  } else if (p >= 0.65 * (n - 48)) {
    printf("Ваш результат: %d/%d Нужно постараться!\n", p, n - 48);
    printf(
        "Нажмите \"b\" для выхода из теста, \"ESC\" для выхода из приложения ");
    do {
      t = getchar();
      if (backmenu(t)) {
        system("cls");
        print2(a);
      }
    } while (t != ESCAPE);
    system("cls");
    printf("До новых встреч!");
    return;
  } else {
    printf("Ваш результат: %d/%d Слишком много ошибок! Рекомендуем обратиться "
           "к словам из темы и пройти тест заново!\nНажмите \"b\" для выхода "
           "из теста, \"ESC\" для выхода из приложения ",
           p, n - 48);
    do {
      t = getchar();
      if (backmenu(t)) {
        system("cls");
        print2(a);
      } else if (end(t)) {
        system("cls");
        printf("До новых встреч!");
        return;
      }
    } while (t != BACK && t != ESCAPE);
  }
  return;
}
