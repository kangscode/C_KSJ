#include<stdio.h>
int main()
{
	/*int num;
	num = 20;
	printf("%d\n", num);*/
	
	// 변수명으로는 영문자, 숫자 그리고 밑줄만을 사용한다.
	// 변수명의 첫 문자는 반드시 영문자나 밑줄(_)이어야 한다.
	// C언어의 예약어(reserved word)는 변수명으로 사용할 수 없다.
	// 영어 대문자와 소문자는 서로 다른 문자로 간주된다.
	// 변수명 내에 공백을 둘 수 없다.
	// 변수명의 길이는 보통 256자리까지 가능하다.
	
	// 변수 작명 요령
	// 1) 변수명은 누가봐도 그 변수가 저장한 data의 기능 또는
	// 역할을 쉽게 이해할 수 있도록 지어주는것이 바람직하다.
	// 2) 한글 변수는 사용가능하다. 하지만 가급적
	// 프로그램내에서 사용하지 않는것이 바람직하다.


	/*int num1;
	int num2;
	num1 = 10;
	num2 = 20;*/


	/*int age = 21;
	double weight = 50.0, height = 163.5;

	printf("나의 나이는 %d세 입니다.\n", age);
	printf("나의 몸무게는 %f(kg)입니다.\n", weight);
	printf("나의 신장은 %f(cm)입니다.\n", height);*/


	//int num = 123;
	//char ch = 'D';

	//num = num + 1;  // 우변의 연산식의 결과를 좌변의 num 변수에 할당
	//ch = 'G';
	//printf("num = %d\n", num);
	//printf("ch = %c\n", ch);


	float height_inch = 70.0;
	double height_cm = height_inch * 2.54; // 초기화에 연산식을 사용함
	
	printf("나의 신장은 %f(cm)입니다\n", height_cm);
	  

	char ch = 'A';
	int num = 5, ret;

	ret = ch + num; //형변환 발생
	printf("ret = %d\n", ret);


	//// 실수형이라도 정수형으로 변환 가능
	//int num1;
	//float num2 = 367.78;

	//num1 = num2;
	//printf("num1 = %d\n", num1);

	
	int num1 = 25, num2 = 3;

	printf("num1 / num2 = %d\n", num1 / num2);
	printf("num1 / num2 = %f\n", (float)num1 / num2);
	printf("num1 * num2 = %d\n", num1 * num2);

	
	int score = 100;
	printf("파이썬 %d점\n", score);

	int age = 27;
	printf("나는 %d살이다\n", age);

	int py = 100, clang = 99, java = 55, sum;
	double avg;
	sum = py + clang + java;
	avg = sum / 3.0;//(double)sum/3
	printf("총 점 : %d점\n", sum);
	printf("평 균 : %.2f\n", avg);

	

	return 0;
}