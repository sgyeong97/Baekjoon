#include<stdio.h>

int main()
{
    int h, m, out_h, out_m;
    scanf("%d %d", &h, &m);

    if(0<h)
    {
        if(45<=m)
        {
            out_m = m-45;
            out_h = h;
        } else
        {
            out_m = 15+m;
            out_h = h-1;
        }
    } else
    {   if(45<=m)
        {
            out_m = m-45;
            out_h = h;
        }else
        {
            out_m = 15+m;
            out_h = 23;
        }
    }
    printf("%d %d\n", out_h, out_m);

    return 0;
}
//원래 설정되어 있는 알람을 45분 앞서는 시간으로 바꾸는 것이다.
//input(10,10) = output(9,24) / input(0,30) = output(23,45)
//백준 (https://www.acmicpc.net/problem/2884)
