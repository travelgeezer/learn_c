#include <math.h>
#include <stdio.h>
/* main: generate some simple output */

void print_num(int x);

int main(int argc, char *argv[])
{

  int x = 179;
  print_num(x);
  return 0;
}


void print_num(int x)
{
  int tens = x % 100; // 将x进行取模运算，拿到x的十位与个位，比如：当 x = 179 时， x % 100 结果是 79.
  printf("tens: %d\n", x % 100 / 10);
  if (tens < 10) // 当tens小于10时，表示tens的十位为0
    {
      printf("tens: %d\n", 0);
    }
  else// 否则将tens / 10, 拿到十位表示，回忆（在C语言中整数除法取）<在C语言中整数除法取的既不是Floor也不是Ceiling，无论操作数是正是负总是把小数部分截掉，在数轴上向零的方向取整（Truncate toward Zero），或者说当操作数为正的时候相当于Floor，当操作符为负的时候相当于Ceiling>
    {
      printf("tens: %d\n", tens / 10);// 根据C语言中整数除法的特点：无论操作数是正是负，都是把小数部分截掉；也就是说， 79 / 10 得到 7.9 那么截掉小数位最终结果为7. 顺利拿到十位上的数
    }

  if (x < 10) // 当x 小于十时， 说明个位就是他自己
    {
      printf("units: %d\n", x);
    }
  else // 当 x  大于十时， 运用取模运算， 拿到余数也就是x 的个位
    {
      printf("units: %d\n", x % 10);
    }
}
