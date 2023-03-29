# break statement
'''
for i in "devops":
    print(i)
    if i == "o":
        print("found my data ")
        break
print("out of loop")
'''

# continue statement
'''
for i in "devops":
    if i == "o":
        print("found my data")
        continue
    print(f"value of i is {i}")

print("out of loop")

'''

'''

import random
development =["node ", "angular", "react" , "java" , "c++" , "python"]

random.shuffle(development)        
print(development)

lucky = random.choice(development)
print(lucky)

for dev in development:
    print(f"***testing vaccine {dev}")
    if dev == lucky:
        print("#######################")
        print(f"{lucky} development , Test succeed")
        print(f"######################")
        break
    print(f"XXXXXXXXXXXXXX")
    print("test failed")
    print("XXXXXXXXXXXXXXX")
'''

