#include "menu.h"
#include "vubortemy.h"
#define ESCAPE 27
#define ENTER 13
#define BACKSPESE 8
#define BACK 9
#define SIZE3 2
#define MAX9 "9"

bool in_range9(char* buff, const char* max)
{
    int lb = strlen(buff), lm = strlen(max);
    return (lb != lm) ? (lb < lm) : strcmp(max, buff) >= 0;
}
bool input9(const char* title)
{
    char key, buffer[SIZE3];
    char* ptr = buffer;
    memset(buffer, 0, sizeof(buffer));
    do {
        printf("\r%s%s", title, buffer);
        key = getchar();
        if (key > 0x2F && key < 0x3A) {
            *ptr = key;
            if (in_range9(buffer, MAX9))
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
            switch (buffer[0] - 48) {
            case 0:
                system("cls");
                print2(buffer[0] - 48);
                break;
            case 1:
                system("cls");
                print2(buffer[0] - 48);
                break;
            case 2:
                system("cls");
                print2(buffer[0] - 48);
                break;
            case 3:
                system("cls");
                print2(buffer[0] - 48);
                break;
            case 4:
                system("cls");
                print2(buffer[0] - 48);
                break;
            case 5:
                system("cls");
                print2(buffer[0] - 48);
                break;
            case 6:
                system("cls");
                print2(buffer[0] - 48);
                break;
            case 7:
                system("cls");
                print2(buffer[0] - 48);
                break;
            case 8:
                system("cls");
                print2(buffer[0] - 48);
                break;
            case 9:
                system("cls");
                print2(buffer[0] - 48);
                break;
            }
            return true;
        }
    } while (key != ESCAPE);
    return false;
}

void vubortemy()
{
    setlocale(LC_ALL, "UTF-8");
    bool result;
    result = input9(
            "Пожалуйста, выберите номер из меню (от 0 до 9; или "
            "\"TAB\"), или \"Esc\" для выхода из приложения: ");
    if (result == 0) {
        system("cls");
        printf("До новых встреч!\n");
    }
}
