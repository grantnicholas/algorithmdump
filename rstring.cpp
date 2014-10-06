#include <iostream>
using namespace std;

int main(){

	string str = "hello";

	cout << str;
	int len = str.length();
	char tmp;
	for(int i =0; i<len/2; i++){
		tmp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = tmp;
	}
	cout << str;


return 1;
}
