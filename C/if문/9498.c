#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if(100>=a && 90<=a)
    {
        printf("A\n");
    } else if(80<=a)
    {  
        printf("B\n");
    } else if(70<=a)
    {
        printf("C\n");
    } else if(60<=a)
    {
        printf("D\n");
    }else
    {
        printf("F\n");
    }

    return 0;
}

//시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
//백준 (https://www.acmicpc.net/problem/9498)
