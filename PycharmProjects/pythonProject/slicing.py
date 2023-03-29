"""
planet1 = "closest to sun"
print(planet1)

print(planet1[0])
print(planet1[1])
print(planet1[2])
print(planet1[3])
print(planet1[4])
print(planet1[-1])
print(planet1[-2])
print(planet1[-3])

# slicing a string to get a substring from a string

print(planet1[1:9])  # from starting index as 1 to ending till 9
print(planet1[:7])  # from starting to till 7
print(planet1[11:])  #from starting index as 11 to end of string.

# slicing a tupple or a list same method

devops = ("linux " , "vagrant " , "bash scripting " , " aws" , "jenkins " , "python " , " ansible")
print(devops[0])
print(devops[4])

print(devops[2:5])
print(devops[2:5][0])

print(devops[2:5][0][5:11])
print(devops[2:5][0][5:11][-1])
"""
# dictionary
skills = {"devops" : ("linux " , "vagrant " , "bash scripting " , " aws") , "development " : ["java " , "nodejs " , ".net"]}
print(skills)
print(skills["devops"])
print(skills["development "])
print(skills["devops"][-1])
print(skills["devops"][-1][:4])