language = ["Python", "Java", "C++", "JavaScript"]
print(f"Language:{language}")
print(language[0].title())
# 访问列表最后一个元素
print(language[-1])
# 访问列表的前3个元素
print(language[:3])

print(language)
# 修改列表元素
language[0] = "Python3"
print(language)
# 添加列表元素
language.append("Go")  # 列表末尾添加元素
print(language)
language.insert(1, "C#")  # 在指定位置添加元素
print(language)

# 删除列表元素
del language[1]  # 删除指定位置的元素，无法再使用它
print(language)
lge = language.pop()  # 删除并返回列表末尾的元素
print(language)
print(lge)
lge = language.pop(2)  # 删除并返回指定位置的元素
print(language)
print(lge)
language.remove("JavaScript")  # 删除指定值的元素
print(language)
language.clear()  # 清空列表
print(language)

# 列表排序
cars = ["bmw", "audi", "toyota", "subaru"]
print(cars)
cars.sort()  # 按字母顺序排序，默认是升序，永久排序
print(cars)
cars.sort(reverse=True)  # 降序排序
print(cars)
cars = ["bmw", "audi", "toyota", "subaru"]
print(cars)
new_cars = sorted(cars)  # 临时排序，返回一个新的列表
print(new_cars)
print(cars)  # 原列表不变
cars.reverse()  # 反转列表
print(cars)  # 反转后的列表
len = len(cars)  # 获取列表长度
print(f"List length: {len}")

# 列表遍历
languages = ["Python", "Java", "C++", "JavaScript"]
for language in languages:
    print(f"hello {language.title()}!")
    print("I love you " + language.title() + "!\n")
print("I will learn more languages in the future!")

# 创建数值列表
numbers = list(range(1, 11))  # 使用list()创建1到10的数值列表
print(numbers)
even_numbers = list(range(2, 11, 2))  # 使用list()创建2到10的偶数列表
print(even_numbers)
# 列表解析
values = [value**2 for value in range(1, 11)]  # 列表推导式创建1到10的平方列表
print(values)
nums = list(range(1, 1000001))  # 创建1到1000000的数值列表
print(sum(nums))  # 计算列表元素的和)
nums = list(range(3, 31, 3))  # 创建3到30的3的倍数列表
print(nums)

# 使用列表
# 切片
schools = ["Harvard", "Stanford", "MIT", "Yale", "Princeton"]
print(schools[1:4])  # 获取索引1到3的元素
print(schools[:3])  # 获取前3个元素
print(schools[2:])  # 获取索引2及之后的所有元素
print(schools[-3:])  # 获取最后3个元素
# 复制列表
my_foods = ["pizza", "falafel", "carrot cake"]
fried_foods = my_foods[:]  # 使用切片复制列表
print(fried_foods)
my_foods.append("kongpaochicken")  # 修改原列表
fried_foods.append("chicken")  # 修改复制的列表
print(my_foods)
print(fried_foods)
# 关联列表
my_foods = fried_foods  # 直接赋值会关联两个列表
my_foods.append("maoxuewang")  # 修改其中一个列表会影响另一个
print(fried_foods)

# 元组:不可变的列表
point = (10, 20, 30)  # 创建一个元组
print(point)
# point[0] = 15  # 尝试修改元组元素会报错
# 遍历元组
for coordinate in point:
    print(coordinate)
