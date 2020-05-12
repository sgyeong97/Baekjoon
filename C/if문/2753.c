#include<stdio.h>

int main(){
    int year;
    scanf("%d", &year);

    if(!(year%400))
    {
        printf("1\n");
    }else if (!(year%4)&&(year%100))
    {
        printf("1\n");
    }else
    {
        printf("0\n");
    }
 
    return 0;
}

//연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
//윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.
//백준 (https://www.acmicpc.net/problem/2753)
