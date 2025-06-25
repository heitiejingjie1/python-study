def make_pizza(size, *toppings):
    """概述要制作的pizza"""
    print(f"making a {size} - inch of pizza with the following toppings: ")
    for topping in toppings:
        print(f"- {topping}")
