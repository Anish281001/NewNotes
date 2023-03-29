# Variable length arguements *args(non keyword arguements)

# def order_food(min_order , *args):
#     print(f"you have ordered : {min_order}")
#     print(args)
#     for item in args:
#          print(f"you have ordered : {item}")
#     print("your food will be deliverd in 30 mins :")
#     print("enjoy the party")
#
# order_food("salad" , "pizza" , "biryani" , "soup") # these all are taken as an arguements in form of tuples which is
# # written inthe form of *args at declaration.

# Variable length arguements **kwargs(keyword arguements)

 # *args store variable in form tuples where as **kwargs store in form of dictionary .
import random
def function(*args , **kwargs):
    print(args)
    print(kwargs)
    min = sum(args) + random.randint(0, 60)
    print(min)
    choice1 = random.choice(list(kwargs.keys()))
    print(choice1)
    choice2 = random.choice(list(kwargs.values()))
    print(choice2)
    print(f"ypu have to spend {min} for {kwargs[choice1]}")

function(10 , 20, 10 , hobby = "dance" , sport = "boxing" , fun = "driving " , work = "devops")
