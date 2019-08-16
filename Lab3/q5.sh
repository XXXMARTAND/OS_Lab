echo "Enter 2 operands: "
read a b
echo "Enter operation: "
read op
case $op in
	[+])
		ans=$((a+b))
		;;
	[-])
		ans=$((a-b))
		;;
	[*])
		ans=$((a*b))
		;;
	[/])
		ans=$((a/b))
		;;
esac
echo "Answer: $ans"
