$arr = Array.new()

def push (data)
    $arr.push(data)
end
    
def pop()
    $arr.pop()
end
    
def printArr()
    for a in $arr
        puts "#{a}"
    end
end
 
push(1)
push(2)
push(3)
push(4)

pop()

puts "size is: #{$arr.length()}"
printArr()