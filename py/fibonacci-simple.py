f0=0
f1=1
fn=0

for i in range(0,3):
	fn=f0+f1
	f0=f1
	f1=fn


print fn

#python 3
#print (fn)