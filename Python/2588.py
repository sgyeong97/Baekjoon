fixedNum = int(input())
variableNum = int(input())

datalist = []

datalist.append(int(variableNum / 100))

empty = int(variableNum / 10)
datalist.append(int(empty - datalist[0] * 10))

empty = datalist[0]*100 + datalist[1]*10
datalist.append(int(variableNum - empty))

result = []
for i in range(2, -1, -1):
    result.append(fixedNum*datalist[i])

result.append(result[0] + result[1]*10 + result[2]*100)

for i in range(4):
    print(result[i])
