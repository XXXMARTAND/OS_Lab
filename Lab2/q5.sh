echo Enter file1
read file1
echo Enter file2
read file2
sort -n -u $file1 $file2 > a3.txt
