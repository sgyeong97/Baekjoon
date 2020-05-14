//https://www.acmicpc.net/problem/2523

#include <stdio.h>

int main()
{
    int i, j, len, tlen;
    scanf("%d", &len);
    tlen = len*2;
    for(i=1; i<(tlen); i++)
    {
        if(i < len)
        {
            for(j=0; j<i; j++)
            {
                printf("*");
            }
            printf("\n");
        }else
        {
            for(j = i; j<tlen; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
