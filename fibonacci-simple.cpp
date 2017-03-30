#include <iostream>
using namespace std;


int main() {
	int f0=0, f1=1, fn=0, i;
	
	for(i=3; i<=5; i++){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	cout<<fn<<endl;
	
	return 0;
}