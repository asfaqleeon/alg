#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int in=200, arr[10000];
	int s = sqrt(in);
	
	int i,j;
	for(i=2; i<=in; i++){
		if(arr[i] != 1){
			arr[i]=0;
		}
		for(j=2; j<s+2; j++){
			if(i*j <= in){
				arr[i*j]=1;
			}
		}
	}
	
	int count=0;
	for(i=2;i<=in;i++){
		if(arr[i] == 0){
			cout<<i<<endl;
			count++;
		}
	}
	cout<<"total: "<<count<<endl;
	
	return 0;
}