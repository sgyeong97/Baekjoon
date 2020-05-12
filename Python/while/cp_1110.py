num = int(input())
x = 0
count = 0

while(num!=x):
    if num<10 and count==0:
        x = num+10
    elif count == 0:
        x = num

    first = int(x/10)
    second = int(x%10)

    temp = (first+second)%10

    x = second*10 + temp
    count = count+1

print(count)
