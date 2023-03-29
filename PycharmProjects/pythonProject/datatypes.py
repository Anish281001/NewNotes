# list / collection of multi datatypes , enclosed in square brackets

str1 = "devops "
str2 = "engineer"

var1 = 10
var2 = 200
# making list
firstlist = [ str1 , "devopsengineer " , var1 , 5.8 , 67]

#printing list
print(firstlist)

# tuple/collection of multiple data types , enclosed in round bracket
firsttuple = (str2 , "devopsengineer " , var2 , 5.8 , 67)

#printing tuple
print(firsttuple)

#dictionary / Elements in the dictionary are always in the pairs (key:values),curly braces

firstdictionary = {"Name " : "anish" , "age " : 20 , "weight" : 85 , "exercises" : ["boxing" , "dancing " , "yoga " , "fighting" , "jogging "]}
print(firstdictionary)

print("variable first list is a:" , type(firstlist))
print("variable first tuple is a:" , type(firsttuple))
print("variable first dictionary is a:" , type(firstdictionary))

# boolean

x = True
y = False

print(x)
print(y)

print("x is a " , type(x))
print("y is a " , type(y))