#include <iostream>
using namespace std;

struct stack{
	int len;
	int capacity;
	int* arr;
};

stack* getnewstack(int capacity){
	stack* thestack = new stack();
	thestack->len = 0;
	thestack->capacity = capacity;
	thestack->arr = new int[capacity];
	return thestack;
}

void add(stack* thestack, int val){
	if (thestack->len<thestack->capacity){
		thestack->arr[thestack->len] = val;
		thestack->len++;
	}
	else{
		cout << "Your stack is full yo" <<endl;
	}
}

int pop(stack* thestack){
	if(thestack->len >0){
		int val = thestack->arr[thestack->len-1]; 
		thestack->arr[thestack->len] = 0;
		thestack->len--;
		return val;
	}
	else{
		cout << "Error: no elements in stack" << endl;
		return -1;
	}
}
void printStack(stack* thestack){
	for(int i=0; i<thestack->len; i++){
		cout << thestack->arr[i] << endl;
	}
}



int main(){
stack* thestack = getnewstack(5);
add(thestack,1); add(thestack,3); add(thestack,2); add(thestack,5); add(thestack,4);add(thestack,10);
printStack(thestack);
cout << pop(thestack) << endl;
printStack(thestack);









return 0;
};