
num = (input("Enter a Number:"))


if not num.isnumeric():
    print("Number was not enetered")
else:
    print("Reversed Number",num[::-1])