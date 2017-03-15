#include <iostream>
#include <math.h>

using namespace std;

#define arr_len 100

int main()
{
   int input=15, base=2, temp_arr[arr_len], output_arr[arr_len], count=0;
   while(input > 0){
       //cout << input%base <<endl;
       temp_arr[count] = input%base;
       count++;
       input = input/base;
   }
   
   int i,c=count-1;
   
   for(i=0;i<count;i++){
       output_arr[i] = temp_arr[c--];
   }
   
   for(i=0;i<count;i++){
       cout<< output_arr[i];
   }
   cout<<endl;
   
   //cout<<"output"<<endl;
   int j,temp=0;
   for(j=0;j<count;j++){
       //cout << output_arr[j]<<endl;
       temp = temp + (temp_arr[j] * pow(base,j));
   }
   
   cout<< temp<<endl;
   
   return 0;
}



