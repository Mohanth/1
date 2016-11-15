echo -e " press 1 to add \n press 2 to subtract \n press 3 to multiply \n press 4 to divide" 
read ch 
echo -e "\n enter two numbers :\n" 
read a 
read b 
if test $ch -eq 1 
then 
        expr $a + $b 
elif test $ch -eq 2 
then 
        expr $a - $b 
elif test $ch -eq 3 
then 
        expr $a \* $b 
else 
        expr $a / $b 
fi     
