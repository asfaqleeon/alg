input=200
arr = Array.new(10000)
s = Math.sqrt(input)

for i in 2..input
  if arr[i] != 1
    arr[i]=0
  end
  for j in 2..s+2
    if i*j <= input
      arr[i*j]=1
    end
  end
end
    

count=0
for i in 2..input
  if arr[i] == 0
    puts i
    count=count+1
  end
end
    
puts "total: #{count}"