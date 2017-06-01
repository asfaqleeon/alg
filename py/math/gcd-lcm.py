def gcd(a,b):
	while(b!=0):
		m=a%b
		a=b
		b=m
	
	return a
	
def lcm(a,b):
	m = (a*b)/gcd(a,b)
	return m


print gcd(664,414)
print lcm(664,414)

# python 3
#print (gcd(664,414))
#print (lcm(664,414))