import pizza
from pizza import make_pizza  # 导入特定函数
import pizza as p


def greet_user(username):
    print(f"hello {username.title()}!")


greet_user("alice")


# 位置实参：调用顺序与定义函数时的形参一致
# 关键字实参：在实参面前加上定义函数时的形参
# 默认值：在定义函数时，给形参指定一个默认值，在调用时如未指定实参，就调用该默认值
def get_person(name, age, sex="man"):
    print(f"This person name is {name}, sex is {sex}, age is {age}")


get_person("fengmuxia", 29)

# 禁止修改传递的参数列表，只需传递该参数列表的副本
alien_colors = ["yellow", "red", "green"]


def test_color(colors):
    colors[1] = "origen"
    print(alien_colors)


print(alien_colors)


# 传递任意数量的实参,形参时，形参前的*实际创建了一个空元组，来接受实参
def print_user(*names):
    for name in names:
        print(f"hello {name}")


print_user("alice", "heitiejingjei", "bob")


# 传递任意数量的实参,形参时，形参前的*实际创建了一个空元组，来接受实参
def build_profile(first, last, **user_info):
    user_info["first_name"] = first
    user_info["last_name"] = last

    return user_info


user = build_profile("alice", "bob", city="chonvqing", age=29)
print(user)


# 练习
def build_car(made, size, **car_info):
    car_info["made"] = made
    car_info["size"] = size

    return car_info


car = build_car("subaru", "outback", color="blue", two_package=True)
print(car)

pizza.make_pizza(12, "mushrooms", "green peppers")
