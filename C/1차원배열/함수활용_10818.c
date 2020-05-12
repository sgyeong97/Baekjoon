#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int range, i=0, min=100000, max=-1000000;
    char str[100001];
    scanf("%d\n", &range);
    //\n추가 안하면 아래의 fgets()함수가 scanf 부분까지 포함해서 사용해버림
    fgets(str, sizeof(str), stdin);
    //fgets()함수 줄 바꿈키를 입력할 때 까지 1줄을 그대로 읽어드림
    // [\0]이 붙여진 배열에 저장된다.
    
    str[strlen(str)-1] = '\0';
    //배열 끝에 있는 줄바꿈 문자를 제거_string.h 필요
    
    char *ptr = strtok(str, " ");
    //strtok()를 이용해 " "구분자를 기준으로 문자를 나눔
    while(ptr != NULL)
    {
        i = atoi(ptr);
        //stdlib.h 필요 _ 문자열에 있는 숫자를 숫자 자료형으로 바꿀 수 있음
        //함수 인자로는 해당 문자열의 주소를 넣어주면 됨

        if(min>i)
            min=i;
        if(max<i)
            max=i;

        ptr = strtok(NULL, " ");
        //strtok()를 이용해 " "구분자 사이의 문자를 ptr에 저장
    }
    printf("%d %d\n", min, max);
    return 0;
}
