#!/usr/bin/env python
# -*- coding=utf-8 -*

programmeLanguage = ["c", "python", "cpp"]
print(programmeLanguage)

# update
programmeLanguage[1] = "assembly"
print(programmeLanguage)

# add
# append 在列表末尾添加元素
programmeLanguage.append("java")
programmeLanguage.append("js")
print(programmeLanguage)
# insert 在列表任意位置添加元素
programmeLanguage.insert(1, "lua")
programmeLanguage.insert(-1, "cmake")
print(programmeLanguage)
# 切片添加元素
programmeLanguage[-1:4] = "make"
programmeLanguage[0:0] = "c#"
print(programmeLanguage)
