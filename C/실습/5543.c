//https://www.acmicpc.net/problem/5543
//
#include <stdio.h>

int main()
{
    int i, temp, ham, drink, result;
    ham = drink = 2000;

    for (i=0; i<5; i++)
    {
        scanf("%d", &temp);
        if(i<3 && ham>temp)
        {
            ham = temp;
        } else if(i>2 && drink>temp)
        {
            drink = temp;
        }
    }

    result = ham+drink - 50;
    printf("%d\n", result);

    return 0;
}
