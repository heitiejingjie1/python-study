/*
 * 查找地址实现
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include "addrlist.h"

/*
* 每个地址的三个部分
* 黑盒数据，不允许外界访问
*/
static char name[MAX_ADDR][NAME_LENGTH];
static char addr[MAX_ADDR][ADDR_LENGTH];
static char phone[MAX_ADDR][PHONE_LENGTH];

/*
 *  在数组查找一个名字，并返回查找到位置的下标
 *  若未找到，返回-1
 */
static int
find_index(char const *name_to_find)
{
  int index;
  for (index = 0; index < MAX_ADDR; index++) {
    if (strcmp(name_to_find, name[index]) == 0) {
      return index;
    }
  }
  return -1;
}

/*
 * 给定一个名字，查找并返回address
 */
char const *
lookupAddr(char const *name)
{
  int index;
  index = find_index(name);

  if (index == -1) {
    return NULL;
  }
  else {
    return addr[index];
  }
}

/*
 * 给定一个名字，返回phone
 */
char const *
lookupPhone(char const *name)
{
  int index;
  index = find_index(name);

  if (index == -1) {
    return NULL;
  }
  else {
    return phone[index];
  }
}




