echo "Enter the file you wish to compile and run and then enter: "

read filename

g++ ./$filename -o $filename.out

./$filename.out

echo "done"
