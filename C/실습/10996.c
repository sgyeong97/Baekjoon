//https://www.acmicpc.net/problem/10996

#include <stdio.h>

int main()
{
    int i, j, len, tlen;
    scanf("%d", &len);
    if(len > 1)
        tlen = len*2;
    else
        tlen = len;

    for(i=0; i<tlen; i++)
    {
        for(j=0; j<len; j++)
        {
            if(i%2 == 0)
            {
                if(j%2 == 0)
                    printf("*");
                else
                    printf(" ");
            }else
            {
                if(j%2 == 0)
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
