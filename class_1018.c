#include<stdio.h>
int main()
{
	/*int st = 11, time = 37;
	double avg;
	avg = time / (double)st;
	printf("�� ������� �ɸ��� �ð� : %.2f��\n", avg);*/


	//int to_fl = 14, avg_height = 260;//���� : cm
	//double one_fl = 500.23, to_height, meter;
	//to_height = one_fl + avg_height * (to_fl - 1); //1���� ����
	//meter = to_height / 100;
	//printf("ȣ���� �� ���� : % .3fm\n", meter);


	int time = 60 * 60; //1�ð��� �ʴ��� ����
	double meter, kilo, mo100 = 11.27, ret;
	ret = time / mo100; //1�ð��� 11.27�ʰ� ��� ������ Ȯ��
	meter = ret * 100; //���� ����� 1�ð��� 11.27�ʰ� ��� �������̴� �׷��Ƿ� 100m�� ������� �Ѵ�
	kilo = meter / 1000; //���� ����� m�̹Ƿ� kilometer ������ �����ؾ� �Ѵ�.
	printf("1�ð� �� �̵��Ÿ� : %.2fkm\n", kilo);


	//int num1, num2, sum;
	//printf("���� 2���� �Է��ϼ���...");
	//scanf("%d%d", &num1, &num2);
	//// scanf �Լ��� ���Ȼ� ����(�����÷ο�:�����ġ��)�ذ� 
	//// 1) scanf_s("���� ���", &����, sizeof(�ڷ����� ũ��))
	////		-> ����, ���� �����ϴ� ����
	//// 2) #define _CRT_SECURE_NO_WARNINGS
	////		-> ������ �ȳ��� �ϰ� ���������� ó������
	////		   ��, �ڵ��� �� ���ʿ� �ۼ�����߸� �մϴ�.
	//// 3) �޴� -> ������Ʈ -> ������Ʈ �Ӽ� -> c/c++ -> sql�˻�(������)
	////		-> �ѹ��� �������ָ� �� �������ʹ� ���� �������� �ʾƵ� ��.
	////		-> �� ���ο� ������Ʈ ������ �ٽ� ��������� ��.
	////		���� ó���� ���ϳ� ��� �޼����� ��� ����.
	//sum = num1 + num2;
	//printf("�� ���� ���� %d �Դϴ�\n", sum);

	//char name1[7], name2[7];
	//printf("%s","�̸��� �Է��ϼ���!");
	//scanf("%s", name1);
	//printf("������ �Է��ϼ���!"); 
	//scanf("%s", name2);
	//printf("���� �̸��� %s�Դϴ�\n", name1);
	//printf("���� ������ %s�Դϴ�.\n", name2);


	double num1;
	printf("������ �Ǽ� �Է� : ");
	scanf("%lf", &num1);
	printf("�Ǽ� : %.2f\n", num1);


	char a,b,c;
	printf("�̴ϼ��� �Է��ϼ��� : ");
	scanf("%c%c%c", &a, &b, &c);
	printf("�̴ϼ� : %c%c%c\n", a, b, c);

	char ch[4];
	printf("�̴ϼ��� �Է��ϼ��� : ");
	scanf("%s", ch[4]);
	printf("�̴ϼ� : g%s\n", ch);


	int py, c, java, sum;
	double avg;
	printf("3������ ������ ���ʴ�� �Է��ϼ���\n>>> ");
	scanf("%d%d%d", &py, &c, &java);
	sum = c + java + py;
	avg = sum / (double)3;
	printf("3������ ���� : %d\n", sum);
	printf("3������ ��� : %.2f\n", avg);


	char name[20];
	int age; 
	prinf("����� �̸��� �����Դϱ�? \n>>> ");
	scanf("%s", name);
	printf("%s���� ���̴� �� �� �Դϱ�?\n>>> ", name);
	scanf("%d", &age);
	printf("%s���� ���̴� %d�� �Դϴ�\n", name, age);
	

	return 0;
}