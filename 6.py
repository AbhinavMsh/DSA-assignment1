# reverse a number
num = int(input("Enter #:"))

while num > 0:
    ld = num % 10 
    num = num // 10
    print(ld,end="")