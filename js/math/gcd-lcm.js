function gcd(a,b){
	var m;
	while(b!=0){
		m=a%b;
		a=b;
		b=m;
	}
	return a;
}

function lcm(a,b){
	var m = (a*b)/gcd(a,b);
	return m;
}

console.log(gcd(664,414));
console.log(lcm(664,414));