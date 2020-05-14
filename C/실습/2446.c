//https://www.acmicpc.net/problem/2446

#include <stdio.h>

int main()
{
    int total, i, len, tlen;
    scanf("%d", &len);
    tlen = len*2 - 1;

    for(total=0; total<tlen; total++)
    {
        if(total<len)
        {
            for(i=0; i<total; i++)
                printf(" ");
            for(i=0; i<(tlen-(total*2)); i++)
                printf("*");
            printf("\n");
        }
        else//total 5 ~ 8
        {
            for(i=total; i<tlen-1; i++)
                printf(" ");
            for(i=tlen-2; i<(total*2); i++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
