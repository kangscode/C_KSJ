#include<stdio.h>
int main(void)
{
	//int num1, num2;
	//scanf("%d %d", &num1, &num2);
	//if (num1 > num2)
	//	printf("���̹Ƿ� %d", num1 > num2);
	//else
	//	printf("�����̹Ƿ� %d", num1 > num2);


	//int su1, su2, max, min;
	//printf("���� �� ���� �Է��ϼ���... ");
	//scanf("%d%d", &su1, &su2);
	//if (su1 > su2) {
	//	max = su1;
	//	min = su2;
	//}
	//else {
	//	max = su2;
	//	min = su1;
	//}

	//printf("\n max = %d min = %d", max, min);


	//int num1, num2;
	//scanf("%d %d", &num1, &num2);
	//if (num1 > num2) { // num1>num2�� '��'�̸� �Ʒ��� if ���ӹ��� ����� ����
	//	printf("num1�� num2���� Ů�ϴ�.\n");
	//	printf("%d > %d\n", num1, num2);
	//}
	//else {			// num1>num2�� '����'�̸� �Ʒ��� else ���ӹ��� ����� ����
	//	printf("num1�� num2���� ũ�� �ʽ��ϴ�.\n");
	//	printf("%d <= %d\n", num1, num2);
	//}


	int a = 10, b = 5;
	if (a > b) {
		if (a > 5) {
			printf("a�� 5���� ũ��\n");
		}
	}
	if (a > b && a > 5)
		printf("a�� 5���� ū ��\n");
	

	//int su;
	//printf("���� �� ���� �Է��ϼ���... ");
	//scanf("%d", &su);
	//if (su >= 0) {
	//	if ((su % 2) == 0)
	//		printf("%d : ���� ¦��\n", su);
	//	else
	//		printf("%d : ���� Ȧ��\n", su);
	//}
	//else
	//	printf("%d : ����\n", su);
	//printf("\n----- ���α׷� ���� �� -----");


	//int kor, eng, mat, avg;
	//printf("3���� ������ �Է��ϼ���... ");
	//scanf("%d%d%d", &kor, &mat, &eng);

	//avg = (kor + eng + mat) / 3;
	//if (avg < 70)
	//	printf("���հ�\n");
	//else if (kor < 60)
	//	printf("���հ�\n");
	//else if (eng < 60)
	//	printf("���հ�\n");
	//else if (mat < 60)  
	//	printf("���հ�\n");
	//else
	//	printf("�հ�\n");


	int minute, money = 0;
	printf("���� ź �ð� : ");
	scanf("%d", &minute);
	if (minute <= 30)
		money = 3000;
	else if (minute > 30) {
		money = 3000 + ((minute - 30 - 1) / 10 + 1)  * 500;
		//if (minute % 10 == 0) // 10�д����� ž���� ��� 40��, 50�� ...
		//	money = 3000 + (minute - 30) / 10 * 500;
		//else // �д����� ž���� ��� 31��.. 44��.. 52��..
		//	money = 3000 + ((minute - 30) / 10 + 1) * 500;
	}
	printf("���� ź ��� : %d��\n", money);


	int count;
	printf("��� ���ö��� ���� : ");
	scanf("%d", &count);
	if (count <= 10)
		money = count * 2500;
	else if (count > 10)
		money = 10 * 2500 + (count - 10) * 2400;
	printf("�ֹ��� ���ö� �ݾ� : %d��\n", money);


	printf("���� ���� ���� : ");
	scanf("%d", &count);
	if (count >= 100)
		money = count * 5000 * (100 - 12) / 100;
	else if (count >= 10)
		money = count * 5000 * (100 - 10) / 100;
	else
		money = count * 5000;
	printf("��ü �ݾ� : %d��\n", money);


	int kor, mat, eng, sum;
	char hakjum;
	double avg;
	printf("�� ������ ������ �Է��ϼ��� : ");
	scanf("%d%d%d", &kor, &mat, &eng);
	sum = kor + mat + eng;
	avg = sum / 3.0;
	if (avg >= 90)
		hakjum = 'A';
	else if (avg >= 80)
		hakjum = 'B';
	else if (avg >= 70)
		hakjum = 'C';
	else if (avg >= 60)
		hakjum = 'D';
	else
		hakjum = 'F';
	printf("3������ ���� : %d\n3������ ��� : %.2f\n���� : %c\n", sum, avg, hakjum);








	










	


	return 0;
}