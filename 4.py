# sum of First N numbers
num = int(input("Enter number:"))
sum=0
for i in range(1,num+1):
    sum += i
    i+=1
    
print(sum)