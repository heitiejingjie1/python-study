"""创建和使用类"""

# 创建类


class Dog:
    """模拟小狗"""

    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age

    """坐"""

    def sit(self) -> None:
        print(f"{self.name} is now sitting.")

    """打滚"""

    def roll_over(self) -> None:
        print(f"{self.name} rolled over.")


# 使用类
my_dog = Dog("xiaohei", 2)
my_dog.sit()
my_dog.roll_over()


class User:
    """用户类"""

    def __init__(self, first_name: str, last_name: str, email: str, age: int) -> None:
        self.first_name = first_name
        self.last_name = last_name
        self.email = email
        self.age = age
        self.sex = "man"

    def describe_user(self) -> None:
        print(
            f"{self.first_name} {self.last_name} age is {self.age}, sex is {self.sex}, email is {self.email}"
        )

    def greet_user(self) -> None:
        print("hello user.")


user = User("heitie", "jinbjie", "xxxx@ji.com", 29)
user.describe_user()
user.greet_user()


class Car:
    """汽车类"""

    def __init__(self, make, model, year) -> None:
        """初始化信息"""
        self.make = make
        self.model = model
        self.year = year
        self.odometer_reading = 0

    def get_descriptive(self) -> str:
        """返回描述信息"""
        long_name = f"{self.year} {self.make} {self.model}"
        return long_name.title()

    def update_odometer(self, milege: int) -> None:
        """更新里程数"""
        if milege <= self.odometer_reading:
            print("don't make.")
            return

        self.odometer_reading = milege

    def increment_odometer(self, miles):
        """增加里程数"""
        if miles <= 0:
            return
        self.odometer_reading += miles

    def read_odometer(self) -> None:
        """打印里程数"""
        print(f"The car has {self.odometer_reading} miles on it.")


my_car = Car("audi", "a4", 2019)
print(my_car.get_descriptive())
my_car.odometer_reading = 69
my_car.read_odometer()
my_car.update_odometer(12)
my_car.read_odometer()
my_car.update_odometer(8)
my_car.read_odometer()

"""继承"""


class Batteray:
    """电瓶类"""

    def __init__(self, batteray_size=75) -> None:
        self.batteray_size = batteray_size

    def describe_batteray(self):
        """描述电瓶容量"""
        print(f"The car has a {self.batteray_size}-kwh.")

    def get_range(self) -> int:
        """续航里程"""
        range = 0
        if self.batteray_size == 75:
            range = 200
        if self.batteray_size == 100:
            range = 315

        return range


class ElectriCar(Car):
    """电动车独特之处"""

    def __init__(self, make, model, year) -> None:
        super().__init__(make, model, year)
        self.batteray = Batteray()


my_elec_car = ElectriCar("tesla", "moudel s", 2025)
my_elec_car.batteray.describe_batteray()
range = my_elec_car.batteray.get_range()
print(range)
