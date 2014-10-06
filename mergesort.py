#def mergeSort(arr):
#	if( len(arr)=(0 or 1) ):
#		return arr
	

#def divide(arr, first, last):
#	mid = (first+last)/2
#	if(first<last):
#		print arr[first:mid+1]
#		print arr[mid+1:last+1]
#		divide(arr,first,mid)
#		divide(arr,mid+1,last)
#	else:
		
def merge(arr1,arr2):
	arr3 = []
	i=0; j=0;
	while( (i<len(arr1)) or (j<len(arr2)) ):
		if(i<len(arr1) and (j>=len(arr2) or arr1[i]<=arr2[j] ) ):
			arr3.append(arr1[i])
			i=i+1;
			print arr3; print i
		if(j<len(arr2) and (i>=len(arr1) or arr2[j]<=arr1[i] ) ):
			arr3.append(arr2[j])
			j = j+1
			print arr3; print j
	return arr3;

def mergesort(arr):
	if(len(arr)<2):
		return arr;
	else:
		mid = len(arr)//2
		return merge(mergesort(arr[0:mid]),mergesort(arr[mid:len(arr)]))


a = [1,3,5,8,10];
b = [2,4,6,7,8,12];
c = merge(a,b);
print c
#divide(a,0,len(a)-1)
d = [-5,100,2,8,-5,-60,-50,26,27,13,76]
print mergesort(d)

