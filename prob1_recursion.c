#include<stdio.h>

int a, b, c;

int recurse(int n);

int main() {

	int n, result;
	printf("�Ǻ���ġ ������ 1��, 2��, 3���� ������� �Է��ϼ��� : ");
	scanf("%d%d%d", &a, &b, &c);
	printf("���Ϸ��� ���� �� : ");
	scanf("%d", &n);
	
	result = recurse(n);
	printf("�� %d�� : %d\n", n, result);

	return 0;
}

int recurse(int n) {

	if (n == 1)
		return a;
	else if (n == 2)
		return b;
	else if (n == 3)
		return c;
	else if (n >= 4)
		return recurse(n - 1) + recurse(n - 3);

}