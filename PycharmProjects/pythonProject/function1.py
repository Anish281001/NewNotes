# defining function
# def add(arg1 , arg2):
#     total = arg1 + arg2
#     return total
#
# ans = add(2 , 3)
# print(ans)
# print(add(10 , 30))


# def adder(arg1 , arg2):
#     total = arg1 + arg2
#     print(total)
#
# adder(10 , 30)
# print(adder(10 , 30))


# def summ(arg):
#     x = 0
#     for i in arg:
#         x = x + i
#     return x
#
# out = summ([10, 289, 343])
# print(out)

#default arguement

# def greetings(msg= "morning"):
#     print(f"good {msg}")
#     print("welcome to the function")
#
# # jab bhi arguement nhi denge to morning ko arguement jaise hi use karega.
#
# greetings()
# greetings("evening")

def vac_feedback(vac , efficacy):
    print(f"{vac} vaccine having {efficacy}% efficacy")
    if efficacy >= 80:
        print("good vaccine")
    else:
        print("Need more trials")

vac_feedback("sputnik" , 78)
vac_feedback("pfizer" , 8)
vac_feedback("covaxin" , 98) # order of arguements is important otherwise it will show an error
# vac_feedback( 34 , "pfizer") # it will give error
vac_feedback(efficacy= 45 , vac = "sputnik") # by this method there is no problem.




