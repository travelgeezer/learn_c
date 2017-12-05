#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

int is_even(int x);
int is_leap_year(int year);

int main(int argc, char *argv[])
{
  int year = 2000;

  if (is_leap_year(year)) {
    printf("yes.\n");
  } else {
    printf("no.\n");
  }

  return 0;
}

int is_even(int x)
{
  return !(x % 2);
}

int is_leap_year(int year)
{
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}
