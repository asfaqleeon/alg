var input=200, arr = [];
var s = Math.sqrt(input);

var i,j;
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

var count=0;
for(i=2;i<=input;i++){
	if(arr[i] == 0){
		console.log(i);
		count++;
	}
}
console.log("total: "+count);