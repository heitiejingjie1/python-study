#include <stdio.h>
#include <time.h>
#include "student.h"
#include <stddef.h>

struct MyStruct {
  char a;
  int b;
  char c;
};
struct MyStruct2 {
  int b;
  char a;
  char c;
};


void structDemo(void);

// 结构成员
void structPointer(void);

// 结构存储分配
void structStorange(void);

// 结构参数
void structP(register struct MyStruct2 const *my);

int main(void)
{
  // structDemo();
  //structPointer();
  structStorange();

  {
    struct MyStruct2 ms = {123, 'g', 'j'};
    structP(&ms);
  }


  return 0;
}

void structP(register struct MyStruct2 const * my)
{
  printf("%d\n", my->a);
  printf("%c\n", my->c);
}

void structStorange(void)
{
  int len = sizeof(struct MyStruct);
  printf("%d\n", len);
  int len2 = sizeof(struct MyStruct2);
  printf("%d\n", len2);

  // 判断该成员距离该结构起始位子
  int move = offsetof(struct MyStruct, b);
  printf("%d\n", move);

}

void structPointer(void)
{
  Ex x = {10, "hi", {69, {100, 36}}, 0};
  Ex *px = &x;

  {
    // px是一个指针，包含x的地址
    printf("%p\n", px);

    // *px执行间接访问
    // 1、可以作为.操作符的左操作数，访问一个结构的成员
    // 2、也可作为参数传递给函数
    // 3、也可作为函数返回值
    int returnA = (*px).a;
    printf("%d\n", returnA);

    printf("================\n");

    // →访问结构成员
    int pxi = px->a;
    char cpxi = (*px).a;
    printf("%d\n", pxi);
    printf("%p\n", &px);
    printf("%p\n", &pxi);
    
    printf("================\n");
    
    // 访问指针常量
    char pxc = px->b[0];
    printf("%c\n", pxc);
    
    printf("================\n");

    // 访问嵌套结构成员
    int pxst = px->c.a;
    printf("%d\n", pxst);
    int pxstc = px->c.b[1];
    printf("%d\n", pxstc);

    printf("================\n");

    // 访问指针成员
    Ex *pe = px->d;
    printf("%p\n", pe);
  }

}

void structDemo(void)
{

  Student stu;
  stu.ID;

  // 
  (stu.sa[2]).language;
  stu.sa[1].math;

  // 
  stu.sp->language;

}
