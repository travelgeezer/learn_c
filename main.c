#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

int ceiling(int x, int n);
void increment(int x);

int main(int argc, char *argv[])
{
  /*  int result = ceiling(17, 4); */
  /* printf("%d\n", result); */

  printf("6 %% 16 = %d\n", 6 % 16);
  printf("6 %% -16 = %d\n", 6 % -16);
  printf("-6 %% 16 = %d\n", -6 % 16);
  printf("-6 %% -16 = %d\n", -6 % -16);


  return 0;
}


int ceiling(int x, int n) {
  double dx = x;
  double dn = n;

  int resultInt = x / n;
  double resultDouble = dx / dn;

  if (resultDouble > resultInt)
    {
      return resultInt + 1;
    }
  else
    {
      return resultInt;
    }
}


void increment(int x)
{
  x = x + 1;
}
