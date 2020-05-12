#include<stdio.h>
//#include<stdlib.h>

int main()
{
    int range, min, max, i, temp;
    scanf("%d\n", &range);

    //int* num = (int*)malloc(sizeof(int)*range);
    int num[range];
    //배열 동적 할당 _ malloc 함수 사용=stdlib.h필요
    for(i=0; i<range; i++)
    {
        scanf("%d", num+i);
    }

    min = max = *num;

    for(i=1; i<range; i++)
    {
        temp = *(num+i);
        if(min>temp)
            min = temp;
        if(max<temp)
            max=temp;
    }
    
    printf("%d %d\n", min, max);
    return 0;
}

//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
//백준(https://www.acmicpc.net/problem/10818)
