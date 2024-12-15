#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>

// 不受限制的字符串
void notAsrrictStrDemo(void);

// 受限制的字符串
void AstrictStrDemo(void);

// 查找字符串
void strFind(void);

// 高级字符串查找
void strFind2(void);

// 查找标记
void findFlag(void);

// 错误信息
void error(void);

// 字符操作
void charOperator(void);

// 返回子串最右出现的位置
char *strrstr(char const *s1, char const *s2);

int main(void)
{
  // notAsrrictStrDemo();
  // AstrictStrDemo();
  // strFind();
  // strFind2();
  findFlag();
  charOperator();

  return 0;
}

void charOperator(void)
{
  /*
   * 字符分类
   */
  // iscntrl(int);      // 如何控制字符
  // isspace(int);       // 是否为空格
  // isdigit(int);      // 是否为十进制数
  // isxdigit(int);        // 是否为十六进制数
  // islower(int);         // 是否为小写字符
  // isupper(int);         // 是否为大写字符
  // isalpha(int);         // 是否为大小写字符
  // isalnum(int);         // 是否为数字，大小写字符
  // ispunct(int);         // 任何标点符号
  // isgraph(int);         // 任何图形字符
  // isprint(int);         // 任何可打印字符

  /*
   * 字符转换
   */
  printf("%c\n", toupper('s'));
  printf("%c\n", tolower('P'));


}

void error(void)
{
  // strerror()
  // 返回系统的错误消息,通过一个外部的整型变量error,用来显示这个整型变量的错误信息
  //
}

void findFlag(void)
{
  char str[50] = "www.cctv.cn.com";
  const char *flag = ".";
  char *token;

  // 返回分隔符匹配到的第一个字符串
  // 如果第一个参数不为Null，就返回第一个匹配到的字符串
  // 如果第一个参数为Null，就返回同一字符串的下一个标记的字符串
  token = strtok(str, flag);

  while (token != NULL) {
    printf("%s\n", token);

    token = strtok(NULL, flag);
  }
}

void strFind2(void)
{
  int len1, len2;
  char buffer[] = "12,36,369,654,fhjk,6538+-'5646";

  // 返回buffer中第一个不在子串中的下标
  len1 = strspn(buffer, "0123456789");
  len2 = strspn(buffer, ",0123456789");

  printf("%i\n", len1);
  printf("%i\n", len2);

  printf("=======================\n");

  // 返回子串中，不与buffer中匹配的字符数
  len1 = strcspn(buffer, "0123456789");
  len2 = strcspn(buffer, ",0123456789");

  printf("%i\n", len1);
  printf("%i\n", len2);

  
}

void strFind(void)
{
  char *str = "hello,world!";
  char dst[50];

  // 查找一个字符,返回找到的第一个字符的位置
  char *pStr = strchr(str, 'l');
  printf("%p\n", pStr);
 
  // 返回找到最后一个字符的位置
  char *pStr2 = strrchr(str, 'l');
  printf("%p\n", pStr2);

  // 查找一组字符中任意字符在字符串中出现的位置
  char *group = "eva";
  char *pgroup = strpbrk(str, group);
  printf("%p\n", pgroup);

  // 查找一个子串,返回子串最左出现的位置
  char *childStr = "hello";
  char *pChild = strstr(str, childStr);
  printf("%p\n", pChild);

  char *pChild2 = strrstr(str, childStr);
  printf("%p\n", pChild2);
}

void AstrictStrDemo(void)
{
  char *str = "hello,world!";
  char dst[50];

  // 复制字符串
  strncpy(dst, str, strlen(str));
  printf("%s\n", dst);

  // 连接字符串
  strncat(dst, str, strlen(str));
  printf("%s\n", dst);

  // 比较字符串
  int res = strncmp(dst, str, strlen(str));
  printf("%d\n", res);
}

void notAstrictStrDemo(void)
{
  char *str = "hello,world!";
  char dst[50];
  // 复制字符串
  strcpy(dst, str);

  printf("%s\n", dst);

  // 连接字符串
  char cdst[100];
  strcat(cdst, str);
  strcat(cdst, dst);
  printf("%s\n", cdst);

  // 比较字符串
  char *str1 = "hello,python!";

  int ret = strcmp(str1, str);
  printf("%d\n", ret);
}

char *strrstr(char const *s1, char const *s2)
{
  register char *last;
  register char *current;

  last = NULL;

  // 子串不为空，才进行查找
  if (*s2 != '\0') {

    // 查找子串第一次出现的位置
    current = strstr(s1, s2);

    // 每次查找字符串，让指针指向起始位置，然后查找字符串下一匹配位置
    while (current != NULL) {
    
      last = current;
      current = strstr(last + 1, s2);

    }
  }

  return last;
}
