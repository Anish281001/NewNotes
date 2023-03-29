'''
this script will implement our knowledge on conditions and different datatypes
'''

print("ITO has various skill sets")
print("find out your match")
print("enter your capitalised values:")

devops = ["linux" , "vagrant" , "bash scripting" , "aws" , "jenkins" , "python" , "ansible"]
development =( "node ", "angular", "react" , "java" , ".net" , "python")

cntr_empl1 = { "name" : "santa" , "skill" : "blockchain" , "code" :1024}
cntr_empl2 = { "name" : "sanju" , "skill" : "AI" , "code" :1218}

usr_skill = input("enter your desired skill")
#print(usr_skill)

# check in the database if we have skill

if usr_skill in devops:
    print(f"we have {usr_skill} in devops team.")

elif usr_skill in development:
    print(f"we have {usr_skill} in development")

elif (usr_skill in cntr_empl1.values()) or (usr_skill in cntr_empl2.values()):
    print(f"we have contract employees with {usr_skill} skill")
else:
    print("we don't have desired skill in any of our team .")

