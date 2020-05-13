//https://www.acmicpc.net/problem/3052
//Write a program that accepts 10 numbers as input and outputs the number of distinct numbers in the input, if the numbers are considered modulo 42.

#include <stdio.h>

int main()
{
    int index = 10;
    int i, j, temp =0;
    int count = 0;

    int nArr[index];
    int naModul[index];
    
    for(i=0; i<index; i++)
    {
        scanf("%d", nArr+i);
        naModul[i] = (nArr[i] % 42);
    }
    
    for(i=0; i<index; i++)
    {
        for(j=i+1; j<index; j++)
        {
            if(naModul[i] == naModul[j])
                temp++;
        }
        if (temp > 0)
            count++;
        temp = 0;
    }

    printf("%d\n", 10-count);

    return 0;
}
