

#include <iostream>
using namespace std;



void quickSort(int arr[], int left, int right){
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left+right)/2];

	//partition

	while(i<=j){
		while(arr[i]<pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<=j){
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;;
			i++;
			j--;
		}
	}

	//recursion
	if (left<j)
		quickSort(arr,left,j);
	if (i<right)
		quickSort(arr,i,right);

}

void printarr(int arr[], int len){
	for(int i=0; i<len; i++){
		cout << arr[i] << endl;
	}
} 



int main(){
	cout << "testing quicksort in cpp" << endl;
	int arr[10] = { 28, 2, 9, 10, 11, 0,-5, 9, 2, 1 };
	int len = sizeof(arr)/sizeof(arr[0]); 
	printarr(arr,len);
	quickSort(arr, 0,len-1);
	cout << endl;
	printarr(arr,len);
}
