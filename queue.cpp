#include <iostream>
using namespace std;

struct queue{
	int capacity;
	int first;
	int last;
	int* arr;
};

queue* getNewQueue(int capacity){
	queue* q = new queue();
	q->capacity = capacity;
	q>first = 0;
	q->last = 0;
}