#include <stdio.h>
#include <stdlib.h>

void pointer(void);
size_t strlen(char *str);
// 获取字符串长度
int find_char(char **str, char c);
// 查找特定字符
//
int main(void)
{
  pointer();
  char *hello = "hello world!";
  size_t len = strlen(hello);
  printf("%ld\n", len);

  char *array_a = "jiushiwo";
  char *array_b = "heitiejingjie";
  char *array_c = "";
  char *test[3] = {};
  test[0] = array_c;
  test[1] = array_b;
  test[2] = array_a;
  int result = find_char(test, 's');
  printf("%d\n", result);

  return 0;
}

void pointer(void)
{
  int a = 112;
  int b = -15;
  float c = 3.14;
  int *d = &a;
  float *e = &c;
  
  printf("%p\n", d);
  printf("%d\n", *d);

  //在对指针间接访问之前，确保指针已被正确初始化
  int *errorA;
  // *errorA = 12;
  
  // Null值
  int *null_value = 0;
  *null_value;

  // 指针常量
  // *100 = 200; // 非法
  // *(int *)100 = 200; 合法不合理
  
  // 指针的指针
  {
    int a = 100;
    int *pa = &a;
    int **pb = &pa;

    printf("%ld\n", sizeof(pb));
  }

  {
    char a = 'a';
    for (int i = 0;i <= 25; i++) {
      printf("%c ", a + i);
    }
    printf("\n");
  }

  /*
  // 指针表达式
  {
    char ch = 'a';
    // 当ch作为右值时，表示的是该变量的值
    // 当ch作为左值时，表示的是该变量的位置
    // ch地址未知
    printf("%p\n", &ch);

    char *pch = &ch;
    // pch与上类似，pch的值为ch的地址,而pch的地址未知
    printf("%p\n", pch);

    char **ppch = &pch;
    // 指向字符指针的指针
    printf("%p\n", ppch);

    char *drefpch = *ppch;
    // 间接访问操作，获取pch的地址，即ppch指针所存储的值
    printf("%p\n", drefpch);

    char chaddone= *pch + 1;
    // 获取pch所指向地址的值，再加1
    printf("%c\n", ch);
    printf("%c\n", chaddone);

    char *prech = *(pch + 1);// 未明确定义
    // 间接访问操作，获取ch后一个地址
    printf("%p\n", prech);

    char *prepch = ++pch; // 未明确定义
    // 获取pch后一个地址
    printf("%p\n", prepch);

    char *prepch2 = pch++;
    // 获得pch的地址后，再把pch地址加1;
    printf("%p\n", prepch2);

    char *prech2 = *++pch;
    char *prech3 = *pch++;
    // 前一个获取ch后一个地址
    // 后一个获取ch的的地址，再把ch的地址加1
   
    char ch2 = ++*pch;
    // 获取ch加1后的值
  }
  */
}

size_t strlen(char *str)
{
  int len = 0;

  while (*str++ != '\0') {
    len += 1;
  }

  return len;
}

int find_char(char **str, char c)
{
  char *str2;

  // 获取字符指针的地址
  while (!(str2 == *str++)) {
    while (*str2 != '\0') {
      if (*str2++ == c) {
        return 1;
      }
    }
  }

  return 0;
}
