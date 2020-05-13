//https://www.acmicpc.net/problem/10039
//
#include <stdio.h>
#define INDEX 5

int main()
{
    int i, sum = 0, result;
    int narr[INDEX];

    for(i=0; i<INDEX; i++)
    {
        scanf("%d", narr+i);
        if(narr[i] < 40)
            narr[i] = 40;
        sum += narr[i];
    }

    printf("%d\n", sum/INDEX);

    return 0;
}
