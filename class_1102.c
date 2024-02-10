#include<stdio.h>

float avrg(int x, int y);
void show_avrg(int, int, float);

void func(int a, int b);

char big(int x, int y)
{
	if (x > y)
		return 'Y';
	else if (x < y)
		return 'N';
	else
		return '=';
}

long fact(long n)
{
	if (n == 1L)
		return 1L;
	else
		return (n * fact(n - 1));
}


void big_num(int num1, int num2)
{
	if (num1 == num2)
		printf("두 수가 같습니다\n");
	else
		num1 > num2 ? printf("%d가 큰수이다\n", num1) : printf("%d가 큰수이다\n", num2);
	
}

void hol_jjak(int num1)
{
	num1 % 2 == 0 ? printf("%d는 짝수입니다.\n", num1) : printf("%d는 홀수입니다\n", num1);
}

char three_func(int num1)
{
	return (!(num1 % 3));
}

int distance(int num1)
{
	if (num1 < 0)
		num1 *= -1;
	return num1;
}

int reverse(int num1)
{
	int tmp, result=0;
	while (1) {
		tmp = num1 % 10;
		result = result*10 + tmp;
		num1 = num1 / 10;
		if (num1 == 0)
			return result;
	}
}



int main() 
{
	int i, j; float f;
	i = 2; j = 3;
	f = avrg(i, j);
	show_avrg(i, j, f);


	int a = 100, b = 200;
	char size = big(a, b);

	if (size == 'Y')
		printf("\n%d는(은) %d보다 크다.\n", a, b);
	else if (size == 'N')
		printf("%d는(은) %d보다 작다.\n", a, b);
	else if (size == '=')
		printf("\n%d는(은) %d과(와) 같다.\n", a, b);


	a = 5, b = 10;
	func(a, b);
	printf("a=%d, b=%d\n", a, b);


	//static int s = 1;
	//printf("recursive function\n");
	//if (s == 5)
	//	return;
	//s += 5;
	//main();


	static int s = 0;
	if (s >= 3)
		return;
	else
		s = s + 1;
	printf("recursive function\n");
	//main();


	long x = 5L;
	printf("\n%ld!의 값은 %ld이다.\n", x, fact(x));


	int num1, num2;
	printf("두 수 입력 : ");
	scanf("%d%d", &num1, &num2);
	big_num(num1, num2);
	
	printf("정수 입력 : ");
	scanf("%d", &num1);
	hol_jjak(num1);
	
	printf("정수 입력 : ");
	scanf("%d", &num1);
	if (three_func(num1))
		printf("%d가 3의 배수이다\n", num1);

	printf("정수 입력 : ");
	scanf("%d", &num1);
	printf("절대값 : %d\n", distance(num1));


	printf("정수 입력 : ");
	scanf("%d", &num1);
	printf("거꾸로 수 : %d\n", reverse(num1));



	return 0;
	
}

float avrg(int j, int k)
{
	int total; float f; 
	total = j + k;
	f = total / 2.0f;
	return f;
}

void show_avrg(int a, int b, float c)
{
	printf("\n%d와 %d의 평균", a, b);
	printf("값은 %3.1f입니다\n", c);

}


void func(int a, int b)
{
	a += 5;
	b *= 10;
	printf("a=%d, b=%d\n", a, b);
}

