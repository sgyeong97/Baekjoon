#include<stdio.h>

int main()
{
    int i, result;
    int num[9];

    for(i=0; i<9; i++)
    {
        scanf("%d\n", num+i);
        printf("%d = %d", i,num[i]);
    }

    return 0;
}

//백준(https://www.acmicpc.net/problem/2562)
