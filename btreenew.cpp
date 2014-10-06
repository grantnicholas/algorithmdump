#include <iostream>
#include <queue>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

int* arr = new int [100];
int len =0;

Node* getNewNode(int data){
	Node* newnode = new Node();
	(*newnode).data = data;
	(*newnode).left = NULL;
	(*newnode).right = NULL;
	return newnode;
}

void insert(Node** root, int data){
	if(*root == NULL){
		*root = getNewNode(data);
	}
	else if (data>(**root).data){
		insert(&((**root).right), data);
	}
	else{
		insert(&((**root).left), data);
	}
	
}

bool findVal(Node* root, int data){
	if(root == NULL){
		return false;
	}
	else if ((*root).data == data){
		return true;
	}
	else if(data > (*root).data){
		findVal((*root).right, data);
	}
	else{
		findVal((*root).left, data);
	}
	
}

int findMax(Node* root){
	if(root == NULL){
		return -1;
	}
	else if ( (*root).right == NULL){
		return (*root).data;
	}
	else{
		findMax((*root).right);
	}
}

int findMin(Node* root){
	if(root == NULL){
		return -1;
	}
	else if ( (*root).left == NULL){
		return (*root).data;
	}
	else{
		findMin((*root).left);
	}
}

// int height(Node* root, int level){
// 	if(root == NULL){
// 		return level-1;
// 	}
// 	else if ((*root).left == NULL && (*root).right == NULL){
// 		return level;
// 	}
// 	else{
// 		height((*root).left, level+1);
// 		height((*root).right, level+1);

// 	}
// }
int max(Node* root1, Node* root2){
	if((*root1).data >= (*root2).data){
		return (*root1).data;
	}
	else{
		return (*root2).data;
	}
}

int height(Node* root){
	if(root == NULL){
		return -1;
	}
	else{
		return max( height((*root).left), height((*root).right) )+1;
	}
}

void printPreorder(Node* root){
	if(root != NULL){
		cout << (*root).data << endl;
		printPreorder((*root).left);
		printPreorder((*root).right);
	}
}

void printPostorder(Node* root){
	if(root != NULL){
		printPostorder((*root).left);
		printPostorder((*root).right);
		cout << (*root).data << endl;
	}
}

void printInorder(Node* root){
	if(root != NULL){
		printInorder((*root).left);
		cout << (*root).data << endl;
		printInorder((*root).right);
	}
}

void printBreadth(Node* root){
	if(root == NULL){
		return;
	}
	queue<Node*> Q;
	Q.push(root);
	while(!Q.empty()){
		Node* current = Q.front();
		cout << (*current).data << " ";
		if((*current).left != NULL) Q.push((*current).left);
		if((*current).right != NULL) Q.push((*current).right);
		Q.pop();	
	}
}

void arrInorder(Node* root){
	if(root != NULL){
		arrInorder((*root).left);
		arr[len] = (*root).data; 
		len++;
		arrInorder((*root).right);
	}
}

bool isarrInorder(){
	for(int i=0; i<len-1; i++){
		if(arr[i]>arr[i+1]){
			return 0;
		}
	}
	return 1;
}

bool isBST(Node* root){
	arrInorder(root);
	if(isarrInorder()){
		return 1;
	}
	else{
		return 0;
	}

}


int main(){

	Node* root = NULL;
	insert(&root, 3);
	insert(&root, 5);
	insert(&root, 2);
	insert(&root, 10);
	insert(&root, 6);
	insert(&root, 15);
	insert(&root, 30);
	insert(&root, 0);
	insert(&root, 8);


	// if(findVal(root, 2)){
	// 	cout << "Found val" << endl;
	// }
	// else{
	// 	cout << "poop" <<endl;
	// }

	// if(root != NULL){
	// 	cout << "nutnull" << endl;
	// }
 
	// cout << (*root).data << (*(*root).left).data << endl;
	// cout << findMin(root) << endl;
	// cout << height(root);
	//printPreorder(root);
	printInorder(root);
	//printPostorder(root);
	//printBreadth(root);
	if(isBST(root)){
		cout << "IS BST!" <<endl;
	}
	else{
		cout << "is not BST" <<endl;
	}

	for(int i=0; i<len; i++){
		cout << arr[i] << " ";
	}

	return 1;
}