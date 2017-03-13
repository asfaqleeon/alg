#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a[] = "geekforgeeksanditsageeksalways";
	char p[] = "geeks";
	
	int i,j,flag;
	int a_len = sizeof(a)/sizeof(a[0]);
	int p_len = sizeof(p)/sizeof(p[0]);
	
	for(i=0;i<a_len-1;i++){
		flag = 1;
		for(j=0;j<p_len-1;j++){
			if((i+j) < a_len){
				if(a[i+j] != p[j]){
					flag = 0;
				}
			}
		}
		if(flag == 1){
			cout<<"found for index "<<i<<endl;
		}
	}
	
	return 0;
}