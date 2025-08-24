# check if palindrome
num = int(input("Enter #:"))

temp = abs(num)
reverse = 0

while temp !=0 :
    reverse = (reverse * 10) + (temp % 10)
    temp = temp // 10

print(f"{num} Is Palindrome" if reverse == num else f"{num} Is Not Palindrome")
