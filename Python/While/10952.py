x = y = 1

while not(x+y==0) :
    temp1, temp2 = input().split()
    x = int(temp1)
    y = int(temp2)
    if x==y==0:
        pass
    else:
        print(x+y)

