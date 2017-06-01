class GcdLcm
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

	public static void main (String[] args) throws java.lang.Exception
	{
		System.out.println(gcd(664,414));
		System.out.println(lcm(664,414));
	}
}