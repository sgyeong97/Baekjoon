count = int(input())
num = []

for i in range(count):
    temp1, temp2 = input().split(' ')
    num.append(int(temp1)+int(temp2))

for i in range(count):
    print(num[i])
