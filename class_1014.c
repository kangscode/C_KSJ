#include<stdio.h>
int main()
{
	printf("기본 값 : %s\n", "clang test");
	printf("설정 값 : %20.2s\n", "clang test");

	printf("12345678901234567890123456789012345678901234567890\n");
	printf("%10s%10s\n", "대한민국", "만세");

	
	printf("Decimal : %d\n", 173);
	printf("Decimal : %d\n", 0255);
	printf("Decimal : %d\n", 0xAD);
	printf("Octal : %o\n", 173);
	printf("Octal : %o\n", 0255);
	printf("Octal : %o\n", 0xAD);
	printf("Hexadecimal : %x\n", 173);
	printf("Hexadecimal : %x\n", 0255);
	printf("Hexadecimal : %x\n", 0xAD);


	printf("%d * %d = %d\n", 4, 5, 4 * 5);
	printf("%d * %d = %d\n", 7, 9, 7 * 9);
	

	printf("======================================\n");
	printf("이름\t나이\t주소\n");
	printf("======================================\n");
	printf("홍길동\t%d\t산골짜기 %d동 %d호\n", 20, 102, 205);
	printf("이순신\t%d\t명량수심 %dm\n", 28, 2000);


	printf("========== 출력 결과 =========\n");
	printf("이름   : %s\n", "홍길동");
	printf("나이   : %d\n", 20);
	printf("Tel    : %03d-%d-%d\n", 10, 1234, 1234);
	printf("키     : %.1f\n", 178.5);
	printf("몸무게 : %.1f\n", 75.5);
	printf("혈액형 : %c\n", 48);
	

	

	return 0;
}

