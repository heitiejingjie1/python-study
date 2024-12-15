#include <stdio.h>

void operator(void);
int count_one_bits(unsigned value);

int main(void)
{
  operator();

  return 0;
}

// 返回参数中值为1的位的个数
int count_one_bits(unsigned value)
{
  int ones;

  for (ones = 0; value != 0; value = value >>  1) {   
    if (value % 2 == 0) {
      ones++;
    }

    return ones;
  }
}

void operator(void)
{
  // 算数操作符

  // 移位操作符
  int a = 3;
  int b = 100;
  int c = -100;
  int la = a << 2; // 左移
  int rb = b >> 2; // 右移
  int rc = c << 5;
  printf("%d\n", la);
  printf("%d\n", rb);
  printf("%d\n", rc);
  printf("====================\n");

  // 位操作符
  // &: 与 
  // |:或
  // ^ 异或
  //
  int bit_number = 3;
  int value = 8;
  value = value & ~(1 << bit_number);
  printf("%b\n", value);
  
  int ba = 1;
  int bb = 2;
  int bc = 4;
  int bd = 8;
  int be = ba | bb | bc | bd;
  printf("%08b\n", be);
  printf("%d\n", be);
  printf("====================\n");

  // 下标引用
  int array[5] = {1,2,3,4,5};
  // 这两种方式等价
  printf("%d\n", array[2]);
  printf("%d\n", *(array + 2));
  printf("====================\n");

  // 布尔值
  // 不要通过与特定的值进行比较来确定某个值的真假
  
  // 左值与右值
  // 左值:赋值符号左边的值,标定了一个特定的存储值的地点
  // 右值:赋值符号右边的值

  // 表达式求值
  // 隐性类型转换
  // 算术转换
  



}
