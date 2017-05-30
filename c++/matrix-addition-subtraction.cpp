#include <iostream>
using namespace std;

int a[2][2] = {
		{2,8},
		{0,9}
	};
	
int b[2][2] = {
		{5,6},
		{11,3}
	};

int c[2][2];

int i,j;

void add(){
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			c[i][j] = a[i][j]+b[i][j];
		}
	}
}

void sub(){
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			c[i][j] = a[i][j]-b[i][j];
		}
	}
}

void print(){
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main() {
	add();
	sub();
	print();
	
	return 0;
}