#include<stdio.h>

int main(){

	int temp[3];
	int a, b, i, j=100;
	int result[3];
	int out=0;

	scanf("%d", &a);
	scanf("%d", &b);
	
	for(i=2; i>-1; i--){
		temp[i] = (b/j)*j;
		b = b%j;
		j /= 10;
		printf("%d\n", temp[i]);
	} //temp에 b가 385인 경우 300->80->5 순으로 저장되어있음
	//b의 값은 보존되지않음 b의 마지막 값은 0
	for(i=2; i>-1; i--){
		result[i] = temp[i]*a;
	}
	j=100;
	for(i=2; i>-1; i--){
		out += result[i];
		if(j>1){
			result[i]/=j;
			j/=10;
		}
	}

	for(i=0; i<3; i++){
		printf("%d\n", result[i]);
	}
	printf("%d\n",out);

	return 0;
}

//input(472,385) output(2360,3776,1416,181720)
//세자리수 곱셈의 계산과정이 차례대로 출력 후 마지막으로 결과값
//백준 (https://www.acmicpc.net/problem/2588)
