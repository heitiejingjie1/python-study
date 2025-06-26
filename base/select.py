cars = ["bm", "audi", "mercedes", "volkswagen", "ford"]
for car in cars:
    if car.lower() == "bmw":  # 转换格式，忽略大小写
        print(f"{car.upper()}")
    else:
        print(f"{car.title()}")

alice_colors = ["red", "green", "blue"]
for color in alice_colors:
    if color.lower() == "green":
        print("You get 5 point.")
    elif color.lower() == "red":
        print("You get 10 point.")
    elif color.lower() == "blue":
        print("You get 15 point.")

# if处理列表
# 确定列表是否为空
cars = []
if cars:
    print("The list is not empty.")
else:
    for car in cars:
        print(car.title())

"""模式匹配"""
score = 79
match score:
    case x if x < 60:
        print("score is D")
    case x if 60 <= x < 80:
        print("score is C")
    case x if 80 <= x < 90:
        print("score is B")
    case x if x >= 90:
        print("score is A")
    case _:
        print("score is unknown")

# 匹配列表
args = ["gcc", "hello.c", "-o", "hello"]

match args:
    case ["gcc"]:
        print("gcc: missing source files")
    case ["gcc", file, *file2]:
        print(f"gcc complice: {file} " + " ".join(file2))
    case ["clean"]:
        print("clean: clean all files")
    case _:
        print("invalid command")
# 练习
users = ["admim", "alice", "bob", "charlie"]
users = []
if users:
    for user in users:
        if user.lower() == "admin":
            print("Hello admin, would you like to see a status report?")
        else:
            print(f"Hello {user.title()}, thank you for logging in again.")
else:
    print("We need to find some users!")

current_users = ["alice", "bob", "charlie", "dave", "eve"]
new_users = ["Alice", "Bob", "Charlie", "Frank", "Grace"]
for new_user in new_users:
    if new_user.lower() in current_users:
        print(f"{new_user} has been used, please use anotner name.")
    else:
        print(f"{new_user} is available.")

for num in list(range(1, 10)):
    if num == 1:
        print(f"{num}st")
    elif num == 2:
        print(f"{num}nd")
    elif num == 3:
        print(f"{num}rd")
    else:
        print(f"{num}th")
