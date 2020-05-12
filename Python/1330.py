first, second = input().split()

first = int(first)
second = int(second)

if first < second:
    print("<")
elif first > second:
    print(">")
else: print("==")
