#include <iostream>
using namespace std;

//child 2k+1, 2k+2
//parent k-1/2, k-2/2

int k=0, arr[100];

void shiftUp(){
	int parent, index=k;
	
	while(index>0){
		parent=(index-1)/2;
		
		if(arr[parent] < arr[index]){
			int temp = arr[parent];
			arr[parent]=arr[index];
			arr[index] = temp;
		}
		index=parent;
		//cout<<index<<endl;
	}
	//cout<<"----"<<endl;
}

void shiftDown(){
	
	int index=0;
	
	while(index <= k){
		int left=2*index+1;
		int right=2*index+2;
		
		if(arr[index]>arr[left] && arr[index]>arr[right] ) break;
		else{
			if(arr[left]<arr[right]){
				int temp = arr[right];
				arr[right] = arr[index];
				arr[index] = temp;
				
				index=right;
			} else if(arr[left]>arr[right]){
				int temp = arr[left];
				arr[left] = arr[index];
				arr[index] = temp;
				
				index=left;
			}
		}
		
	}
}

void rm(){
	arr[0]=arr[k-1];
	k--;
	shiftDown();
}

void insert(int in){
	arr[k]=in;
	shiftUp();
	k++;
}

void print(){
	int i;
	for(i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() {
	insert(18);
	insert(10);
	insert(15);
	insert(9);
	insert(10);
	insert(6);
	insert(8);
	insert(5);
	insert(2);
	insert(9);
	insert(7);
	insert(3);
	insert(2);
	insert(4);
	insert(3);
	
	rm();
	
	print();
	
	return 0;
}