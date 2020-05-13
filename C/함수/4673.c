//https://www.acmicpc.net/problem/4673
//A number with no generators is a self-number. There are thirteen self-numbers less than 100: 1, 3, 5, 7, 9, 20, 31, 42, 53, 64, 75, 86, and 97.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define LEN 10001

void selfNumber(bool *barr, int n);

int main()
{
    int i, nlen;
    bool barr[LEN];

    memset(barr, true, sizeof(barr));

    for(i=0; i<LEN; i++)
    {
        selfNumber(barr, i);
    }
    for(i=0; i<LEN; i++)
    {
        if(barr[i] == true)
            printf("%d\n",i);
    }

    return 0;

}

void selfNumber(bool *barr, int n)
{
    int temp, den = LEN-1, result = 0;
    int num = n;

    if(n == 0)
    {
        barr[n] = false;
    }
    else
    {
        while(1)
        {
            temp = (int)(num/den);
            
            if(temp < 0)
                den /= 10;
            else if(num > 0 && den > 0)
            {
                result += temp;
                num %= den;
                if(den != 1)
                    den /= 10;
            }
            else
            {
                result += n;
                if(result > LEN)
                    break;
                else{
                    barr[result] = false;
                    break;
                }
            }
        }
    }
}
