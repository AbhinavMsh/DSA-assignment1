# count digit
num = int(input("Enter Value:"))
dg = 0
if num == 0:
    dg = 1
else:
    while num > 0:
            num = num // 10
            dg += 1
            
print(dg)
