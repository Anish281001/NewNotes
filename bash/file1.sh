#! /bin/bash                     

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
