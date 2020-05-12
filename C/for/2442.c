#include<stdio.h>

int main()
{
    int i, j, z, cycle, empty;
    scanf("%d", &cycle);
    empty = cycle-1;
    for(i=1; i<=cycle; i++)
    {
        for(j=empty; j>0; j--)
        {
            printf(" ");
        }
        for(z=0; z<(2*i-1); z++)
        {
            printf("*");
        }
        printf("\n");
        empty -= 1;
    }

    return 0;
}

//첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제
//별은 가운데를 기준으로 대칭이어야 한다.
//백준 (https://www.acmicpc.net/problem/2442)
