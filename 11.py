num1 = int(input("Enter num1:"))
num2 = int(input("Enter num2:"))

ub = num1 if num1 > num2 else num2

for i in range(ub,0,-1):
    if num1 % i == 0 and num2 % i == 0:
        print(f"GCD of {num1} & {num2} : {i}")
        break
