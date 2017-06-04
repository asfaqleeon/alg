var arr = []

function push(data){
	arr.push(data);
}

function pop(){
	arr.pop();
}

function printAll(){
	var i;
	for(i=0;i<arr.length;i++){
		console.log(arr[i]);
	}
}

push(1);
push(2);
push(3);
push(4);

pop();

printAll();