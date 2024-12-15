/*
 * 地址列表模块的声明
 */

/*
 * 数据特征
 */ 
#define NAME_LENGTH 30  // 允许出现的最长名字
#define ADDR_LENGTH 100 // 允许出现的最长地址
#define PHONE_LENGTH 11 // 允许出现的最长电话号码                        
#define MAX_ADDR 1000   // 允许出现的最长地址个数

/*
 * 接口函数
 */ 
// 给出一个名字，查找地址
char const *
lookup_addr(char const *name);

// 给出一个名字，查找对应号码
char const *
lookup_phone(char const *name);
