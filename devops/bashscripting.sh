#  ->note:-  agr kisi script file ke header par #! /bin/bash bhi nhi lagao aur na hi uss file ko executable permission bhi nhi di toh bhi agr tum yeh command(bash filename.sh) likhoge toh bhi file run karegi.


*** in this script we are pasting content in a different file file.txt through running script.

#! /bin/bash
echo "hello , this is the bash script" > file.txt

-----------------------------------------------------------

*** in this script we are showing method to comment out group of lines and a method in which whatever we write on terminal after running this script , that will get paste in file file.txt.

#! /bin/bash


# this is a comment and below is the way to comment a group of lines 

: '

this is a comment 
this is a comment 

'

cat > file.txt


-----------------------------------------------------------

*** in this script we are showing different type of conditions. 

#! /bin/bash

count=1

if [ $count -eq 10 ]
then
	echo " the condition is true"
else
	echo " the condition is false"

fi

#------------------------

if [ $count -gt 10 ]
then
        echo " the condition is true"
else
        echo " the condition is false"

fi

#------------------

if (( $count > 10 ))
then
        echo " the condition is true"

elif (( $count <= 9 )) && (( $count >0 ))
then
	echo " the condition is not false"

else
        echo " the condition is false"

fi

#------------------

if (( $count > 10 ))
then
        echo " the condition is true"

elif (( $count <= 9 &&  $count >0 ))
then
        echo " the condition is not false"

else
        echo " the condition is false"

fi

-----------------------------------------------------------

*** in this script , showing while loop . yeh loop tab tak chalta hai jab tak bracket ke andar ki condition true hoti rhe.

#! /bin/bash

number=1
while (($number < 10))
do 
	echo " $number "
	number=$(( $number+1 ))
done
-----------------------------------------------------------
***  in this script , showing until loop . yeh loop tab tak chalta hai jab tak bracket ke andar ki condition false hoti rhe.

#! /bin/bash

number=1
while (($number > 10))
do 
	echo " $number "
	number=$(( $number+1 ))
done

-----------------------------------------------------------
*** in this script, showing for loop . 

#! /bin/bash

for i in {1..10}
do
	echo $i
done

for ((i=0;  i<5; i++ ))
do
	echo $i
done

for i in {1..10..2}  # starting.. ending..increment 
do
        echo $i
done

-----------------------------------------------------------
*** in this script , showing break and continue statement.

#! /bin/bash

for ((i=0; i<=10; i++ ))
do 
	if (( $i >= 5 ))
	then 
	    break	
        fi
 	echo $i

done 	

for ((i=0; i<=10; i++ ))
do 
	if (( $i == 3 || $i == 6 ))
	then 
	    continue	
        fi
 	echo $i

done 	

-----------------------------------------------------------
*** in this script , we are showing script input. 

#! /bin/bash

echo $1 $2 $3  # it prints the arguements which we will give while running the script in the terminal.



#! /bin/bash

# yha apn ek array bna rahe h jo bhi arguement pass honge while running the script unki.

args=("$@")  # yaha @ ka mtlb h ki kitne bhi arguement pass kar sakte hai while running the script . par idhar koi number se replace kar de to utne hi arguement pass kar sakte hein. 

echo ${args[0]} ${args[1]} ${args[3]}

echo $@   # print all the elemnts of the array 

echo $#   # print the length of array 


#! /bin/bash

while read line 
do 
    echo " $line "
done < "${1:-/dev/stdin}"    

# iss script mein apn kisi file ke content ko print kra sakte hein. aur apn ko uss file ka name yeh script run karte samay dena hoga. example:-    ./script.sh  filename 

-----------------------------------------------------------
*** in this script, we are showing script output.

#! /bin/bash

# different cases 

ls -al 1>file1.txt 2>file2.txt    #  iss step mein command(ls -al ) command execute hoga toh iska output file1.txt mein jaayega aur agar error generate hoga toh file2.txt mein jaayega. 

ls +al 1>>file1.txt 2>>file2.txt   # iss step mein command(ls -al ) command execute hoga toh iska output file1.txt mein jaayega aur agar error generate hoga toh file2.txt mein jaayega. 

ls -al >file.txt  # iss step mein apan ne file describe nahi kiya ki konsi wali output ke liye hai aur konsi error ke liye toh yeh iss file ko output k liye hi use karega , and agar error generate hota toh vo terminal par hi show hota , by default iss file mein nhi jaata. 

ls +al >file.txt 2>&1  # iss step se both output and error same file mein hi jaayenge. 

ls +al >& file.txt  # iss step se both output and error same file mein hi jaayenge. 

-----------------------------------------------------------
*** in this script we are sending output from one script to another script. 

# first script(file.sh)

#! /bin/bash
MESSAGE="hello audience"
export MESSAGE
./file1.sh

# second script ( file1.sh)

#! /bin/bash
echo "the message from the first script is : $MESSAGE"

# if we run the first script then it will create a variable and export that variabe to  secondscript and then it will automatically run the second script which is using the variable of the first script in printing the message. 

-----------------------------------------------------------
*** in this script , we wre doing string processing.

#! /bin/bash                                  // this script is checking that the scripts are same or not. 

echo "enter 1 string"
read st1

echo "enter 2 string"
read st2

if [ $st1 == $st2 ]
then 
	echo "strings match"
else 
	echo "strings not matched"
fi 


#! /bin/bash 

   # this script is checking that which string come first acc. to the dictionary. the one which come first is smaller. 

echo "enter 1 string"
read st1

echo "enter 2 string"
read st2

if [ "$st1" \< "$st2" ]
then 
	echo "$st1 is smaller than $st2"

elif [ "$st1" \> "$st2" ]
then 

	echo "$st2 is smaller than $st1"
else 
	echo "both strings are equal"
fi 


#! /bin/bash                # this script is doing concatenation of strings.

echo "enter 1 string"
read st1

echo "enter 2 string"
read st2

c=$st1$st2

echo $c

#! /bin/bash

echo "enter 1 string"
read st1

echo "enter 2 string"
read st2

echo ${st1^^}  # converting lowercase to uppercase

-----------------------------------------------------------
*** in this script we are showing arithmetic operations.

#! /bin/bash

n1=4 
n2=45

echo $((n1 + n2))
echo $((n1 - n2))
echo $((n1 * n2))
echo $((n1 / n2))
echo $((n1 % n2))
echo $(expr $n1 + $n2)  #for adding two numbers and same for other operations also.


#! /bin/bash

echo "enter hex number of your choice"  #here we are converting hexadecimal to decimal. 
read hex

echo -n "the decimal value of $hex is :"    # -n ka matlab agli line iss line ke just baad hi print ho jaayegi.

echo "obase=10; ibase=16; $hex" | bc 

----------------------------------------------------------
*** in this script we are showing declare command.
# The declare statement is a built-in Bash command that allows you to set attributes for variables. When you declare a variable, you are telling Bash to treat that variable in a certain way. For example, you can declare a variable to be read-only or to be an array.

declare -p = to get all the declared variable . 

declare myvariable = to create a declare variable. 

declare myvariable=<value> = to give a value to our  declared variable. 


#! /bin/bash
declare -r pfile=/etc/passwd   # in this script , we are creating readonly declare variable. 
echo $pfile
pfile=/etc/abc.txt 
echo $pfile

-----------------------------------------------------------
*** in this script we are implementing arrays. 

#! /bin/bash

car=('bmw' 'honda' 'toyota')

unset car[2]  # used to remove the element from the array.

car[2]='Mercedes'  # used to set the element in the array. 

echo "${car[@]}"   #  display the array elements.

echo "${!car[@]}"  # gives the list of indexes of elements which are present in arrays.

echo "${#car[@]}"  # total number of element in the array.
-----------------------------------------------------------
*** in this script we are implementing a function.

#! /bin/bash
# simple function , just printing a sentence. 
function func1()
{
  echo "this is a new functions"
}
func1


#! /bin/bash
#function running with  passed multiple arguements hi this is a Anish. 
function func1()
{
  echo  $1 $2 $3 $4 $5
}

func1 hi this is a Anish. 


#! /bin/bash                            
function func ()
{
        value="anish"
}
 echo $value 
value="jain"
echo $value 
func
echo $value


#! /bin/bash                               
echo $value  
value="jain"
echo $value 
function func ()
{
        value="anish"
}
func
echo $value 

output:- 
jain
anish 

# yaha bash script mein koi bhi variable function ke andar h to voh function k liye local nhi hota hai. agar koi variable ko function ke bahar define kara hai and function ke andar uski value change kardi then if we print the value of that variable outside the function then it will print the changed value.  
----------------------------------------------------------
*** in this script we are showing file and directories.

#! /bin/bash                     # in this script we are checking that directory exists or not.

echo "enter directory name to check"
read direct 

if [ -d "$direct" ]
then 
       echo "$direct exists"
else 
	echo "$direct don't exists"
fi 


#! /bin/bash                      # here we are creating files. 
               
echo "enterthe file name to create"
read filename 

touch $filename


#! /bin/bash                     # in this script we are checking that filename exists or not.

echo "enter filename to check"
read file 

if [[ -f "$file" ]]
then 
       echo "$file exists"
else 
	echo "$file don't exists"
fi 


#! /bin/bash                               # here we are apppending the files with some content if the file is present . 
 
echo "enter the filename in which you want to append "           
read filename
if [[ -f $filename ]]
then 
        echo " enter the text which you want to append"
        read filenametext 
        echo $filenametext >> $filename 
else 
	echo "$filename don't exists"
fi     


----------------------------------------------------------
*** yeh sab linuxhint bashscript crash course  3hr on youtube se kiya hua hai 2.00 hour tak.
