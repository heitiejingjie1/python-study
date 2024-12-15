#include "my_string.h"

// 字符串长度
size_t strlen(char const *string)
{
  int length;

  for (length = 0; *string++ != '\0'; ) {
    length++;
  }

  return length;
}
