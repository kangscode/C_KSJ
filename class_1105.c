#include<stdio.h>
#include<string.h>

void ex_func(int sa, int sb);

void int_swap(int* x, int* y);

void convertToUppercase(char* s);

struct student {
	int number;
	char name[10];
	double grade;
};


int main()
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i�� �ּ� : %u\n", &i);
	printf("c�� �ּ� : %u\n", &c);
	printf("f�� �ּ� : %u\n", &f);


	//int num = 10;		
	//int* pnum = &num;		//pnum�� num�� ����Ų��.
	//*pnum = 20;				//pnum�� ����Ű�� ������ 20�� �����Ѵ�
	//printf("%d\n", *pnum);	//pnum�� ����Ű�� ������ ����� �� ���


	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;	//������ pnum�� num1�� ����Ŵ
	(*pnum) += 30;	// num1 += 30;�� ����

	pnum = &num2;	//������ pnum�� num2�� ����Ŵ
	(*pnum) -= 30;	// num2 -= 30;�� ����

	printf("num1:%d, num2:%d\n", num1, num2);


	//char ch1 = 'A', ch2;
	//char* ptr; //������ ������ ���� ptr ������

	//ptr = &ch1;
	//ch2 = *ptr;
	//printf("���� ch1�� �ּҴ� %p���� �̴�.\n", &ch1);
	//printf("���� ptr�� ������ %u���� �̴�.\n", ptr);
	//printf("���� *ptr�� ������ %c �̴�.\n", *ptr);
	//printf("���� ch2�� ������ '%c' �̴�.\n", ch2);


	num1 = 10;
	int* ptr;

	ptr = &num1;
	num1++;
	num2 = 5;
	ptr = &num2;	//������ ���� num2�� �ּҸ� �����ͺ��� ptr�� �Ҵ���
	*ptr = *ptr + num1 + num2;
	printf("num1=%d, num2=%d, *ptr=%d\n", num1, num2, *ptr);


	char vc = 'A', * pc;

	pc = &vc; /*������ ������ ���� pc�� vc�� �ּҰ��� �Ҵ���*/

	printf("pc-1=%u���� pc=%u���� pc+1=%u����\n", pc - 1, pc, pc + 1);
	

	int vi = 123, * pi;
	
	pi = &vi; /*������ ������*/

	printf("pi-1=%u���� pi=%u���� pi+1=%u����\n", pi - 1, pi, pi + 1);
	

	//int a[5] = { 10 ,20, 30, 40, 50 };
	//int* p;
	//p = a;
	//for (i = 0; i < 5; i++)
	//{
	//	printf("�迭�� �ּ� %d, �迭�� �� %d\n", p + i, *(p + i));
	//}


	//int a = 10, b[5] = { 20, 30, 40, 50, 60 }, * p;
	//p = &a;
	//printf("(1) a=%d, *p=%d\n", a, *p);
	//p = b;
	//printf("(2) a=%d, *p=%d, *(p+1)=%d\n", a, *p, *(p + 1));
	//(*p)++;
	//printf("(3) a=%d, *p=%d, *(p+1)=%d\n", a, *p, *(p + 1));


	int ma = 100, mb = 200;
	ex_func(ma, mb);
	printf("��2 : %d %d\n", ma, mb);
	

	int a = 100, b = 200;
	printf("��ȯ�� : a=%d, b=%d\n", a, b);
	int_swap(&a, &b);
	printf("��ȯ �� : a=%d, b=%d\n", a, b);


	char string[] = "characters";
	printf("��ȯ ���� ��Ʈ�� : %s\n", string);
	convertToUppercase(string);
	printf("��ȯ ���� ��Ʈ�� : %s\n", string);


	struct student s;

	s.number = 20210001;
	//s.name = "ȫ�浿";
	s.grade = 4.3;

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %f\n", s.grade);

	int* g = &a;
	printf("%d", *g);


	return 0;

}


void ex_func(int sa, int sb) {
	sa += 5; 
	sb += 5;
	printf("��1 : %d %d\n", sa, sb);
}

void int_swap(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void convertToUppercase(char* s) {
	while (*s != '\0') {
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32; /* ASCII ��ҹ��� ��ȯ */
		++s; /*�ٸ� ���ڷ� ������ ����*/
	}
}