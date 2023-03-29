# string built in methods or function
# note : strings are immutable. and tuples are also immutable which closed in small bracket.
#
# message = "corona vaccine is ready to use , most of them are more than 90% effective "
# print(message)
# print(message.capitalize())
# Message = message.capitalize()
# print("@@@@@@@@@@")
# print(Message)

#dir() function

# here if message is a string so it provides availaible builtin methods for a string.
# here if message is a list so it provides availaible builtin methods for a list .
# here if message is a dictionary so it provides availaible builtin methods for a dictionary.
# here if message is a tuple so it provides availaible builtin methods for a tuple.
# print(dir(message))

# convert all letter to upper case letters.
# print(message.upper())
# convert all letter to lower case letters.
# print(message.lower())
# print(message.isupper())
# print(message.islower())

# print(message.find("ready"))
# print(message[18:24])
# print(message.find("not"))

# join function
# seq1 = ("192" , "168" , "40" , "90")
# print(seq1)
# print(".".join(seq1))
# print("/".join(seq1))
# print("-".join(seq1))

# development =["node ", "angular", "react" , "java" , ".net" , "python"]
# print(development)
#
# development.append("javascript")
# print(development)
#
# development.extend(["jenkins" , "aws"])
# print(development)
#
# development.insert(1,"docker")
# print(development)
#
# # last se pop kardega
# development.pop()
# print(development)
#
# # mentioned position par pop kar dega
# development.pop(3)
# print(development)

data = {"name" : "anish" , "age" : 21 , "interest" : "devops"}
print(data.keys())
print(data.values())
data.clear()
print(data)
