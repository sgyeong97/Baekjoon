
num = int(input())
x = -1
count = 0

if num > 0 and num < 100 :

    while (num!=x):
        
        if num < 10 and count == 0 :
            x = num+10
        else:
            pass

        first = int(x/10)
        second = int(x%10)
        
        temp = first+second
        temp1 = int(temp%10)

        x = second*10 + temp1
        
        count = count+1

else:
    pass

print(count)
