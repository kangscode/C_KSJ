#include<stdio.h>
#include <mydefine.h> 

//void func(void)
//{
//	printf("function ");
//	printf("program ");
//	printf("ming\n");
//}

int func(int num1, int num2)
{
	num1 *= num2;
	return num1;
}

int SumFunc(int n)
{
	int i, sum = 0;
	for (i = 0; i <= n; i++)
		sum += i;
	return sum;
}

int main() {

	int day = 0, rat = 2, rice = 100 * 1000;
	while (rice > 0) {
		day++;
		rice -= 20 * rat;
		if (day % 10 == 0)
			rat *= 2;
		
	}
	printf("���� �� ������ : %d��\t���� �� : %d\n", day, rat);

	
	int ret;
	ret = PI * 2 * 5;
	printf("%d\n", ret);
	printf("%d\n", (int)PI);  // (int)PI�� ���������� ���� ǥ��


	int a = 100;	//int main(void)�� ���� a
	if (a == 100) {
		int a = 10;	//if()�� ���� a
		printf("%d\n", a); //10
	}
	printf("%d\n", a); //100


	int i;
	for (i = 0; i < 10; i++) {
		//int a = 100; //for���� ���� a
		static int a = 100; //for���� ���� a
		//�������� - �������� Ư�� ����, ���α׷� ����� �Ҹ�
		a++;
		printf("%d\n", a);
	}
	printf("%d\n", a); //100 != for���� a


	//printf("main start\n");
	//func();


	int sum = 0;
	sum = func(10, 2);
	printf("sum : %d\n", sum);


	int n; sum = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
		sum += i;
	printf("%d\n", sum);

	scanf("%d", &n);
	ret = SumFunc(n);
	ret = printf("%d\n", ret);





	return 0;
}




//#include<stdio.h>
//int a = 100; //main�� �ܺο� ����� ��������
//int main() {
//
//	//int a = 10;
//	if (a == 100) {
//		printf("if %d\n", a);
//	}
//	printf("main %d\n", a);
//
//	return 0;
//}

