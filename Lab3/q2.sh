echo "Enter n: "
read n
x=1
while [ $n -ge 1 ]
do
	echo $x
	x=$((x+2))
	n=$((n-1))
done
