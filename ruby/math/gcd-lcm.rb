def gcd(a,b)
	while(b!=0)
		m=a%b
		a=b
		b=m
	end
	
	return a
end
	
def lcm(a,b)
	m = (a*b)/gcd(a,b)
	return m
end


puts gcd(664,414)
puts lcm(664,414)
