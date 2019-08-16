echo "Enter a: "
read a
echo "Enter b: "
read b
echo "Enter c: "
read c
d=$(($b*$b-4*$a*$c))
case $d in
	[0])
		ans=$((-$b/2*$a))
		echo "Equal roots: $ans"
		;;
	[0-9]*)
		sq=$(echo "scale=2;sqrt($d)"|bc)
		ans1=$(((-$b+$sq)/(2*$a)))
		ans2=$(((-$b-$sq)/(2*$a)))
		echo "Real Roots: $ans1 & $ans2"
		;;
	[-+0-9]*)
		d=$((-$d))
		sq=$(echo "scale=2;sqrt($d)"|bc)
		ans=$(echo "scale=2;-$b/(2*$a)"|bc)		
		echo "Imaginary Roots: $ans+i$sq & $ans-i$sq"
		;;
esac
