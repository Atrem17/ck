#include "vubortemy.h"
#include "menu.h"
#include "vuborx.h"
#include "vvod.h"

void vubortemy()
{
    setlocale(LC_ALL, "UTF-8");
    char key;
    do {
        system("clear");
        print1();
        scanf("%c%*c", &key);
        switch (key) {
        case '0':
            system("clear");
            vuborx(key);
            break;
        case '1':
            system("clear");
            vuborx(key);
            break;
        case '2':
            system("clear");
            vuborx(key);
            break;
        case '3':
            system("clear");
            vuborx(key);
            break;
        case '4':
            system("clear");
            vuborx(key);
            break;
        case '5':
            system("clear");
            vuborx(key);
            break;
        case '6':
            system("clear");
            vuborx(key);
            break;
        case '7':
            system("clear");
            vuborx(key);
            break;
        case '8':
            system("clear");
            vuborx(key);
            break;
        case '9':
            system("clear");
            vuborx(key);
            break;
        case 'm':
            system("clear");
            vvod();
            break;
        case 'z':
            system("clear");
            printf("До новых встреч!\n");
            return;
            break;
        }
    } while (key != '0' && key != '1' && key != '2' && key != '3' && key != '4'
             && key != '5' && key != '6' && key != '7' && key != '8'
             && key != '9' && key != 'm' && key != 'z');
}
