#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

int gcd(int a, int b);

int main(int argc, char *argv[])
{

  printf("%d\n", gcd(16, 4));

  return 0;
}

int gcd(int a, int b) {
  double da = a;
  double db = b;

  int iresult = a / b;
  double dresult = da / db;

  if (dresult - iresult == 0.00) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}
