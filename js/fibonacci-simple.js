var f0=0, f1=1, fn=0, i;

for(i=3;i<=50;i++){
	fn=f0+f1;
	f0=f1;
	f1=fn;
}

console.log(fn);