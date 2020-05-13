//백준(https://www.acmicpc.net/problem/2562)

#include<stdio.h>

int main()
{
    int i, result=0, index;
    int aNum[9];

    for(i=0; i<9; i++)
    {
        scanf("%d", aNum+i);
        
        if(aNum[i] > result)
        {
            result = aNum[i];
            index = (i+1);
        }
    }

    printf("%d\n%d\n", result, index);

    return 0;
}

