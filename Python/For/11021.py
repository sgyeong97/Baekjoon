count = int(input())

result = []

for i in range(0,count):
    temp1, temp2 = input().split()
    result.append(int(temp1)+int(temp2))

for i in  range(0, count):
    print('Case #{0}: {1}'.format(i+1, result[i]))
