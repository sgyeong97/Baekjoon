// '%g' 형식지정자  %3g %2g 이런식으로 사용가능__How?
// float, double 형식지정자에 따라 틀림!!
#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.9f\n", (double) a/b);

	return 0;
}

