message = input("Tell me something:")
print(message)

age = input("How old are you?: ")
age = int(age)
if age >= 18:
    print("You are man!")

number = input("Enter a number, i will tell you it's even or odd: ")
number = int(number)

if number % 2 == 0:
    print(f"{number} is even.")
else:
    print(f"{number} is idd.")


# while循环
promet = "please enter you massage: "
message = ""
while message != "quit":
    message = input(promet)

    if message != "quit":
        print(message)

# 使用标志
active = True
while active:
    message = input(promet)

    if message == "quit":
        active = False
    else:
        print(message)

# break
while True:
    message = input(promet)

    if message == "quit":
        break
    else:
        print(message)

# continue
# 打印1到10的奇数
current_number = 0
while current_number < 10:
    current_number += 1
    if current_number % 2 == 0:
        continue

    print(current_number)

message = "Tell me you age: "
age = int(message)
price = 0
if age < 3:
    price += 0
elif 3 <= age <= 12:
    price += 10
elif age > 12:
    price += 15
print(f"you will pay {price}.")
