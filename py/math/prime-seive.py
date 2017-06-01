import math

input_range=200
arr = []
arr = [0]*10000

s = math.sqrt(input_range)

for i in range(2,input_range+1):
    if arr[i] != 1:
        arr[i]=0
    for j in range(2, int(s+3)):
        if i*j <= input_range:
            arr[i*j]=1
        

count=0
for i in range(2,input_range+1):
    if arr[i] == 0:
        print i
        count=count+1
        
print "total: ",count