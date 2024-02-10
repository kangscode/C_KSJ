#include<stdio.h>
int main() 
{
	int i, num;
	scanf("%d", &num);
	for (i = 15; i >= 0; i--) {
		if ((num >> i) & 1)
			break;
	}
	for (i; i >= 0; i--) {
		int result = (num >> i) & 1;
		printf("%d", result);
	}

	return 0;
}