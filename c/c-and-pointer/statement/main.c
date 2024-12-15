#include <stdio.h>

void statement(void);
void test(void);
double sqrt(double a);
void primer_number(int a);

int main(void)
{
  //statement();
  test();

  return 0;
}

void statement(void)
{
  // 空语句
  ;

  // 表达式语句
  // x = y + 3;
  // ch = getchar();
  
  // if语句
  int x = 10;
  if (x > 3) {
    printf("%d\n", x);
  } else {
    printf("%d\n", x - 1);
  }

  printf("==================\n");

  // while语句
  while (x > 3) {
    printf("%d\n", x);
    x--;
  }

  printf("==================\n");

  // for语句
  for (int i = 10; i > 3; i--) {
    printf("%d\n",i);
  }
  
  printf("==================\n");

  // do语句
  int y = 10;
  do {
    printf("%d\n",y);
    y--;
  } while (y > 3);

  printf("==================\n");

  // swith语句
  int score = 4;
  switch (score) {
    case 5:
      printf("A\n");
      break;
    case 4:
      printf("B\n");
      break;
    case 3:
      printf("C\n");
      break;
    case 2:
      printf("D\n");
      break;
    case 1:
      printf("E\n");
      break;
    default:
      break;
  }

  printf("==================\n");

}

void test(void)
{
  // 求平方根公式
  double x = sqrt(3);
  printf("%lf\n", x);
  printf("===============^\n");

  primer_number(10);
  printf("===============^\n");


}

double sqrt(double a)
{
  double x = 1;
  double y;
  for (int i = 0;i <= 9; i++) { 
    x = x + (a / x );
    y = x / 2;
  }

  return y;
}

void primer_number(int a)
{
  if (a <= 3) {  
    printf("%d\n", a);
    return;
  }

  for (int i = 3; i <= a; i++) {
    for (int j = 2; j <= i; j++) {
      if (i % j == 0) {
        break;
      }
    }

    printf("%d\n", i);
  }
}
