#include<stdio.h>
int main()
{
	int su;
	su = 8;
	(su % 2 == 0) ? printf("%d : ¦��\n", su) : 
		printf("%d : Ȧ��\n", su);
	su = 9;
	(su % 2 == 0) ? printf("%d : ¦��\n", su) :
		printf("%d : Ȧ��\n", su);


	/*char name[10], hak[10], level;
	int py, c, java, sum;
	double avg;
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name);
	printf("�й��� �Է��ϼ��� : ");
	scanf("%s", hak);
	printf("3������ ������ �Է��ϼ��� >>> ");
	scanf("%d%d%d", &py, &c, &java);
	sum = py + c + java;
	printf("�հ� : %d\n", sum);
	avg = sum / 3.0;
	printf("��� : %lf\n", avg);
	
	(avg >= 90) ? level='A' :
		(avg >= 80) ? level = 'B' :
		(avg >= 70) ? level = 'C' :
		(avg >= 60) ? level = 'D' : (level = 'F');
	printf("\t\t\t #### ����ǥ ####\n");
	printf("�̸�\t�й�\t���̽�\tc���\t�ڹ�\t����\t���\t����\n");
	printf("%s\t%s\t%d\t%d\t%d\t%d\t%.2lf\t%c\n", name, hak, py, c, java, sum, avg, level);*/


	/*int su1 = 15, su2 = 7, result;

	result = su1 | su2;
	printf("su1�� su2�� ���� : %d\n", result);

	result = su1 & su2;
	printf("su1�� su2�� ���� : %d\n", result);

	result = su1 ^ su2;
	printf("su1�� su2�� ���� : %d\n", result);

	su1 = ~su1;
	printf("su1�� ��Ʈ ���� : %d\n", su1);

	int op = 30; result;
	result = op << 3;
	printf("30�� �������� 3��Ʈ �̵���Ų ��� = %d\n", result);*/


	int a = 0, b = 0, c = 0;
	printf("������ ũ��� %d�Դϴ�.\n", sizeof(int));
	a = (b = 3, c = 5, b + c); //�޸������� ���ʺ��� ���������� ���ʷ� ������
	printf("a = %d, b = %d, c = %d\n", a, b, c);


	/*int su1 = 123;
	char ch = 'a';
	float su2 = 12.345;

	printf("���� su1�� ũ�� : %d byte\n", sizeof(su1));
	printf("������ �ڷ����� ũ�� : %d byte\n", sizeof(char));
	printf("����(su1 + su2)�� ũ�� : %d byte\n", sizeof(su1 + su2));
	printf("�Ǽ� 1.23456�� ũ�� : %d byte\n", sizeof(1.23456));
	printf("������ �Ǽ� 'a'�� ũ�� : %d byte\n", sizeof('a'));
	printf("������ �Ǽ� 'a'�� ũ�� : %d byte\n", sizeof(ch));*/


	int su1, su2, su3;
	float result;
	result = (su1 = 5, su2 = su1 + 2, su2++, su3 = su2 / 8);
	printf("su1 = %d\nsu2 = %d\n"
		"su3 = %d\nresult = %f\n", su1, su2, su3, result);


	



	return 0;
}

