#include<stdio.h>

int a, b, c;

int iterate(int n);

int main() {

	int n, result;
	printf("�Ǻ���ġ ������ 1��, 2��, 3���� ������� �Է��ϼ��� : ");
	scanf("%d%d%d", &a, &b, &c);
	printf("���Ϸ��� ���� �� : ");
	scanf("%d", &n);

	result = iterate(n);
	printf("�� %d�� : %d\n", n, result);

	return 0;
}


int iterate(int n) {

	int i, temp;

	if (n == 1)
		return a;
	else if (n == 2)
		return b;
	else if (n == 3)
		return c;
	else if (n >= 4) {

		for (i = 4; i <= n; i++) {
			temp = c;
			c = a + c;
			a = b;
			b = temp;
		}

		return c;
	}

	

}