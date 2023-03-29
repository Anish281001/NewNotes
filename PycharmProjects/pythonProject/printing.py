name = "sarscovid2"
disease = "covid19"
print("the name of the virus is " , name )
print("the name of the virus is {}".format(name))
print(name , "is the name of the virus ")
print("{} is the name of the virus.".format(name))

print("the name of virus is {} and it causes {}".format(name,disease))

#here in below method that f is important otherwise below method will not work .
print(f"the name of virus is {name} and it causes {disease}")

#concatenation
print("the name of the virus is " + " " + name )
