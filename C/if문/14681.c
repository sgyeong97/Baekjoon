#include<stdio.h>

int main()
{
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x>0)
    {
        if(y>0)
        {
            printf("1\n");
        }
        else
        {
            printf("4\n");
        }
    }else
    {
        if(y>0)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}

//흔한 수학 문제 중 하나는 주어진 점이 어느 사분면에 속하는지 알아내는 것이다. ~~
//백준 (https://www.acmicpc.net/problem/14681)
