#include <iostream>
using namespace std;

int arr[1000];
int count;

void push(int item){
    arr[count] = item;
    count++;
}

void pop(){
    arr[count] = 0;
    count--;
}

void print(){
    int i;
    for(i=0;i<count;i++){
        cout << arr[i] <<", ";
    }
    cout<<endl;
}

int main() {
	count = 0;
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	
	print();
	pop();
	print();
	pop();
	print();
	
	return 0;
}
