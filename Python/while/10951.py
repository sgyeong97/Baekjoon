import sys

for line in sys.stdin:
    temp1, temp2 = line.split()
    x = int(temp1)
    y = int(temp2)

    print(x+y)
