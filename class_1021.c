#include<stdio.h>
int main()
{
	//int num1=10, num2=5;
	///*scanf("%d%d", &num1, &num2);*/
	//if("�� ����ɱ�?")
	//	printf("���ΰ�� %d\n", num1 != num2);


	//num1 = 1, num2 = 0;
	//if (num1)
	//	printf("��\n");
	//if (num2);
	//	printf("����\n");

	//if (1)
	//	printf("���̹Ƿ� ���\n");
	//if (0)
	//	printf("�����̹Ƿ� ��¾���");


	//scanf("%d", &num1);
	//num2 = num1 % 2;
	//if (num2 == 0)
	//	printf("¦��");
	//if (num2 != 0)  //if(num2)�� ǥ�� ����
	//	printf("Ȧ��");


	/*int su;
	printf("10���� ū ������ �Է��ϼ���..");
	scanf("%d", &su);
	if (su <= 10)
		printf("10 ������ ���� �Է��Ͽ����ϴ�!\n");
	printf("%d\n", su);*/


	/*int num;
	printf("���� �Է� : ");
	scanf("%d", &num);

	if (num < 0)
		printf("�Է� ���� 0���� �۴�.\n");
	if (num > 0)
		printf("�Է� ���� 0���� ũ��.\n");
	if (num == 0)
		printf("�Է� ���� 0�̴�.\n");*/


	//int opt;
	//double num1, num2;
	//double result;

	//printf("1.���� 2.���� 3.���� 4.������\n");
	//scanf("%d", &opt);
	//printf("�ΰ��� �Ǽ� �Է� : ");
	//scanf("%lf %lf", &num1, &num2);

	//if (opt == 1)
	//	result = num1 + num2;
	//if (opt == 2)
	//	result = num1 - num2;
	//if (opt == 3)
	//	result = num1 * num2;
	//if (opt == 4)
	//	result = num1 / num2;

	//printf("��� : %f\n", result);


	//int day;
	//printf("��¥�� �Է��ϼ��� : ");
	//scanf("%d", &day);
	//if (day % 7 == 1)
	//	printf("������\n");
	//if (day % 7 == 2)
	//	printf("ȭ����\n");
	//if (day % 7 == 3)
	//	printf("������\n");
	//if (day % 7 == 4)
	//	printf("�����\n");
	//if (day % 7 == 5)
	//	printf("�ݿ���\n");
	//if (day % 7 == 6)
	//	printf("�����\n");
	//if (day % 7 == 0)
	//	printf("�Ͽ���\n");


	//int num;
	//printf("���� �Է��ϼ��� : ");
	//scanf("%d", &num);
	//if (num % 3 == 0)
	//	printf("%d�� 3�� ����Դϴ�\n", num);

	//printf("���� �Է��ϼ��� : ");
	//scanf("%d", &num);
	//if (num < 0)
	//	num *= -1;
	//printf("���� : %d\n", num);

	//printf("���� �Է��ϼ��� : ");
	//scanf("%d", &num);
	//if (!(num % 2))
	//	printf("%d�� ¦���Դϴ�\n", num);
	//if (num % 2)
	//	printf("%d�� Ȧ���Դϴ�\n", num);

	//int num1, num2;
	//printf("ù��° ���� �Է� �ϼ��� : ");
	//scanf("%d", &num1);
	//printf("�ι�° ���� �Է� �ϼ��� : ");
	//scanf("%d", &num2);
	//if (num1 > num2)
	//	printf("ù��° ���� �� Ů�ϴ�\n");
	//if (num1 < num2)
	//	printf("�ι�° ���� �� Ů�ϴ�\n");
	//if (num1 == num2)
	//	printf("�� ���� ���� �� �Դϴ�\n");


	int num1, num2, num3;
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
		printf("���� ū ���� %d�Դϴ�\n", num1);
	if (num2 > num1 && num2 > num3)
		printf("���� ū ���� %d�Դϴ�\n", num2);
	if (num3 > num1 && num3 > num2)
		printf("���� ū ���� %d�Դϴ�\n", num3);

	if (num1 < num2)
		num1 = num2;
	if (num1 < num3)
		num1 = num3;
	printf("���� ū ���� %d�Դϴ�\n", num1);

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d%d", &num1, &num2);
	if (num1 > num2 && num1 % 2 == 0)
		printf("%d�� �� ũ�� ¦���Դϴ�\n", num1);
	if (num2 > num1 && num2 % 2 == 0)
		printf("%d�� �� ũ�� ¦���Դϴ�\n", num2);

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d%d", &num1, &num2);
	num3 = num1 + num2;
	if (num3 % 2 == 0 && num3 % 3 == 0)
		printf("�� ���� ���� %d�̰� ¦���̸� 3�� ����Դϴ�\n", num3);








	return 0;
}


