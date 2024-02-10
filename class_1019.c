#include<stdio.h>
int main()
{
	/*int year, birth, age;
	printf("올해의 년도를 4자리로 입력하세요 : ");
	scanf("%d", &year);
	printf("당신이 태어난 년도를 4자리로 입력하세요 : ");
	scanf("%d", &birth);
	age = year - birth + 1;
	printf("당신의 나이는 %d 살 입니다\n", age);

	
	double height, weight;
	printf("키를 입력하세요 : ");
	scanf("%lf", &height);
	weight = (height - 100) * 0.9;
	printf("표준체중은 %.2lf입니다\n", weight);*/


	/*int su1 = 20, su2 = 3;
	printf("%d + %d = %d\n", su1, su2, su1 + su2);
	printf("%d - %d = %d\n", su1, su2, su1 - su2);
	printf("%d * %d = %d\n", su1, su2, su1 * su2);
	printf("%d / %d = %d\n", su1, su2, su1 / su2);
	printf("%d %% %d = %d\n", su1, su2, su1 % su2);*/


	/*float su1 = 3.01, su2 = 3.0;
	printf("변수 su1과 변수 su2의 크기 비교 결과 : %d\n", su1 <= su2);
	printf("변수 su1과 변수 su2의 크기 비교 결과 : %d\n", su1 >= su2);
	printf("변수 su1과 변수 su2의 크기 비교 결과 : %d\n", su1 == su2);
	printf("변수 su1과 변수 su2의 크기 비교 결과 : %d\n", su1 != su2);*/
	
	
	//6,5,25,5,0
	/*int su1, su2;
	su1 = su2 = 5;
	printf("su1 + 1 = %d\n", su1 += 1);
	printf("su1 - 1 = %d\n", su1 -= 1);
	printf("su1 * su2 = %d\n", su1 *= su2);
	printf("su1 / su2 = %d\n", su1 /= su2);
	printf("su1 %% su2 = %d\n", su1 %= su2);*/
	

	/*int num;
	printf("점수를 입력하세요... ");
	scanf("%d", &num);
	if (!((num > 0) && (num <= 100)))
		printf("입력 범위를 벗어 났습니다.\n");*/


	/*int su1;
	float su2;
	su1 = 5; ++su1; printf("++su1 = %d\n", su1);
	su1 = 5; su1++; printf("su1++ = %d\n", su1);
	su2 = 12.3; ++su2; printf("++su2 = %f\n", su2);
	su2 = 12.3; su2++; printf("su2++ = %f\n", su2);*/


	int su1, su2, su3;
	su1 = 10;
	su2 = ++su1; //11
	su1 = 10;
	su3 = su1++; //10
	printf("su2 = %d\n", su2);
	printf("su3 = %d\n", su3);
	printf("su1 = %d\n", su1);


	int a = 5, b = 5, c = 10, d;
	d = ++a * b--;
	printf("a = %d, b = %d, d = %d\n", a, b, d); //6 4 30
	d = a++ + ++c - b--; 
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d); //7 3 11 13
	a = 0;
	b = 0;
	d = a++ || ++b * d-- / ++c; 
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d); //2 0 11 1
	d = b++ && ++a / ++c * d++;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d); //2 1 11 0



	return 0;
}