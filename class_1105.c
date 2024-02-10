#include<stdio.h>
#include<string.h>

void ex_func(int sa, int sb);

void int_swap(int* x, int* y);

void convertToUppercase(char* s);

struct student {
	int number;
	char name[10];
	double grade;
};


int main()
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소 : %u\n", &i);
	printf("c의 주소 : %u\n", &c);
	printf("f의 주소 : %u\n", &f);


	//int num = 10;		
	//int* pnum = &num;		//pnum이 num을 가리킨다.
	//*pnum = 20;				//pnum이 가리키는 공간에 20을 저장한다
	//printf("%d\n", *pnum);	//pnum이 가리키는 공간에 저장된 값 출력


	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;	//포인터 pnum이 num1을 가리킴
	(*pnum) += 30;	// num1 += 30;과 동일

	pnum = &num2;	//포인터 pnum이 num2를 가리킴
	(*pnum) -= 30;	// num2 -= 30;과 동일

	printf("num1:%d, num2:%d\n", num1, num2);


	//char ch1 = 'A', ch2;
	//char* ptr; //문자형 포인터 변수 ptr 선언함

	//ptr = &ch1;
	//ch2 = *ptr;
	//printf("변수 ch1의 주소는 %p번지 이다.\n", &ch1);
	//printf("변수 ptr의 내용은 %u번지 이다.\n", ptr);
	//printf("변수 *ptr의 내용은 %c 이다.\n", *ptr);
	//printf("변수 ch2의 내용은 '%c' 이다.\n", ch2);


	num1 = 10;
	int* ptr;

	ptr = &num1;
	num1++;
	num2 = 5;
	ptr = &num2;	//정수형 변수 num2의 주소를 포인터변수 ptr에 할당함
	*ptr = *ptr + num1 + num2;
	printf("num1=%d, num2=%d, *ptr=%d\n", num1, num2, *ptr);


	char vc = 'A', * pc;

	pc = &vc; /*문자형 포인터 변수 pc에 vc의 주소값을 할당함*/

	printf("pc-1=%u번지 pc=%u번지 pc+1=%u번지\n", pc - 1, pc, pc + 1);
	

	int vi = 123, * pi;
	
	pi = &vi; /*정수형 포인터*/

	printf("pi-1=%u번지 pi=%u번지 pi+1=%u번지\n", pi - 1, pi, pi + 1);
	

	//int a[5] = { 10 ,20, 30, 40, 50 };
	//int* p;
	//p = a;
	//for (i = 0; i < 5; i++)
	//{
	//	printf("배열의 주소 %d, 배열의 값 %d\n", p + i, *(p + i));
	//}


	//int a = 10, b[5] = { 20, 30, 40, 50, 60 }, * p;
	//p = &a;
	//printf("(1) a=%d, *p=%d\n", a, *p);
	//p = b;
	//printf("(2) a=%d, *p=%d, *(p+1)=%d\n", a, *p, *(p + 1));
	//(*p)++;
	//printf("(3) a=%d, *p=%d, *(p+1)=%d\n", a, *p, *(p + 1));


	int ma = 100, mb = 200;
	ex_func(ma, mb);
	printf("값2 : %d %d\n", ma, mb);
	

	int a = 100, b = 200;
	printf("교환전 : a=%d, b=%d\n", a, b);
	int_swap(&a, &b);
	printf("교환 후 : a=%d, b=%d\n", a, b);


	char string[] = "characters";
	printf("변환 전의 스트링 : %s\n", string);
	convertToUppercase(string);
	printf("변환 후의 스트링 : %s\n", string);


	struct student s;

	s.number = 20210001;
	//s.name = "홍길동";
	s.grade = 4.3;

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %f\n", s.grade);

	int* g = &a;
	printf("%d", *g);


	return 0;

}


void ex_func(int sa, int sb) {
	sa += 5; 
	sb += 5;
	printf("값1 : %d %d\n", sa, sb);
}

void int_swap(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void convertToUppercase(char* s) {
	while (*s != '\0') {
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32; /* ASCII 대소문자 변환 */
		++s; /*다른 문자로 포인터 증가*/
	}
}