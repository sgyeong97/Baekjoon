#include<stdio.h>

int main()
{
   int i, j, z, cycle, empty;
   scanf("%d", &cycle);
   empty = cycle-1;

   for (i=1; i<cycle; i++)
   {
       for(j=empty; j>0; j--)
           printf(" ");
       for(z=0; z<(2*i-1); z++)
           printf("*");
       printf("\n");
       empty -= 1;
   }
    
   empty = 0;
   for (i=cycle; i>0; i--)
   {
       for(j=0; j<empty; j++)
           printf(" ");
       for(z=0; z<(2*i-1); z++)
           printf("*");
       printf("\n");
       empty +=1;
   }
   return 0;
}

//예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
//백준(https://www.acmicpc.net/problem/2444)
