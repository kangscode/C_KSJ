#include<stdio.h>
#include<conio.h>
#define ESC 0x1b
#define TRUE 1
int main()
{
	int i = 0;
	for (; i < 10; ) {
		printf("%d", i);
		i++;
	}
																								
	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}


	int num = 0;
	while ( num < 3 ) {
		printf("Hello world %d \n", num);
		num++;
	}


	char ch;
	while ((ch=getch()) != ESC)
	{
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
		putch(ch);
		printf("\n");
	}

	int flag = 1;
	while (flag) {
		ch = getch();
		if (ch == ESC)
			flag = 0;
		else if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
		putch(ch);
		printf("\n");
	}


	int j, sum = 0;
	while (1)
	{
		printf("수입력(1~100) : ");
		scanf("%d", &i);
		if (i >= 1 && i <= 100)
			break;
		printf("잘못 입력, 다시");
	}
	for (j = 1; j <= i; j++)
		sum += j;
	printf("%d\n", sum);


	int temp;
	printf("수 입력 : ");
	scanf("%d", &i);
	while (TRUE)
	{
		temp = i % 10;
		i = i / 10;
		printf("%d", temp);
		if (i == 0)
			break;
	}
	printf("\n");


	int su = 0; sum = 0;
	do {
		su++;
		sum += su;
	} while (su < 10);
	printf("sum = %d\n", sum);


	int su1, su2;
	for (su1 = 1; su1 <= 2; su1++) {
		for (su2 = 1; su2 <= 5; su2++) {
			printf("su1 = %d su2 = %d\n", su1, su2);
			if (su2 == 2)
				break;
		}
		printf("%d * %d = %d\n", su1, su2, su1 * su2);
	}

	su1 = 1;
	while (su1 <= 2) {
		su2 = 1;
		while (su2 <= 5) {
			printf("su1 = %d su2 = %d\n", su1, su2);
			if (su2 == 2)
				break;
			su2++;
		}
		printf("%d * %d = %d\n", su1, su2, su1 * su2);
		su1++;
	}










	return 0;
}
