#include "../thirdparty/ctest.h"
#include "../src/menu.h"

CTEST(translate, first_word)
{
 FILE* fp = fopen("Drinks.txt", "rb");
 fread(&t1, sizeof(t1), 1, fp);
 fclose(fp);
 struct word expected = {"tea", "чай"};
 ASSERT_EQUAL(1, check_word(expected.rus, t1.rus));
}

CTEST(translate, last_word)
{
 FILE* fp = fopen("Drinks.txt", "rb");
 while (!feof(fp)) {
 fread(&t1, sizeof(t1), 1, fp);
 }
 fclose(fp);
 struct word expected = {"milkshake", "молочный_коктейль"};
 ASSERT_EQUAL(1, check_word(expected.rus, t1.rus));
}

CTEST(translate, border)
{
 FILE* fp = fopen("Drinks.txt", "rb");
 fread(&t1, sizeof(t1), 1, fp);
 fclose(fp);
 struct word expected = {"milkshake", "молочный_коктейль"};
 ASSERT_EQUAL(0, check_word(expected.rus, t1.rus));
}

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

CTEST(enter, Exit_if_ESCAPE)
{
 int s = 27;
 int real = end(s);
 unsigned int exp = 1;
 ASSERT_EQUAL(real, exp);
}

CTEST(enter, Exit_if_3)
{
 int s = 3;
 int real = end(s);
 unsigned int exp = 0;
 ASSERT_EQUAL(real, exp);
}

CTEST(enter, Exit_if_BACK_b)
{
int s = 98;
int real = backmenu(s);
unsigned int exp = 1;
ASSERT_EQUAL(real, exp);
}

CTEST(enter, Exit_if_BACK_TAB)
{
int s = 9;
int real = back_tab(s);
unsigned int exp = 1;
ASSERT_EQUAL(real, exp);
}
