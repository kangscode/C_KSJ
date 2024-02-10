#include<stdio.h>
int main()
{
	int su, sum = 0;
	for (su = 1; su <= 10; su++)
		sum += su;
	printf("sum = %d\n", sum);

	
	sum = 0;
	for (su = 10; su >= 1; su--)
		sum += su;
	printf("sum = %d\n", sum);


	sum = 0;
	for (su = 1; su <= 10; su++) {
		if (su % 2 == 1) {
			sum += su;
			su++;
		}
	}
	printf("sum = %d\n", sum);

	sum = 0;
	for (su = 1; su <= 10; su++) {
		if (su % 2 == 1)
			sum += su;
	}
	printf("sum = %d\n", sum);

	sum = 0;
	for (su = 1; su <= 10; su += 2)
		sum += su;
	printf("sum = %d\n", sum);


	su = 1, sum = 0;
	for (; su <= 10; )
		sum += su++;
	printf("sum = %d\n", sum);

	//su = 1, sum = 0;
	//for (; ; )
	//{
	//	sum += su++;
	//	printf("sum = %d\n", sum);
	//}


	int su1, su2, odd_sum = 0, even_sum = 0;
	for (su1 = 1, su2 = 2; su1 <= 100; su1 += 2, su2 += 2) {
		odd_sum += su1;
		even_sum += su2;
	}
	printf("È¦¼öÀÇ ÇÕ = %d\n", odd_sum);
	printf("È¦¼öÀÇ ÇÕ = %d\n", even_sum);


	int i;
	for (i = 1; i <= 30; i++) {
		printf("%d\t", i);
		if (i % 5 == 0)
			printf("\n");
	}

	
	for (i = 1; i <= 4; i++)
		printf("%d. Hello\n", i);

	for (i = 65; i <= 90; i++)
		printf("%c, ", i);
	printf("\b\b \n");



	return 0;
}