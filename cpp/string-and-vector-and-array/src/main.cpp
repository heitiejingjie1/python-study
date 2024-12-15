#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

void stringDemo();
void operatorChar();
void vectorDemo();

int main(int argc, char *argv[])
{ 
  //stringDemo();
  operatorChar();
  vectorDemo();

  return 0;
}

void vectorDemo()
{
  // 初始化vector
  {
    vector<string> svec; // 默认初始化



    }
  
}
void operatorChar()
{
  // 基于范围的for语句
  {
    string str("hello,world!");
    for (auto s : str) {
      cout << s << endl;
    }
    decltype(str.size()) count = 0;
    for (char s : str) {
      if (ispunct(s)) {
        ++count;
      }
    }

    cout << count << endl;

    // 改变字符串
    {
      string str("Hello,World!");
      for (auto &s: str) {
        s = tolower(s);
      }

      cout << str << endl;
    }

  }

  string str;
  decltype(str.size()) index = 0;
  getline(cin, str);
  string result;
  for (index; index < str.size(); ++index) {
    if (!ispunct(str[index])) {
      result += str[index];
    }
  }
  cout << result << endl;

  
}

void stringDemo()
{
  // 初始化
  {
    string str;    
    string str1 = str;   
    // 拷贝初始化
    string str2 = "hahha";
    // 直接初始化
    string str3(10, 'a');

    cout << str3 << endl;
  }

  // string对象上的操作
  {
    // 读写字符
    string str;
    // cin >> str;
    cout << str << endl;

    // 读取未知数量的string对象
    /*while (cin >> str) {
      cout << str << endl;
    }*/

    /*
    // getline(),读取完整一行string对象,直到遇到换行符结束
    while (getline(cin, str)) {
      cout << str << endl;
    }

    // empty,size函数
  {
     string strLine;
    size_t len;
    while (getline(cin, strLine)) {
      len = strLine.size();
      if (!strLine.empty()) {
        cout << len << ": " << strLine << endl;
      }
    } 
  }*/

    // 比较string
    {
      string isEqualStr1 = "Hello";
      string isEqualStr2 = "Hello";

      bool result = isEqualStr1 > isEqualStr2; 
      cout << result << endl;
    }

    // 不能将字面值与string对象进行相加
    //
  }
}
