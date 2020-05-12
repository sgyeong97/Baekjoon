count = int(input())

first = []
second = []
result = []

for i in range(count):
    temp1, temp2 = input().split()
    
    first.append(int(temp1))
    second.append(int(temp2))

    result.append(first[i]+second[i])

for i in range(count):
    print('Case #{0}: {1} + {2} = {3}'.format(i+1, first[i], second[i], result[i]))
