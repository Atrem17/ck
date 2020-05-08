#include "test.h"
#include "look.h"
#include "menu.h"
#include "vuborx.h"
#define THREE 51
#define FIVE 53
#define SEVEN 55
#define BACK 98
#define ESCAPE 27

void test(FILE* file, int a)
{
    int i = 0, k = 0;
    setlocale(LC_ALL, "UTF-8");
    while (fscanf(file, "%s%s", w1[k].angl, w1[k].rus) != EOF) {
        k++;
    }
    srand(time(NULL));
    char s[15];
    int p = 0;
    char n, t;
    i = rand() % k;
    do {
        printf("Введите количество слов в тесте (3, 5 или 7): ");
        scanf("%c%*c", &n);
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
        } else {
            printf("Ошибка ввода!\n");
        }
    } while (n != THREE && n != FIVE && n != SEVEN);
    if (p == n && (n == THREE || n == FIVE || n == SEVEN)) {
        printf("Отличный результат: %d/%d Поздравляем!\n", p, n - 48);
        printf("Нажмите \"b\" для выхода из теста, любой другой символ для "
               "выхода "
               "из приложения ");
        scanf("%c%*c", &t);
        if (backmenu(t)) {
            system("clear");
            vuborx(a);
        } else {
            system("clear");
            printf("До новых встреч!\n");
            return;
        }
    } else if (p == 0 && (n == THREE || n == FIVE || n == SEVEN)) {
        printf("Ужасный результат: %d/%d Нет ни одного правильного ответа! "
               "Рекомендуем обратиться к словам из темы и пройти тест "
               "заново!\nНажмите \"b\" для выхода из теста, любой другой "
               "символ для выхода из приложения ",
               p,
               n - 48);
        scanf("%c%*c", &t);
        if (backmenu(t)) {
            system("clear");
            vuborx(a);
        } else {
            system("clear");
            printf("До новых встреч!\n");
            return;
        }
    } else if (p >= 0.65 * (n - 48)) {
        printf("Ваш результат: %d/%d Нужно постараться!\n", p, n - 48);
        printf("Нажмите \"b\" для выхода из теста, любой другой символ для "
               "выхода "
               "из приложения ");
        scanf("%c%*c", &t);
        if (backmenu(t)) {
            system("clear");
            vuborx(a);
        } else {
            system("clear");
            printf("До новых встреч!\n");
            return;
        }
    } else {
        printf("Ваш результат: %d/%d Слишком много ошибок! Рекомендуем "
               "обратиться "
               "к словам из темы и пройти тест заново!\nНажмите \"b\" для "
               "выхода "
               "из теста, любой другой символ для выхода из приложения ",
               p,
               n - 48);
        scanf("%c%*c", &t);
        if (backmenu(t)) {
            system("clear");
            vuborx(a);
        } else {
            system("clear");
            printf("До новых встреч!\n");
            return;
        }
    }
    return;
}
