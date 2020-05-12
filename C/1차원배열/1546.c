//https://www.acmicpc.net/problem/1546
//세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.

#include <stdio.h>

int main()
{
    int i, index;
    float result = 0, max = 0;
    scanf("%d", &index);
    
    int nArr[index];
    float faResult[index];

    for(i=0; i<index; i++)
    {
        scanf("%d", nArr+i);
        if(nArr[i] > max)
            max = nArr[i];
    }
    for(i=0; i<index; i++)
    {
        faResult[i] = (nArr[i]/max*100);
        result += faResult[i];
    }

    result /= index;

    printf("%.2f\n", result);

    return 0;
}
