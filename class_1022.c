#include<stdio.h>
int main(void)
{
	//int num1, num2;
	//scanf("%d %d", &num1, &num2);
	//if (num1 > num2)
	//	printf("참이므로 %d", num1 > num2);
	//else
	//	printf("거짓이므로 %d", num1 > num2);


	//int su1, su2, max, min;
	//printf("정수 두 개를 입력하세요... ");
	//scanf("%d%d", &su1, &su2);
	//if (su1 > su2) {
	//	max = su1;
	//	min = su2;
	//}
	//else {
	//	max = su2;
	//	min = su1;
	//}

	//printf("\n max = %d min = %d", max, min);


	//int num1, num2;
	//scanf("%d %d", &num1, &num2);
	//if (num1 > num2) { // num1>num2이 '참'이면 아래의 if 종속문장 블록을 실행
	//	printf("num1이 num2보다 큽니다.\n");
	//	printf("%d > %d\n", num1, num2);
	//}
	//else {			// num1>num2이 '거짓'이면 아래의 else 종속문장 블록을 실행
	//	printf("num1이 num2보다 크지 않습니다.\n");
	//	printf("%d <= %d\n", num1, num2);
	//}


	int a = 10, b = 5;
	if (a > b) {
		if (a > 5) {
			printf("a는 5보다 크다\n");
		}
	}
	if (a > b && a > 5)
		printf("a는 5보다 큰 수\n");
	

	//int su;
	//printf("정수 한 개를 입력하세요... ");
	//scanf("%d", &su);
	//if (su >= 0) {
	//	if ((su % 2) == 0)
	//		printf("%d : 양의 짝수\n", su);
	//	else
	//		printf("%d : 양의 홀수\n", su);
	//}
	//else
	//	printf("%d : 음수\n", su);
	//printf("\n----- 프로그램 실행 끝 -----");


	//int kor, eng, mat, avg;
	//printf("3과목 성적을 입력하세요... ");
	//scanf("%d%d%d", &kor, &mat, &eng);

	//avg = (kor + eng + mat) / 3;
	//if (avg < 70)
	//	printf("불합격\n");
	//else if (kor < 60)
	//	printf("불합격\n");
	//else if (eng < 60)
	//	printf("불합격\n");
	//else if (mat < 60)  
	//	printf("불합격\n");
	//else
	//	printf("합격\n");


	int minute, money = 0;
	printf("말을 탄 시간 : ");
	scanf("%d", &minute);
	if (minute <= 30)
		money = 3000;
	else if (minute > 30) {
		money = 3000 + ((minute - 30 - 1) / 10 + 1)  * 500;
		//if (minute % 10 == 0) // 10분단위로 탑승한 경우 40분, 50분 ...
		//	money = 3000 + (minute - 30) / 10 * 500;
		//else // 분단위로 탑승한 경우 31분.. 44분.. 52분..
		//	money = 3000 + ((minute - 30) / 10 + 1) * 500;
	}
	printf("말을 탄 요금 : %d원\n", money);


	int count;
	printf("배달 도시락의 갯수 : ");
	scanf("%d", &count);
	if (count <= 10)
		money = count * 2500;
	else if (count > 10)
		money = 10 * 2500 + (count - 10) * 2400;
	printf("주문한 도시락 금액 : %d원\n", money);


	printf("디스켓 통의 갯수 : ");
	scanf("%d", &count);
	if (count >= 100)
		money = count * 5000 * (100 - 12) / 100;
	else if (count >= 10)
		money = count * 5000 * (100 - 10) / 100;
	else
		money = count * 5000;
	printf("전체 금액 : %d원\n", money);


	int kor, mat, eng, sum;
	char hakjum;
	double avg;
	printf("세 과목의 성적을 입력하세요 : ");
	scanf("%d%d%d", &kor, &mat, &eng);
	sum = kor + mat + eng;
	avg = sum / 3.0;
	if (avg >= 90)
		hakjum = 'A';
	else if (avg >= 80)
		hakjum = 'B';
	else if (avg >= 70)
		hakjum = 'C';
	else if (avg >= 60)
		hakjum = 'D';
	else
		hakjum = 'F';
	printf("3과목의 총점 : %d\n3과목의 평균 : %.2f\n학점 : %c\n", sum, avg, hakjum);








	










	


	return 0;
}