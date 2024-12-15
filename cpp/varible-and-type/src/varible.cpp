#include <cstdio>
#include <iostream>
#include <ostream>
using namespace std;

void typeConvert(void);
void complexType(void);
void constOperate(void);
void upConst(void);
void makeType(void);

int main() {
  // typeConvert();
//  complexType();
  constOperate();
  return 0;
}

void makeType(void)
{
    // 类型别名
    {
        // 第一种方法，使用typedef
        typedef double d;
        typedef d base, *p;

        // 第二种方法，使用using表达式
        using dd = double;
    }

    // auto 自动推断对象类型，会忽略顶层const
    {

    }

    // decltype，不计算值，只是得到该对象的类型
    {
        const int ci = 0, &ri = ci;
        decltype(ci) di = 0;
        decltype(ri) rdi = di;
        //decltype(ri) rrdi;

    }

}

void upConst(void)
{
    /*
     * 顶层const表示该值本身是常量，而底层const表示指向或引用的对象是常量
     */
    /*
     * 常量表达式:在编译阶段就能得到具体值的表达式
     */

    // 由编译器决定该对象是否是一个常量表达式
    constexpr double pi = 3.14;

}

void constOperate(void) {
  // const initialize，const类型变量可赋值给普通的变量
  {

    int i = 29;
    const int ci = i;
    int j = ci;
  }

  // const引用，
  {
    const int ci = 29;
    const int &refci = ci;
    // refci = 30;
  }

  // 指针与const，指向常量的指针不能用于改变其所指对象的值
  {
    const double pi = 3.14;
    // double *ptr = &pi;  //ptr 是普通指针
    const double *cptr = &pi;
    // *cptr = 3.1415;    // 所指对象的值为const
    
    // const指针,常量指针
    {
        int errNumber = 0;
        // cperr将一直指向errNumber，但是可以更改errNumber的值
        int *const cperr = &errNumber;
        cout << *cperr << endl;
        *cperr = 1;
        cout << *cperr << endl;
        const double pi = 3.14;
        const double *const ppi = &pi;
        // *ppi = 3.14159;
    }
  }
}

void complexType(void) {

  // reference 为变量起别名,且与被引用者绑定，不能再引用其他对象
  {
    int val = 100;
    int &refval = val;
    // int &refval2; // 引用必须初始化

    cout << "val = " << val << endl;
    cout << "refval = " << refval << endl;

    refval = 200;
    cout << "val = " << val << endl;
  }

  // pointer
  // 本身也是对象，指向另一个对象即获取对象在内存中的地址，可以再执行其他的对象
  {
    int val = 100;
    int *pval = &val;
    cout << "pval = " << pval << "\n";
    cout << "*pval = " << *pval << "\n";

    // 空指针
    int *pval2 = nullptr;

    // void* 指针 可以对void*
    // 指针赋值，但不能操作该指针，因为无法确定该指针的类型，可以赋任何类型的变量
    void *vp = &val;
    vp = pval2;

    // **p 指向指针的指针
    int **ppval = &pval;

    cout << "*ppval = " << *ppval << "\n";
    cout << "pval = " << pval << "\n";
    cout << "**ppval = " << **ppval << "\n";

  }
}

double PI = 3.14;

void typeConvert(void) 
{
  bool b = 42;
  printf("b = %d\n", b);

  unsigned u = 10;
  unsigned u2 = 42;
  cout << u2 - u << endl;
  cout << u - u2 << endl;

  int x = 0x12;
  cout << x << endl;

  char a[10] = "w";
  cout << sizeof(a) << endl;

  char *str = "hello";
  cout << sizeof(str) << endl;
  cout << str << endl;

  {
    double d = 3.14;
    // int a = {d};

    int b = d;
  }

  // 声明与定义
  {

    extern int i; // 只声明未定义

    int j = 0; // 声明且定义
  }

  {
    cout << PI << endl;
    double PI = 3.14159;

    cout << PI << endl;

    // 显式访问全局变量
    cout << ::PI << endl;
  }
}
