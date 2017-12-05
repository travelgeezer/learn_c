#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

int is_even(int x);

int main(int argc, char *argv[])
{
  int i = 19;
  if (is_even(i)) {
    // do something.
  } else {
    // do something.
  }

  return 0;
}

int is_even(int x)
{
  return !(x % 2);
}
