class PrimeSeive
{
	public static void main (String[] args)
	{
        int input=200;
        int[] arr = new int[10000];
    	double s = Math.sqrt(input);
    	
    	int i,j;
    	for(i=2; i<=input; i++){
    		if(arr[i] != 1){
    			arr[i]=0;
    		}
    		for(j=2; j<s+2; j++){
    			if(i*j <= input){
    				arr[i*j]=1;
    			}
    		}
    	}
    	
    	int count=0;
    	for(i=2;i<=input;i++){
    		if(arr[i] == 0){
    		    System.out.println(i);
    			count++;
    		}
    	}
    	
        System.out.println("total: "+count);

	}
}