let input: number = 200;
let arr:number[] = [];
let s:number = Math.sqrt(input);

let i: number, j: number;

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

let count:number=0;
for(i=2;i<=input;i++){
	if(arr[i] == 0){
		console.log(i);
		count++;
	}
}
console.log("total: "+count);