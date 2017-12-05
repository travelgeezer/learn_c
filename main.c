#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

double myround(double x);

int main(int argc, char *argv[])
{

  printf("%f\n", myround(4.49));
  printf("%f\n", myround(4.50));
  printf("%f\n", myround(-4.49));
  printf("%f\n", myround(-4.50));

  return 0;
}


double myround(double x)
{
  int ix = x;
  double decimal = fabs(x - ix);
  if (x > 0) {
    if (decimal < 0.50) {
      return floor(x);
    } else {
      return ceil(x);
    }
  } else {
    if (decimal < 0.50) {
      return ceil(x);
    } else {
      return floor(x);
    }
  }
}
