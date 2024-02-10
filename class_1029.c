#include<stdio.h>
#include<conio.h>
int main()
{
	int su;
	for (su = 1; su < 5; su++) {
		if (su == 3) {
			continue;
			printf("su = 3\n");
		} 
		else {
			printf("su = %d\n", su);
		}
	}


	//char ch;
	//while (1) {
	//	ch = getch() - 32;
	//	putch(ch);
	//	if (ch != 'q' && ch != 'Q')
	//		continue;
	//	else
	//		exit();
	//}


	int i, num, result = 0;
	printf("정수 입력 : ");
	scanf("%d", &num);
	while (1) {
		i = num % 10;
		result *= 10;
		result += i;
		num /= 10;
		if (num == 0)
			break;
	}
	printf("거꾸로 수 : %d\n", result);

	i = 0; result = 0;
	printf("정수 입력 : ");
	scanf("%d", &num);
	while (1)
	{
		i = num % 10;
		result += i;
		num = num / 10;
		if (num == 0)
			break;
	}
	printf("각 자리수의 합 : %d\n", result);


	printf("정수 입력 : ");
	scanf("%d", &num);
	printf("%d의 약수 : ", num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0) // 약수를 찾는 코드
			printf("%d ", i);
	}
	printf("\n");


	int j, count = 0;
	printf("정수 입력 : ");
	scanf("%d", &num);
	printf("%d까지의 소수 : ", num);
	for (i = 2; i <= num; i++) { // 1은 모든 수의 약수이고 소수에서 제외되기 때문에 2부터 시작함.
		for (j = 2; j < i; j++) { // 약수를 판단하기 위해 확인할 수까지 차례대로 약수를 찾음
			if (i % j == 0) {
				count++; // 약수를 찾게 되면 1씩 카운트해서 약수의 개수의 합을 구한다
				break;
			}
		}
		if (count == 1) // 소수라면 약수가 1개밖에 존재하지 않는다. 단, 이 코드는 1을 제외시켰음
			printf("%d ", i);
		count = 0;
	}
	printf("\n");
	

	int sum = 0;
	for (i = 1; i <= 1000; i++) {
		if (i % 4 == 1 && i % 6 == 1) { 
			sum += i; // 위 조건이 참일때마다 더함
			//printf("%d -> %d\n", i, sum); //검산을 하기 위한 중간 코드
		}
	}
	printf("%d\n", sum); //41916


	int num1, num2;
	printf("두 정수 입력 : ");
	scanf("%d%d", &num1, &num2);

	for (i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			result = i;
		}
	}
	printf("최대 공약수 : %d\n", result);

	// result2 = num1 * num2 / result 최소 공배수 구하는 공식
	if (num1 >= num2) 
		i = num1;
	else
		i = num2;
	while (1) {
		if (i % num1 == 0 && i % num2 == 0) {
			printf("최소 공배수 : %d\n", i);
			break;
		}
		i++;
	}


	














	return 0;
}