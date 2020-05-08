#include "vuborx.h"
#include "look.h"
#include "menu.h"
#include "test.h"
#include "vubortemy.h"
#include "vvod.h"
#define ESCAPE 27
#define ENTER 13
#define BACK 9

void vuborx(int a)
{
    setlocale(LC_ALL, "UTF-8");
    char key;
    FILE* file;
    do {
        print2();
        scanf("%c%*c", &key);
        switch (a) {
        case '0':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Colors.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Colors.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        case '1':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Sport.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Sport.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        case '2':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Drinks.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Drinks.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        case '3':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Food.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Food.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        case '4':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Transport.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Transport.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        case '5':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Family.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Family.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        case '6':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Dayandmonth.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Dayandmonth.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        case '7':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Inter.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Inter.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        case '8':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Animals.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Animals.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        case '9':
            system("clear");
            switch (key) {
            case '1':
                system("clear");
                file = fopen("Professii.txt", "r");
                test(file, a);
                break;
            case '2':
                system("clear");
                file = fopen("Professii.txt", "r");
                look(file, a);
                break;
            case '3':
                system("clear");
                vubortemy();
                break;
            case '4':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            case 'm':
                system("clear");
                vvod();
                break;
            }
            break;
        }
    } while (key != '1' && key != '2' && key != '3' && key != '4'
             && key != 'm');
}
