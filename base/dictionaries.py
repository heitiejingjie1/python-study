alien = {"color": "green", "point": 5}
print(alien["color"])
# 添加字典元素
alien["x_position"] = 0
alien["y_position"] = 25
print(alien)
alien["speed"] = "medium"
print(f"old x_position: {alien['x_position']}")

if alien["speed"] == "slow":
    x_increment = 1
elif alien["speed"] == "medium":
    x_increment = 2
else:
    x_increment = 3
alien["x_position"] = alien["x_position"] + x_increment
print(f"new x_position: {alien['x_position']}")

# 删除字典元素
print(alien)
del alien["speed"]
print(alien)

# 使用get方法访问字典元素
del alien["color"]
print(alien.get("color", "not found"))

# 遍历字典
love_languages = {
    "person1": "English",
    "person2": "Spanish",
    "person3": "French",
}
for person, language in love_languages.items():
    print(f"{person.title()}'s love language is {language.title()}.")
# 遍历字典的键
for person in love_languages.keys():
    print(person.title())
# 遍历字典的值
# 使用方法set剔除重复的值
for language in set(love_languages.values()):
    print(language.title())

# 嵌套字典
alien_0 = {"color": "green", "points": 5}
alien_1 = {"color": "yellow", "points": 10}
alien_2 = {"color": "red", "points": 15}
aliens = [alien_0, alien_1, alien_2]
for alien in aliens:
    print(alien)

aliens = []
for i in range(20):
    new_alien = {"color": "red", "point": 5}
    aliens.append(new_alien)

print(aliens[:5])
print(f"creat {len(aliens)} alien.")

favorite_language = {
    "bob": ["python"],
    "alice": ["cpp", "switch", "java"],
    "macle": ["python", "go"],
    "dive": ["python", "c"],
}

for name, languages in favorite_language.items():
    print(f"\n{name.title()} favorite language are:")
    for language in languages:
        print(f"\t{language.title()}")

cities = {
    "chingqing": {
        "country": "china",
        "population": 20000000,
        "fact": "mounten city",
    },
    "wuhan": {
        "country": "china",
        "population": 15000000,
        "fact": "many bridge",
    },
    "xiamen": {
        "country": "china",
        "population": 8569000,
        "fact": "coastal city",
    },
}
for city_name, messages in cities.items():
    print(f"\n{city_name}:")
    for message, value in messages.items():
        print(f"\t{message.title()}:{value}")
