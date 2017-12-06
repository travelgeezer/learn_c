#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

int gcd(int a, int b);
int gcd_iteration(int a, int b);
int is_gcd(int a, int b);
int fab(int a);
int fab_iteration(int n);

int main(int argc, char *argv[])
{

  printf("gcd %d\n", gcd(16, 4));
  printf("gdc iteration %d\n", gcd_iteration(16, 4));

  printf("gcd %d\n", gcd(16, 3));
  printf("gdc iteration %d\n", gcd_iteration(16, 3));

  return 0;
}

int gcd(int a, int b) {
  if (is_gcd(a, b)) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}

int gcd_iteration(int a, int b)
{
  int gcd = b;
  while (!is_gcd(a, b))
    {
      int ta = a;
      int tb = b;
      a = tb;
      b = ta % tb;
      gcd = b;
    }

  return gcd;
}

int is_gcd(int a, int b)
{
  int ir = a / b;
  double da = a;
  double db = b;
  double dr  = da / db;

  double decimal = dr - ir;
  if (decimal == 0.00) {
    return 1;
  } else {
    return 0;
  }
}

int fab(int a)
{
  if (a == 0 || a == 1) {
    return 1;
  }

  return fab(a - 1) + fab(a - 2);

}

int fab_iteration(int n)
{
  /* TODO: */
}
