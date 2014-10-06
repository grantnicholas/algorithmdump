#! /usr/bin/env python

class node:
    def __init__(self,data=None, next=None):
        self.data = data # contains the data
        self.next = next # contains the reference to the next node


class linked_list:
    def __init__(self):
        self.cur_node = None

    def add_node(self, data):
        new_node = node(data,self.cur_node) # create a new node
        self.cur_node = new_node #  set the current node to the new one.

    def list_print(self):
        node = self.cur_node # cant point to ll!
        while node:
            print node.data
            node = node.next

    def pop(self):
	val = self.cur_node.data
	self.cur_node = self.cur_node.next
	return val

    def find(self,val):
	node = self.cur_node
	count = 0
	while(node and val != node.data):
		node = node.next
		count +=1
	if node:
		 return count 
	else:
		 return -1

    def remove(self,val):
	if val == self.cur_node.data:
		return pop()
	node = self.cur_node
	prev = None
	while(node and node.data != val):
		prev = node
		node = node.next
	if(node):
		prev.next = prev.next.next
		return node.data 
		
	else:
		return -1

ll = linked_list()
ll.add_node(1)
ll.add_node(2)
ll.add_node(3)
ll.add_node(5)
ll.list_print()
print "\n"
print ll.pop()
print "\n"
ll.list_print()

print ll.find(1)
print "\n"
ll.list_print()
print "\n"
print ll.remove(2)
print "\n"
ll.list_print()
