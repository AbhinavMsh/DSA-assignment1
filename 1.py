# larger of two numbers

a = int(input('Enter first #:'))
b = int(input('Enter second #:'))
if a == b:
    print('Values are equal')
else:
    print(a if a > b else b)