# def do_stuff(num = 0):
#    try:
#     if num :
#         	return int(num) + 5
#     else : 
#         	return 'please enter the number'
#    except ValueError as err:
#     return err
#     

import random

def run_guess(guess, answer):
 if 0 < guess< 11:
  if guess == answer:
   print("you are genius")
   return True
 else: 
  print("hey man , i said number should be between 1 to 10")
  return False

if __name__ == '__main__':
	answer = random.randint(1, 10) 
	while True:
	    try:
	        guess = int(input("guess a number between 1-10"))
	        if(run_guess(guess , answer)):
	        	break

	    except:
	    	print("please enter the number")    	       
	    	continue

