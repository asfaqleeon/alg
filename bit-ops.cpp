#include <iostream>
using namespace std;


int main() {
	
	int a=60,b=13;
	
	int c = a&b; //AND
	int d = a|b; //OR
	int e = a^b; //XOR
	int f = ~a; //Complement
	int g = a<<2; //Left shift
	int h = a>>2; //Right shift
	
	cout<< c <<endl;
	cout<< d <<endl;
	cout<< e <<endl;
	cout<< f <<endl;
	cout<< g <<endl;
	cout<< h <<endl;
	
	return 0;
}