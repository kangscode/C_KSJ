#include<stdio.h>
int main()
{
	printf("�⺻ �� : %s\n", "clang test");
	printf("���� �� : %20.2s\n", "clang test");

	printf("12345678901234567890123456789012345678901234567890\n");
	printf("%10s%10s\n", "���ѹα�", "����");

	
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
	printf("�̸�\t����\t�ּ�\n");
	printf("======================================\n");
	printf("ȫ�浿\t%d\t���¥�� %d�� %dȣ\n", 20, 102, 205);
	printf("�̼���\t%d\t������ %dm\n", 28, 2000);


	printf("========== ��� ��� =========\n");
	printf("�̸�   : %s\n", "ȫ�浿");
	printf("����   : %d\n", 20);
	printf("Tel    : %03d-%d-%d\n", 10, 1234, 1234);
	printf("Ű     : %.1f\n", 178.5);
	printf("������ : %.1f\n", 75.5);
	printf("������ : %c\n", 48);
	

	

	return 0;
}

