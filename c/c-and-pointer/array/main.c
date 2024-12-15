#include <stdio.h>

void
oneDimension(void);

void
strCpy(char *buffer, char const *string);

void
manyDimensions(void);

int main(void)
{
  // oneDimension(); 
  manyDimensions();

  return 0;
}

void 
manyDimensions(void)
{
  // 多维数组，除了第一维，其他的维度都需要显示的指出
  int matrix[3][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  };

  printf("matrix = %p\n", matrix);
  printf("matrix + 1 = %p\n", matrix + 1);
  printf("*(matrix + 1) = %p\n", *(matrix + 1));
  printf("*(matrix + 1) + 2 = %p\n", *(matrix + 1) + 2);
  printf("*(*(matrix + 1) + 2) = %d\n", *(*(matrix + 1) + 2));

  /*
   * 指向数组的指针
   */
  // int *pm = matrix;  警告，指针类型不对
 
  // 指向二维数组matrix的第一个子数组
  int (*pm)[4] = matrix;

  //访问第一个子数组的第三个元素
  int pmi = (*pm)[2];
  printf("%d\n", pmi);




}

void
oneDimension(void)
{
  int a[10];
  int b[10];
  int *c;

  c = &a[0];
  printf("%p\n", &a);
  printf("%p\n", c);

  // a = b;  // 非法
  // a = c;   // 非法，a的值为常    // 非法，a的值为常量量
  //
  /*
   * 下标引用
   *
   */
  int *pa = a + 2;

  printf("pa = %p\n", pa);
  printf("*pa = %d\n", *pa);
  printf("pa[0] = %d\n", pa[0]);
  printf("pa + 6 = %p\n", pa + 6);
  printf("*pa + 6 = %d\n", *pa + 6);
  printf("*(pa + 6 = %d\n", *(pa + 6));
  printf("pa[6] = %d\n", pa[6]);
  printf("&pa = %p\n", &pa);
  printf("pa[-1] = %d\n", pa[-1]);
  printf("a[1] = %d\n", a[1]);
  printf("pa[9] = %d\n", pa[9]);


  /*
   * 数组作为参数传递时，实际传递是指向数组第一个元素的指针
   *
   */

  /*
   * 数组初始化
   */
  int vector[3] = {1,2,3};




}

void
strCpy(char *buffer, char const *string)
{

}
