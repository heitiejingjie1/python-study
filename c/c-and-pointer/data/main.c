#include <stdio.h>

// 链接属性
// external:外部的
// internal:内部的
// none:无
// 缺省情况下，全局变量和函数的链接属性为external，其余的的为none
// 函数statement和全局变量PI的链接属性为external
//
//
// 存储类型
// automatic:自动的
//    代码块内部缺省
//    register用于声明automatic
//    可将指针变量声明为register
// static:静态的
//    代码块之外
//    static用于声明static
//

// 为类型起别名
typedef char *ptr_to_char;

void declaration(void);
void test(void);

int PI = 3.14;

int main(int argc, char *argv[])
{
  // declaration();
  test();
  return 0;
}

void declaration(void)
{
  int i = 100;
  printf("%d\n",i);
  
  ptr_to_char a;
  
  const int b = 200;
  int c = 300;
  // b = 300;
  printf("%d\n",b);
  
  // 整型常量指针 
  int const *pb = &b;
  printf("%d\n",*pb);
  // *pb = 2000; // error:常量
  printf("%d\n", *pb);
  
  // 常量整型指针 与上一致
  const int *pc = &b;
  // *pc = 3000;
  printf("%d\n", *pc);

  // 
  int const * const pa = &b;
  pb = &c;
}

void test(void)
{
  long int la = 100;
  short int  sa = la;
  printf("%d\n", sa);
}
