f0=0
f1=1
fn=0

for i in 0..2
	fn=f0+f1
	f0=f1
	f1=fn
end

print fn