# import unittest 
# import main

# class testmain(unittest.TestCase):
#    def setUp(self):
#       print('about to test a function') 
    
#    def test_do_stuff(self):
#       test_param = 10
#       result= main.do_stuff(test_param)
#       self.assertEqual(result , 15)
      
#    def test_do_stuff2(self):
#       test_param = 'asddfd'
#       result= main.do_stuff(test_param)
#       self.assertIsInstance(result , ValueError)
      
       
#    def test_do_stuff3(self):
#       test_param = None
#       result= main.do_stuff(test_param)
#       self.assertEqual(result , 'please enter the number')
        
#    def tearDown(self):
#    	  print('cleaning up')


# if __name__ == '__main__':
# 	unittest.main()

# -----------------------------

import unittest
import main


class TestGame(unittest.TestCase):
 def test_input(self):
  result = main.run_guess(5 , 5)
  self.assertTrue(result)

 def test_input_wrong_input(self):
  result = main.run_guess(5 , 10)
  self.assertFalse(result)

 def test_input_wrong_number(self):
  result = main.run_guess(5 , 11)
  self.assertFalse(result)

 def test_input_wrong_type(self):
  result = main.run_guess(5 , 'anish')
  self.assertFalse(result)
 


if __name__ == '__main__':
	unittest.main()
