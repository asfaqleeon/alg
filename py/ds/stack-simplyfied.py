arr = []

def push(data):
    arr.append(data)
    
def pop():
    arr.pop()
    
def printAll():
    for i in range(0,len(arr)):
        print arr[i]
        
    
push(1)
push(2)
push(3)
push(4)

pop()

printAll()
