#if !defined MENU_H
#define MENU_H

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct word {
    char angl[20];
    char rus[40];
} t1;
struct word w1[25];

void menu();
void print1();
void print2();
int check_word(char* a, char* b);
int end(int a);
int backmenu(int a);
int back_m(int a);

#endif
