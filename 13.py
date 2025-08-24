# check leap year

year = int(input("Enter year:"))

isYear = lambda x: ((x % 4 == 0 and x % 100 != 0) or (x % 400 == 0))

print( f"{year} is a leap year" if isYear(year) else f"{year} is not a leap year")

    