#include<stdio.h>
int main()
{
	/*int num;
	num = 20;
	printf("%d\n", num);*/
	
	// ���������δ� ������, ���� �׸��� ���ٸ��� ����Ѵ�.
	// �������� ù ���ڴ� �ݵ�� �����ڳ� ����(_)�̾�� �Ѵ�.
	// C����� �����(reserved word)�� ���������� ����� �� ����.
	// ���� �빮�ڿ� �ҹ��ڴ� ���� �ٸ� ���ڷ� ���ֵȴ�.
	// ������ ���� ������ �� �� ����.
	// �������� ���̴� ���� 256�ڸ����� �����ϴ�.
	
	// ���� �۸� ���
	// 1) �������� �������� �� ������ ������ data�� ��� �Ǵ�
	// ������ ���� ������ �� �ֵ��� �����ִ°��� �ٶ����ϴ�.
	// 2) �ѱ� ������ ��밡���ϴ�. ������ ������
	// ���α׷������� ������� �ʴ°��� �ٶ����ϴ�.


	/*int num1;
	int num2;
	num1 = 10;
	num2 = 20;*/


	/*int age = 21;
	double weight = 50.0, height = 163.5;

	printf("���� ���̴� %d�� �Դϴ�.\n", age);
	printf("���� �����Դ� %f(kg)�Դϴ�.\n", weight);
	printf("���� ������ %f(cm)�Դϴ�.\n", height);*/


	//int num = 123;
	//char ch = 'D';

	//num = num + 1;  // �캯�� ������� ����� �º��� num ������ �Ҵ�
	//ch = 'G';
	//printf("num = %d\n", num);
	//printf("ch = %c\n", ch);


	float height_inch = 70.0;
	double height_cm = height_inch * 2.54; // �ʱ�ȭ�� ������� �����
	
	printf("���� ������ %f(cm)�Դϴ�\n", height_cm);
	  

	char ch = 'A';
	int num = 5, ret;

	ret = ch + num; //����ȯ �߻�
	printf("ret = %d\n", ret);


	//// �Ǽ����̶� ���������� ��ȯ ����
	//int num1;
	//float num2 = 367.78;

	//num1 = num2;
	//printf("num1 = %d\n", num1);

	
	int num1 = 25, num2 = 3;

	printf("num1 / num2 = %d\n", num1 / num2);
	printf("num1 / num2 = %f\n", (float)num1 / num2);
	printf("num1 * num2 = %d\n", num1 * num2);

	
	int score = 100;
	printf("���̽� %d��\n", score);

	int age = 27;
	printf("���� %d���̴�\n", age);

	int py = 100, clang = 99, java = 55, sum;
	double avg;
	sum = py + clang + java;
	avg = sum / 3.0;//(double)sum/3
	printf("�� �� : %d��\n", sum);
	printf("�� �� : %.2f\n", avg);

	

	return 0;
}