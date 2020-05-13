//https://www.acmicpc.net/problem/8958
//Therefore, the score of “OOXXOXXOOO” is 10 which is calculated by “1+2+0+0+1+0+0+1+2+3”

#include<stdio.h>

int main()
{
    int index, i, j, result, count;
    i = result = count = 0;
    char temp;

    scanf("%d\n", &index);

    char cArr[index][80];
    int nSum[index];

    do
    {
        for(j=0; j<80; j++)
        {
            scanf("%c", &temp);
            if(temp == '\n')
            {
                break;
            }else
            {
                cArr[i][j] = temp;
                if( temp =='O' )
                {
                    count++;
                    result += count;
                }else if( temp == 'X' )
                {
                    count = 0;
                }
            }
        }
        nSum[i] = result;
        result = count = 0;
        i++;
    }while(i != index);

    for(i=0; i<index; i++)
        printf("%d\n", nSum[i]);

    return 0;
}
