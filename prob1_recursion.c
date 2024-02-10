#include<stdio.h>

int a, b, c;

int recurse(int n);

int main() {

	int n, result;
	printf("피보나치 수열의 1항, 2항, 3항을 순서대로 입력하세요 : ");
	scanf("%d%d%d", &a, &b, &c);
	printf("구하려는 항의 수 : ");
	scanf("%d", &n);
	
	result = recurse(n);
	printf("제 %d항 : %d\n", n, result);

	return 0;
}

int recurse(int n) {

	if (n == 1)
		return a;
	else if (n == 2)
		return b;
	else if (n == 3)
		return c;
	else if (n >= 4)
		return recurse(n - 1) + recurse(n - 3);

}