#include "look.h"
#include "menu.h"
#include "test.h"
#include "vuborx.h"
#define ESCAPE 27
#define ENTER 13
#define BACKSPESE 8
#define BACK 9
#define SIZE 2
#define MAX "3"

bool in_range(char* buff, const char* max)
{
    int lb = strlen(buff), lm = strlen(max);
    return (lb != lm) ? (lb < lm) : strcmp(max, buff) >= 0;
}
bool input(const char* title, int a)
{
    char key, buffer[SIZE];
    char* ptr = buffer;
    FILE* file;
    memset(buffer, 0, sizeof(buffer));
    do {
        printf("\r%s%s", title, buffer);
        key = getchar();
        if (key > 0x30 && key < 0x3A) {
            *ptr = key;
            if (in_range(buffer, MAX))
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
        if (key == BACK) {
            system("cls");
            menu();
            return true;
        }
        if (key == ENTER && strlen(buffer)) {
            switch (a) {
            case 0:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Colors.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Colors.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            case 1:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Sport.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Sport.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            case 2:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Drinks.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Drinks.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            case 3:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Food.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Food.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            case 4:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Transport.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Transport.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            case 5:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Family.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Family.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            case 6:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Dayandmonth.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Dayandmonth.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            case 7:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Inter.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Inter.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            case 8:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Animals.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Animals.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            case 9:
                system("cls");
                switch (buffer[0] - 48) {
                case 1:
                    system("cls");
                    file = fopen("Professii.txt", "r");
                    test(file, a);
                    break;
                case 2:
                    system("cls");
                    file = fopen("Professii.txt", "r");
                    look(file, a);
                    break;
                case 3:
                    system("cls");
                    print1();
                    break;
                }
                break;
            }
            return true;
        }
    } while (key != ESCAPE);
    return false;
}

void vuborx(int a)
{
    setlocale(LC_ALL, "UTF-8");
    bool result;
    result = input(
            "Пожалуйста, выберите номер из меню (1, 2, 3; или \"TAB\"), "
            "или \"Esc\" для выхода из приложения: ",
            a);
    if (result == 0) {
        system("cls");
        printf("До новых встреч!\n");
    }
}
