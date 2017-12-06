#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

int gcd(int a, int b);
int fab(int a);

int main(int argc, char *argv[])
{

  printf("%d\n", gcd(16, 4));

  printf("%d\n", fab(20));

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


int fab(int a)
{
  if (a == 0 || a == 1) {
    return 1;
  }

  return fab(a - 1) + fab(a - 2);

}
