#include <stdio.h>
/* main: generate some simple output */

int main(int argc, char *argv[])
{
  int i;
  char str[6] = "hello";
  char reverse_str[6] = "";

  printf("%s\n", str);
  for (i = 0; i < 5; i++) {
    /* reverse_str[5-i] = str[i]; */
    reverse_str[4-i] = str[i];
    printf("str[i] : %c\n", str[i]);
    printf("reverse_str[i] : %c\n", reverse_str[i]);
    printf("reverse_str[5-%d] : %c\n", i ,reverse_str[5-i]);
  }

  printf("reverse_str : %s\n", reverse_str);
  return 0;
}
