# check if prime or not
num  = int(input("Enter #:"))
factors = 0
if num ==0 or num ==1:
    print("Neither prime nor composite")
else:
    for i in range(1,num+1):
        if num % i == 0 :
            factors += 1
    
    print("Prime" if factors == 2 else "Not Prime")