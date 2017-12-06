#include <stdio.h>
/* main: generate some simple output */

struct complex_struct {
  double x, y;
};

void toString(struct complex_struct c);

int main(int argc, char *argv[])
{

  struct complex_struct z = { 1.0, 4.0};

  toString(z);

  return 0;
}


void toString(struct complex_struct c)
{
  printf("complex_struct: {x: %f, y: %f}\n", c.x, c.y);
}
