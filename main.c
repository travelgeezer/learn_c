#include <stdio.h>

/* main: generate some simple output */

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


int main(void)
{

  int result = ceiling(16, 4);

  printf("%d\n", result);
  return 0;
}
