#include<stdio.h>
int main()
{
	int su;
	su = 8;
	(su % 2 == 0) ? printf("%d : 짝수\n", su) : 
		printf("%d : 홀수\n", su);
	su = 9;
	(su % 2 == 0) ? printf("%d : 짝수\n", su) :
		printf("%d : 홀수\n", su);


	/*char name[10], hak[10], level;
	int py, c, java, sum;
	double avg;
	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	printf("학번을 입력하세요 : ");
	scanf("%s", hak);
	printf("3과목의 성적을 입력하세요 >>> ");
	scanf("%d%d%d", &py, &c, &java);
	sum = py + c + java;
	printf("합계 : %d\n", sum);
	avg = sum / 3.0;
	printf("평균 : %lf\n", avg);
	
	(avg >= 90) ? level='A' :
		(avg >= 80) ? level = 'B' :
		(avg >= 70) ? level = 'C' :
		(avg >= 60) ? level = 'D' : (level = 'F');
	printf("\t\t\t #### 성적표 ####\n");
	printf("이름\t학번\t파이썬\tc언어\t자바\t총점\t평균\t학점\n");
	printf("%s\t%s\t%d\t%d\t%d\t%d\t%.2lf\t%c\n", name, hak, py, c, java, sum, avg, level);*/


	/*int su1 = 15, su2 = 7, result;

	result = su1 | su2;
	printf("su1과 su2의 논리합 : %d\n", result);

	result = su1 & su2;
	printf("su1과 su2의 논리합 : %d\n", result);

	result = su1 ^ su2;
	printf("su1과 su2의 논리합 : %d\n", result);

	su1 = ~su1;
	printf("su1의 비트 부정 : %d\n", su1);

	int op = 30; result;
	result = op << 3;
	printf("30을 좌측으로 3비트 이동시킨 결과 = %d\n", result);*/


	int a = 0, b = 0, c = 0;
	printf("정수의 크기는 %d입니다.\n", sizeof(int));
	a = (b = 3, c = 5, b + c); //콤마연산자 왼쪽부터 오른쪽으로 차례로 수행함
	printf("a = %d, b = %d, c = %d\n", a, b, c);


	/*int su1 = 123;
	char ch = 'a';
	float su2 = 12.345;

	printf("변수 su1의 크기 : %d byte\n", sizeof(su1));
	printf("문자형 자료형의 크기 : %d byte\n", sizeof(char));
	printf("수식(su1 + su2)의 크기 : %d byte\n", sizeof(su1 + su2));
	printf("실수 1.23456의 크기 : %d byte\n", sizeof(1.23456));
	printf("문자형 실수 'a'의 크기 : %d byte\n", sizeof('a'));
	printf("문자형 실수 'a'의 크기 : %d byte\n", sizeof(ch));*/


	int su1, su2, su3;
	float result;
	result = (su1 = 5, su2 = su1 + 2, su2++, su3 = su2 / 8);
	printf("su1 = %d\nsu2 = %d\n"
		"su3 = %d\nresult = %f\n", su1, su2, su3, result);


	



	return 0;
}

