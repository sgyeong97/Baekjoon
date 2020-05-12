import sys

put = sys.stdin.readline
count = put().split()
count = int(count[0])
num = []

#temp = sys.stdin.readline().split()

for i in range(count):
    temp1, temp2 = put().split()
    num.append(int(temp1)+int(temp2))

for i in range(count):
    print(num[i])
