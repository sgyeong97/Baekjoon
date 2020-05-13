//https://www.acmicpc.net/problem/4344

#include <stdio.h>

int main()
{
    int index, i, j, sum = 0;
    float ftemp, count=0;

    scanf("%d\n", &index);

    int nSum[index][1000];
    float fAve[index];
    int alen[index];

    for(i=0; i<index; i++)
    {
        scanf("%d", alen+i);

        for(j=0; j<alen[i]; j++)
        {
            scanf("%d", &nSum[i][j]);
            sum += nSum[i][j];
        }
        fAve[i] = (float)(sum/alen[i]);
        sum = 0;
    }
    
    for(i=0; i<index; i++)
    {
        for(j=0; j<alen[i]; j++)
        {
            if(fAve[i] < nSum[i][j])
                count++;
        }
        ftemp = (count/(float)alen[i])*100;
        printf("%.3f%\n", ftemp);
        count = 0;
    }

    return 0;
}
