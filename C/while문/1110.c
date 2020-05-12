#include<stdio.h>

int main()
{
    int result, x, y, new,temp=0, count=0;
    scanf("%d", &result);
  
    new=result;

    do
    {
        x = new/10;
        y = new%10;
        temp = x+y;
        if(temp>=10)
            temp = temp%10;
        new = (y*10)+temp;
        count += 1;

    }while(result!=new);

    printf("%d\n",count);

    return 0;
}

//N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성
//백준(https://www.acmicpc.net/problem/1110)
