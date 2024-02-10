#include<stdio.h>

int main()
{
	int n, i;
	long long int count[1000], a[1000];
	scanf("%d", &n);
	printf("N : %d, ", n);

	count[0] = 1;
	count[1] = 1;
	for (i = 2; i < n; i++)
		count[i] = count[i - 2] + count[i - 1];
	a[0] = count[n - 1]; 
	printf("이진수의 개수 : %lld\n", a[0]);

	int j, k;
	long long int end = 0;
	for (i = 0; i < n; i++) {
		k = 1;
		for (j = 0; j < i; j++)
			k = k * 2;
		end += k;
	}
	
	int over, w = 1, flag;
	long long int num;
	for (num = 0; num <= end; num++) {
		over = 0, flag = 1;
		for (i=n-1; i >= 0; i--) {
			int result = (num >> i) & 1;
			if (i == n - 1 && result != 1) {
				flag = 0;
				break;
			}
			if (result == 1)
				over++;
			else
				over = 0;
			if (over == 2) {
				over = 0;
				flag = 0;
				break;
			}
		}
		if (flag) {
			a[w] = num;
			w++;
		}
	}

	int unit = 0;
	for (j = 1; j <= a[0]; j++) {
		num = a[j];
		for (i = n-1; i >= 0; i--) {
			int result = (num >> i) & 1;
			printf("%d", result);
		}
		printf(" ");
		unit++;
		if (unit % 10 == 0) {
			printf("\n");
			unit = 0;
		}
	}


	return 0;
}