#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

/*

v1 = rand() % 100;         // v1 in the range 0 to 99
v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014 

*/
int main() {
	
	srand(time(NULL));
	
	int r1 = rand()%10; // between 0-9
	cout<<r1<<endl;
	
	srand(time(NULL));
	
	int r2 = rand()%10+5; // between 5-14
	cout<<r2<<endl;
	return 0;
}