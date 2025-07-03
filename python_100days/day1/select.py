# 练习
"""
分段函数求值

version 1.0
author: 风慕夏
"""


def FunctionValue():
    x = float(input("请输入x的值: "))
    y = 0
    if x > 1:
        y = 3 * x - 5
    if x - 1 <= x <= 1:
        y = x + 2
    if x < -1:
        y = 5 * x + 3
    print(f"f(x) = {y}")


FunctionValue()


"""
成绩评分

version 1.0
author: 风慕夏
"""


def score():
    score = float(input("请输入成绩: "))
    if score >= 90:
        grade = "A"
    elif score >= 80:
        grade = "B"
    elif score >= 70:
        grade = "C"
    elif score >= 60:
        grade = "D"
    else:
        grade = "E"
    print(f"成绩: {score}, 等级: {grade}")


score()

"""
计算三角形的周长和面积

version 1.0
author 风慕夏
"""


def area_and_perimeter():
    a = float(input("请输入三角形的第一条边: "))
    b = float(input("请输入三角形的第二条边: "))
    c = float(input("请输入三角形的第三条边: "))

    if a + b > c and a + c > b and b + c > c:
        perimeter = a + b + c

        s = perimeter / 2
        area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
        print(f"三角形的周长: {perimeter}, 面积: {area:.2f}")
    else:
        print("输入的边长不能构成三角形，请重新输入。")


area_and_perimeter()
