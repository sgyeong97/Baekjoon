count, num = input().split()
minnum = int(num)
result = []
num_list = []

temp = input()
input_list = temp.split()
    
for x in range(int(count)):
    num_list.append(int(input_list[x]))
    
    if num_list[x] < minnum :
        result.append(num_list[x])

for x in result:
    print(x, end=' ')
