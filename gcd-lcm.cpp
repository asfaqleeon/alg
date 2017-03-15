#include <iostream>
using namespace std;

int gcd(int a,int b){
	int m;
	while(b!=0){
		m=a%b;
		a=b;
		b=m;
	}
	//cout<<a<<endl;
	return a;
}

int lcm(int a,int b){
	int m = (a*b)/gcd(a,b);
	return m;
}

int main() {
	
	cout<<gcd(664,414)<<endl;
	cout<<lcm(664,414)<<endl;
	
	return 0;
}