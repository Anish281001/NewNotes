import random

def vac_feedback(vac , efficacy):
    print(f"{vac} vaccine having {efficacy}% efficacy")
    if efficacy >= 50 and (efficacy <= 75):
        print("seems not so effective , needs more trials")

    elif (efficacy >75 ) and (efficacy < 90):
        print("can consider this vaccine")

    elif efficacy >= 90:
        print("sure , will take the shot ")
    else:
        print("Need many more trials")

def order_food(min_order , *args):
    print(f"you have ordered : {min_order}")
    print(args)
    for item in args:
         print(f"you have ordered : {item}")
    print("your food will be deliverd in 30 mins :")
    print("enjoy the party")

def function(*args , **kwargs):
    print(args)
    print(kwargs)
    min = sum(args) + random.randint(0, 60)
    print(min)
    choice1 = random.choice(list(kwargs.keys()))
    print(choice1)
    choice2 = random.choice(list(kwargs.values()))
    print(choice2)
    print(f"you have to spend {min} for {kwargs[choice1]}")


