# simple calculator

num1 = input("Enter First Num:")
num2 = input("Enter Second Num:")
operator = input("Enter Operator(+ - * /):")
try:
    num1 = float(num1)
    num2 = float(num2) 
    if operator == '+':
        print('Result: ',num1 + num2)
    elif operator == '-':
        print('Result: ',num1 - num2)
    elif operator == '*':
        print('Result: ',num1 * num2)
    elif operator == '/':
        print('Result: ',num1 / num2)
    else:
        print('Invalid Opearotr!')
        
except ValueError:
    print("Invalid input!")
