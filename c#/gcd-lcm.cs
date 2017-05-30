using System.IO;
using System;

class Program
{
    static int gcd(int a,int b){
    	int m;
    	while(b!=0){
    		m=a%b;
    		a=b;
    		b=m;
    	}
    	return a;
    }
    
    static int lcm(int a,int b){
    	int m = (a*b)/gcd(a,b);
    	return m;
    }
    static void Main()
    {
        Console.WriteLine(gcd(664,414));
        Console.WriteLine(lcm(664,414));
    }
}
