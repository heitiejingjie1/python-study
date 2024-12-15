#include <cstdarg>
#include <stdio.h>
#include <stdarg.h>


// 展示
void display(void);
// 奇偶校验
int even_parity(int value, int n_bits);
// 无效交换
void swap1(int value1, int value2);
// 有效交换
void swap2(int *value1, int *value2);
// 把一个数组的所有元素设为0
void clrarray(int arr[], int len);

// 递归
// 接受一个数字，并打印它的字符
void 
binaryToAscii(unsigned int number);
// 斐波那契数
long 
fibonacci(int n);

/*
 * 可变参数...
 */
float 
average(int n_value, ...);

int main(void)
{
  display();
   
  return 0;
}

// 函数参数
void display(void)
{
  int result = even_parity(11,4);
  printf("%b\n", 11);
  printf("%d\n", result);

  int x = 10;
  int y = 11;
  swap2(&x,&y);
  printf("%d\n", x);
  printf("%d\n", y);

  int arr[] = {1,2,3,4};
  clrarray(arr, 4);
  printf("%d\n", arr[2]);
  
  int number = 56939;
  binaryToAscii(number);

  long result2 = fibonacci(100);
  printf("%ld\n", result2);

}

int even_parity(int value, int n_bits)
{
  int parity = 0;

  // 计算值中值为1的个数
  while (n_bits > 0) {
    parity += value & 1;
    value >>= 1;
    n_bits -= 1;
  }

  // 如果计数器的最低位为0，则为true
  return (parity % 2) == 0;
}

void swap1(int value1, int value2)
{
  int swap;
  swap = value1;
  value1 = value2;
  value2 = swap;
}

void swap2(int *value1, int *value2)
{
  int swap;
  swap = *value1;
  *value1 = *value2;
  *value2 = swap;
}

void clrarray(int arr[], int len)
{
  while (len > 0) {
    arr[--len] = 0;
  }
}

void binaryToAscii(unsigned int number)
{
  unsigned int quotient;
  quotient = number / 10;

  if (quotient != 0) {
    binaryToAscii(quotient);
  } 
  
  putchar(number % 10 + '0');
}

long 
fibonacci(int n)
{
  long result;
  long preResult;
  long nextOldResult;

  result = preResult = 1;

  while (n >= 2) {
    n--;
    nextOldResult = preResult;
    preResult = result;
    result = preResult + nextOldResult;
  }

  return result;
}

float
average(int n_value, ...)
{
  // 可变参数
  va_list var_arg;      // 获取可变参数列表的值
  
  int count;
  float sum = 0;

  // 访问可变参数
  va_start(var_arg, n_value);

  // 添加取自可变参数列表的值
  for (count = 0;count < n_value;count++) {
    sum += var_arg(var_arg, int);
  }

  // 完成处理可变参数
  va_end(var_arg);

  return sum / count;

}
