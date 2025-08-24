# generate fibonacci series
num = int(input("Enter #:"))
ld = 1
ld2 = 0
if num == 0 or num == 1:
    print(num)
else:
    print(ld2,end=" ")
    print(ld,end=" ")
    for i in range(2,num):
        temp = ld
        ld += ld2
        ld2 = temp
        print(ld,end=" ")