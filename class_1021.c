#include<stdio.h>
int main()
{
	//int num1=10, num2=5;
	///*scanf("%d%d", &num1, &num2);*/
	//if("난 실행될까?")
	//	printf("참인경우 %d\n", num1 != num2);


	//num1 = 1, num2 = 0;
	//if (num1)
	//	printf("참\n");
	//if (num2);
	//	printf("거짓\n");

	//if (1)
	//	printf("참이므로 출력\n");
	//if (0)
	//	printf("거짓이므로 출력안함");


	//scanf("%d", &num1);
	//num2 = num1 % 2;
	//if (num2 == 0)
	//	printf("짝수");
	//if (num2 != 0)  //if(num2)로 표현 가능
	//	printf("홀수");


	/*int su;
	printf("10보다 큰 정수를 입력하세요..");
	scanf("%d", &su);
	if (su <= 10)
		printf("10 이하의 수를 입력하였습니다!\n");
	printf("%d\n", su);*/


	/*int num;
	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다.\n");
	if (num > 0)
		printf("입력 값은 0보다 크다.\n");
	if (num == 0)
		printf("입력 값은 0이다.\n");*/


	//int opt;
	//double num1, num2;
	//double result;

	//printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
	//scanf("%d", &opt);
	//printf("두개의 실수 입력 : ");
	//scanf("%lf %lf", &num1, &num2);

	//if (opt == 1)
	//	result = num1 + num2;
	//if (opt == 2)
	//	result = num1 - num2;
	//if (opt == 3)
	//	result = num1 * num2;
	//if (opt == 4)
	//	result = num1 / num2;

	//printf("결과 : %f\n", result);


	//int day;
	//printf("날짜를 입력하세요 : ");
	//scanf("%d", &day);
	//if (day % 7 == 1)
	//	printf("월요일\n");
	//if (day % 7 == 2)
	//	printf("화요일\n");
	//if (day % 7 == 3)
	//	printf("수요일\n");
	//if (day % 7 == 4)
	//	printf("목요일\n");
	//if (day % 7 == 5)
	//	printf("금요일\n");
	//if (day % 7 == 6)
	//	printf("토요일\n");
	//if (day % 7 == 0)
	//	printf("일요일\n");


	//int num;
	//printf("수를 입력하세요 : ");
	//scanf("%d", &num);
	//if (num % 3 == 0)
	//	printf("%d는 3의 배수입니다\n", num);

	//printf("수를 입력하세요 : ");
	//scanf("%d", &num);
	//if (num < 0)
	//	num *= -1;
	//printf("절댓값 : %d\n", num);

	//printf("수를 입력하세요 : ");
	//scanf("%d", &num);
	//if (!(num % 2))
	//	printf("%d는 짝수입니다\n", num);
	//if (num % 2)
	//	printf("%d는 홀수입니다\n", num);

	//int num1, num2;
	//printf("첫번째 수를 입력 하세요 : ");
	//scanf("%d", &num1);
	//printf("두번째 수를 입력 하세요 : ");
	//scanf("%d", &num2);
	//if (num1 > num2)
	//	printf("첫번째 수가 더 큽니다\n");
	//if (num1 < num2)
	//	printf("두번째 수가 더 큽니다\n");
	//if (num1 == num2)
	//	printf("두 수가 같은 수 입니다\n");


	int num1, num2, num3;
	printf("세 수를 입력하세요 : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
		printf("가장 큰 수는 %d입니다\n", num1);
	if (num2 > num1 && num2 > num3)
		printf("가장 큰 수는 %d입니다\n", num2);
	if (num3 > num1 && num3 > num2)
		printf("가장 큰 수는 %d입니다\n", num3);

	if (num1 < num2)
		num1 = num2;
	if (num1 < num3)
		num1 = num3;
	printf("가장 큰 수는 %d입니다\n", num1);

	printf("두 수를 입력하세요 : ");
	scanf("%d%d", &num1, &num2);
	if (num1 > num2 && num1 % 2 == 0)
		printf("%d가 더 크며 짝수입니다\n", num1);
	if (num2 > num1 && num2 % 2 == 0)
		printf("%d가 더 크며 짝수입니다\n", num2);

	printf("두 수를 입력하세요 : ");
	scanf("%d%d", &num1, &num2);
	num3 = num1 + num2;
	if (num3 % 2 == 0 && num3 % 3 == 0)
		printf("두 수의 합은 %d이고 짝수이며 3의 배수입니다\n", num3);








	return 0;
}


