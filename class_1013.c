#include<stdio.h>
#include<Windows.h>
int main(void) 
{
	printf("������0 %% \r");
	Sleep(1000);
	printf("������20 %% \r");
	Sleep(1000);
	printf("������40 %% \r");
	Sleep(1000);
	printf("������60 %% \r");
	Sleep(1000);
	printf("������80 %% \r");
	Sleep(1000);
	printf("������100 %% \n");
}

#include<stdio.h>
int main(void)
{
   	printf("1234567812345678123456781234567812345678\n");
	printf("1234567\t123\t12345678\t123\n");
    printf("avcdefg\tabc\tabcdefgh\tabc\n");
	printf("���ѹα�\t����\t���ѵ�������\t������\n");
}

#include<stdio.h>
int main()
{
	printf("========================\n");
	printf("\t /)/)\n");
	printf("\t(  ..)\n");
	printf("\t(  >��\n");
	printf("  Have a Good Time.\n");
	printf("========================\n");

	printf("\t\t#### ȸ�� ���� ####\n");
	printf("================================================\n");
	printf("�̸�\t\t����\t��ȭ��ȣ\tȸ��\n");
	printf("================================================\n");
	printf("ȫ�浿\t\t\"15\"\t010-123-1234\t\\20,000\n");
	printf("�Ӳ���\t\t\"20\"\t010-234-2345\t\\30,000\n");
	printf("�踻��\t\t\"28\"\t010-345-3456\t\\50,000\n");
	printf("------------------------------------------------\n");
	printf("���հ�\t\t\t\t\t\\100,000\n");
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
	printf("���� ǥ�� : %d\n", 123);
	printf("���� ǥ�� : %d\n", 123.123);
	printf("���� ǥ�� : %d %d\n", 123, 456);

	printf("\n �Ǽ� ǥ�� : %f\n", 456);
	printf("�Ǽ� ǥ�� : %f\n", 456.456);
	printf("�Ǽ� ǥ�� : %f %f\n", 456.456, 123.123);

	return 0;
}

#include<stdio.h>
int main(void)
{
	printf("%c %c\n", 'a', 'A');
	printf("%c %c\n", "a", "A");
	printf("%d %d\n", 'a', 'A');
	printf("%d %d\n", "a", "A");
	printf("\n ���ڿ� ǥ�� : %s \n", "�ȳ�");
	printf("���ڿ� ǥ�� : %s\t%s\n", "���ڿ�", "ǥ�����");

	return 0;
}

#include<stdio.h>
int main()
{
	printf("�⺻ �� : %d\n", 123);
	printf("���� �� : %5d\n", 123);
	printf("���� �� : %05d\n", 123);
	printf("���� �� : %5d%5d\n", 123, 123);
	printf("���� �� : %-5d%-5d\n", 123, 123);

	return 0;
}

#include<stdio.h>
int main()
{
	printf("�⺻ �� : %f\n", 123.45678);
	printf("���� �� : %10.3f\n", 123.45678);
	printf("���� �� : %2.1f\n", 123.45678);
	printf("���� �� : %.2f\n", 123.45678);

	return 0;
}