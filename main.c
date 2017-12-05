#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

void print_tens_and_units(int x);

int main(int argc, char *argv[])
{

  int x = 179;
  print_tens_and_units(x);
  return 0;
}


void print_tens_and_units(int x)
{

  printf("tens: %d\n", x % 100 / 10);

  printf("units: %d\n", x % 10);

}
