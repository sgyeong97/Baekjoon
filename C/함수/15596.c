//https://www.acmicpc.net/problem/15596
//정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.

#include <stdio.h>

long long sum(int *a, int n);

int main()
{
    int i, len;
    long result;

    scanf("%d\n", &len);
    int nArr[len];

    for( i=0; i<len; i++)
    {
        scanf("%d", nArr+i);
    }

    result = sum(nArr, len);

    printf("%d\n", result);

    return 0;
}

long long sum(int *a, int n)
{
    int i;
    long result = 0;

    for (i=0; i<n; i++)
    {
        result += a[i];
    }

    return result;
}
