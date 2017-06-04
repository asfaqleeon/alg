arr = []
arr = [0]*10

size=0

def push(data):
    global size
    arr[size] = data
    size = size+1
    
def pop():
    global size
    arr[size]=0
    size = size-1
    
def printArr():
    for i in range(0,size):
        print arr[i]
 
push(1)
push(2)
push(3)
push(4)

pop()

#print size
printArr()