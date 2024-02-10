#include<stdio.h>
#include<Windows.h>
int main(void) 
{
	printf("□□□□□0 %% \r");
	Sleep(1000);
	printf("■□□□□20 %% \r");
	Sleep(1000);
	printf("■■□□□40 %% \r");
	Sleep(1000);
	printf("■■■□□60 %% \r");
	Sleep(1000);
	printf("■■■■□80 %% \r");
	Sleep(1000);
	printf("■■■■■100 %% \n");
}

#include<stdio.h>
int main(void)
{
   	printf("1234567812345678123456781234567812345678\n");
	printf("1234567\t123\t12345678\t123\n");
    printf("avcdefg\tabc\tabcdefgh\tabc\n");
	printf("대한민국\t만세\t대한독립만세\t만만세\n");
}

#include<stdio.h>
int main()
{
	printf("========================\n");
	printf("\t /)/)\n");
	printf("\t(  ..)\n");
	printf("\t(  >♡\n");
	printf("  Have a Good Time.\n");
	printf("========================\n");

	printf("\t\t#### 회비 정보 ####\n");
	printf("================================================\n");
	printf("이름\t\t나이\t전화번호\t회비\n");
	printf("================================================\n");
	printf("홍길동\t\t\"15\"\t010-123-1234\t\\20,000\n");
	printf("임꺽정\t\t\"20\"\t010-234-2345\t\\30,000\n");
	printf("김말이\t\t\"28\"\t010-345-3456\t\\50,000\n");
	printf("------------------------------------------------\n");
	printf("총합계\t\t\t\t\t\\100,000\n");
	printf("================================================\n");


	return 0;
}

#include<stdio.h>

int main()
{
	printf("Hello Everybody \n");
	printf("%d\n", 1234);
	printf("%d %d \n", 10, 20);

	return 0;
}

#include<stdio.h>
int main()
{
	printf("%d\n", 123);
	printf("%d %d\n", 123);
	printf(" %d\n", 123, 321);
	printf("%d %d\n", 123, 321);
	printf("%d + %d = %d\n", 123, 321, 123 + 321);
	return 0;
}

#include<stdio.h>
int main() 
{
	printf("정수 표현 : %d\n", 123);
	printf("정수 표현 : %d\n", 123.123);
	printf("정수 표현 : %d %d\n", 123, 456);

	printf("\n 실수 표현 : %f\n", 456);
	printf("실수 표현 : %f\n", 456.456);
	printf("실수 표현 : %f %f\n", 456.456, 123.123);

	return 0;
}

#include<stdio.h>
int main(void)
{
	printf("%c %c\n", 'a', 'A');
	printf("%c %c\n", "a", "A");
	printf("%d %d\n", 'a', 'A');
	printf("%d %d\n", "a", "A");
	printf("\n 문자열 표현 : %s \n", "안녕");
	printf("문자열 표현 : %s\t%s\n", "문자열", "표현방식");

	return 0;
}

#include<stdio.h>
int main()
{
	printf("기본 값 : %d\n", 123);
	printf("설정 값 : %5d\n", 123);
	printf("설정 값 : %05d\n", 123);
	printf("설정 값 : %5d%5d\n", 123, 123);
	printf("설정 값 : %-5d%-5d\n", 123, 123);

	return 0;
}

#include<stdio.h>
int main()
{
	printf("기본 값 : %f\n", 123.45678);
	printf("설정 값 : %10.3f\n", 123.45678);
	printf("설정 값 : %2.1f\n", 123.45678);
	printf("설정 값 : %.2f\n", 123.45678);

	return 0;
}