echo "Enter number"
read num
num=`expr $num % 2`
if [ $num -eq 0 ]
then
echo "even"
else
echo "odd"
fi
