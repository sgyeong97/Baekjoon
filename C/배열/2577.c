//https://www.acmicpc.net/problem/2577
//세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, temp;
    int multiply = 1;
    int len = 7;
    int ten = 1000000;
    char cArr[9];
    int nArr[10];

    memset(nArr, 0, sizeof(nArr));

    for(i=0; i<3; i++)
    {
        scanf("%d", &temp);
        multiply *= temp;
    }

    if( (int)(multiply/ten) > 100)
    {
        ten *= 100;
        len += 2;
    } else if( (int)(multiply/ten) > 10)
    {
        ten *= 10;
        len += 1;
    }

    for(i=0; i<len; i++)
    {
        temp = (int)(multiply/ten);
        cArr[i] = (char)temp;
        multiply -= (temp*ten);
        if(ten >= 10)
        {
            ten /= 10;
        }
    }
    
    for(i=0; i<10; i++)
    {
        for(j=0; j<len; j++)
        {
            if(i == (int)(cArr[j]))
            {
                nArr[i]++;
            }
        }
        printf("%d = %d\n", i, nArr[i]);
    }

    return 0;
}
