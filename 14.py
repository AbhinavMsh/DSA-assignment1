# average of N

user_input = input("Enter elements separated by spaces: ")

elements = user_input.split()

try:
    elements = list(map(lambda x: float(x), elements))

    lenght = len(elements)
    total = sum(elements)
    mean = total/lenght
    print(f"Average is {mean}")

except ValueError:
    print("Enter numeric values only!")
