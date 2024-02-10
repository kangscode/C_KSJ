#include<stdio.h>
int main()
{
	/*int st = 11, time = 37;
	double avg;
	avg = time / (double)st;
	printf("한 정거장당 걸리는 시간 : %.2f분\n", avg);*/


	//int to_fl = 14, avg_height = 260;//단위 : cm
	//double one_fl = 500.23, to_height, meter;
	//to_height = one_fl + avg_height * (to_fl - 1); //1층은 뺀다
	//meter = to_height / 100;
	//printf("호텔의 총 높이 : % .3fm\n", meter);


	int time = 60 * 60; //1시간을 초단위 변경
	double meter, kilo, mo100 = 11.27, ret;
	ret = time / mo100; //1시간에 11.27초가 몇번 들어가는지 확인
	meter = ret * 100; //위의 결과는 1시간에 11.27초가 몇번 들어가는지이다 그러므로 100m를 곱해줘야 한다
	kilo = meter / 1000; //위의 결과는 m이므로 kilometer 단위로 변경해야 한다.
	printf("1시간 후 이동거리 : %.2fkm\n", kilo);


	//int num1, num2, sum;
	//printf("정수 2개를 입력하세요...");
	//scanf("%d%d", &num1, &num2);
	//// scanf 함수의 보안상 문제(오버플로우:차고넘치는)해결 
	//// 1) scanf_s("서식 제어문", &변수, sizeof(자료형의 크기))
	////		-> 정석, 가장 권장하는 문법
	//// 2) #define _CRT_SECURE_NO_WARNINGS
	////		-> 에러를 안나게 하고 정상적으로 처리해줌
	////		   단, 코드의 맨 위쪽에 작성해줘야만 합니다.
	//// 3) 메뉴 -> 프로젝트 -> 프로젝트 속성 -> c/c++ -> sql검사(사용안함)
	////		-> 한번만 변경해주면 그 다음부터는 따로 변경하지 않아도 됨.
	////		-> 단 새로운 프로젝트 생성시 다시 변경해줘야 함.
	////		에러 처리는 안하나 경고 메세지는 계속 나옴.
	//sum = num1 + num2;
	//printf("두 수의 합은 %d 입니다\n", sum);

	//char name1[7], name2[7];
	//printf("%s","이름을 입력하세요!");
	//scanf("%s", name1);
	//printf("별명을 입력하세요!"); 
	//scanf("%s", name2);
	//printf("나의 이름은 %s입니다\n", name1);
	//printf("나의 별명은 %s입니다.\n", name2);


	double num1;
	printf("임의의 실수 입력 : ");
	scanf("%lf", &num1);
	printf("실수 : %.2f\n", num1);


	char a,b,c;
	printf("이니셜을 입력하세요 : ");
	scanf("%c%c%c", &a, &b, &c);
	printf("이니셜 : %c%c%c\n", a, b, c);

	char ch[4];
	printf("이니셜을 입력하세요 : ");
	scanf("%s", ch[4]);
	printf("이니셜 : g%s\n", ch);


	int py, c, java, sum;
	double avg;
	printf("3과목의 성적을 차례대로 입력하세요\n>>> ");
	scanf("%d%d%d", &py, &c, &java);
	sum = c + java + py;
	avg = sum / (double)3;
	printf("3과목의 총점 : %d\n", sum);
	printf("3과목의 평균 : %.2f\n", avg);


	char name[20];
	int age; 
	prinf("당신의 이름은 무엇입니까? \n>>> ");
	scanf("%s", name);
	printf("%s님의 나이는 몇 살 입니까?\n>>> ", name);
	scanf("%d", &age);
	printf("%s님의 나이는 %d살 입니다\n", name, age);
	

	return 0;
}