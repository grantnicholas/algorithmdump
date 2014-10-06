def quicksort(arr,left,right):
	i = left; j = right;
	pivot= (left+right)/2;
	while(i<=j):
		while(arr[i]<arr[pivot]):
			i=i+1
		while(arr[j]>arr[pivot]):
			j=j+1
		if(i<=j):
			tmp = arr[i]
			arr[i] = arr[j]
			arr[j] = tmp	
			i= i+1
			j = j-1

	if(left<j):
		return quicksort(arr,left,j)
	if(i<right):
		return quicksort(arr,i,right)

arr = [1,90,2,4,-5,-20,-7,-89,80,2,0]
print arr
quicksort(arr,0,10)
print arr
