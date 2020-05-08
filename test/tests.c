#include "ctest.h"
#include "menu.h"

CTEST(enter, check_word_equal)
{
    char* a = "tea";
    char* b = "tea";
    int real = check_word(a, b);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, check_word_diff)
{
    char* a = "tea";
    char* b = "water";
    int real = check_word(a, b);
    unsigned int exp = 0;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, check_word_empty)
{
    char* a = "";
    char* b = "";
    int real = check_word(a, b);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, Exit_if_BACK_b)
{
    int s = 98;
    int real = backmenu(s);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, Exit_if_BACK_m)
{
    int s = 109;
    int real = back_m(s);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}