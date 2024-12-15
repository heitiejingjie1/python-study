#include <algorithm>
#include <iostream>

using namespace std;

// 传递数组
void transArr(int *arr, int x, int y)
{
  for (int i = 0; i != x; ++i) {
    for (int j = 0; j != y; ++j) {
      cout << arr[i * y + j] << endl;
    }
    cout << endl;
  }
}

void pointer(void)
{
  // 指针
  {
    char c = 'a';
    char *pc = &c;
    cout << "pc = " << pc << endl;
    cout << "*pc = " << *pc << endl;

    int *pi;
    cout << pi << endl;

    // void*指针，指向任意类型的指针
    // 除了函数指针和类类型指针
    
    // 空指针 nullptr
  }

  // 数组，array
  {
    float f[3];         // 包含3个float类型的数组
    char *parr[32];     // 包含32个指向字符指针的数组

    // 数组初始化器
    int ai[10] = {1,2,3};
    cout << ai[8] << endl;

    //原始字符串
    string s = R"("hello world")";
    cout << s << endl;

    string s2 = "就是我";
    cout << s2 << endl;

  }

  // 数组中的指针
  {
    int ai[] = {1,2,3,4,5};
    int *pai = ai;
    int *pai2 = &ai[1];
    int *pai3 = ai + 5;

    cout << *pai << endl;
    cout << *pai2 << endl;
    cout << *pai3 << endl;
  }

  int darr[2][3] = {
    {1,2,3},
    {4,5,6}
  };

  transArr(&darr[0][0], 2, 3);
  

}



