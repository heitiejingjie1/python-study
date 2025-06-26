import json

"""读取文件"""

fileName = "test/pi.txt"
with open(fileName) as target:
    liens = target.readlines()

for line in liens:
    print(line.strip())

"""写入文件"""
fileName = "write.txt"
with open(fileName, "a") as target:
    target.write("I love programming.\n")
    target.write("I love programming.\n")
    target.write("I love programming.\n")
print("Done")

try:
    print(5 / 0)
except ZeroDivisionError:
    print("Don't division 0.")

"""存储数据"""
numbers = [2, 3, 5, 7, 11, 13]

"""存入数据"""
fileName = "numbers.json"
with open(fileName, "a") as target:
    json.dump(numbers, target)
print("Done")

numbers = []
"""读取数据"""
with open(fileName) as f:
    numbers = json.load(f)
print("Done")
print(numbers)
