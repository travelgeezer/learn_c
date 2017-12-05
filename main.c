#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

int main(int argc, char *argv[])
{
  int x = 0;
  int y = 1;
  if (x > 0)
    printf("test ok\n");
  else if (x <= 0 && y > 0)
    printf("test ok \n");
  else
    printf("test failed\n");

  // change

  if (x <= 0 && y <= 0)
    printf("test failed\n");
  else
    printf("test ok\n");

  return 0;
}
