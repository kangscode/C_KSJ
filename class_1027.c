#include<stdio.h>
#include<stdlib.h>
int main()
{
	int su1, su2, sum = 0;

	for (su1 = 1; su1 <= 10; su1++) {
		for (su2 = 1; su2 <= 10; su2++)
			sum += 1;
	}
	printf("sum = %d\n", sum);


	for (su1 = 1; su1 <= 3; su1++) {
		for (su2 = 1; su2 <= 3; su2++)
			printf("su1 = %d\tsu2 = %d\n", su1, su2);
	}


	int i, j;
	printf("--------------------------------------------------------------\n");
	printf("\t\t\t***** 구 구 단 *****\n");
	printf("--------------------------------------------------------------\n");
	for (i = 2; i <= 9; i++)
		printf("%d단\t", i);
	printf("\n--------------------------------------------------------------\n");
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 9; j++)
			printf("%d*%d=%d\t", j, i, j * i);
		printf("\n");
	}

	int money = 1, total = 1;
	for (i = 2; i <= 30; i++) {
		money *= 2;
		total += money;
	}
	printf("마지막 입금되는 금액: %d원\n총 저축액: %d원\n", money, total);

	int sum1 = 0, sum2 = 0;
	for (i = 1; i <= 1000; i++) {
		sum1 += i;
		if (i % 3 == 0 && i % 5 != 0)
			sum2 += i;
	}
	sum1 -= sum2;
	printf("결과 : %d\n", sum1);

	total = 0;
	for (i = 1; total < 10000; i += 2) {
		total += i;
		//if (total >= 10000) 
		//	break;
	}
	printf("마지막 홀수 : %d\n", i - 2);


	for (i = 0; i <= 4; i++) {
		printf("상위 포문 %d 일때 하위 포문 : ", i);
		for (j = 0; j <= 4; j++) {
			printf("%d ", j * i);
		}
		printf("\n");
	}


	for (i = 0; i < 22; i += 5) {
		for (j = 1; j < 6; j++) {
			printf("%d\t", i + j);
		}
		printf("\n");
	}

	for (i = 0; i <= 5; i++) {
		for (j = 1; j < 6; j++) {
			printf("%d\t", j + 5*i);
		}
		printf("\n");
	}

	for (i = 1; i < 22; i += 5) {
		printf("%d\t", i);
		for (j = 1; j < 5; j++)
			printf("%d\t", i + j);
		printf("\n");
	}




	return 0;
}