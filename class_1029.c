#include<stdio.h>
#include<conio.h>
int main()
{
	int su;
	for (su = 1; su < 5; su++) {
		if (su == 3) {
			continue;
			printf("su = 3\n");
		} 
		else {
			printf("su = %d\n", su);
		}
	}


	//char ch;
	//while (1) {
	//	ch = getch() - 32;
	//	putch(ch);
	//	if (ch != 'q' && ch != 'Q')
	//		continue;
	//	else
	//		exit();
	//}


	int i, num, result = 0;
	printf("���� �Է� : ");
	scanf("%d", &num);
	while (1) {
		i = num % 10;
		result *= 10;
		result += i;
		num /= 10;
		if (num == 0)
			break;
	}
	printf("�Ųٷ� �� : %d\n", result);

	i = 0; result = 0;
	printf("���� �Է� : ");
	scanf("%d", &num);
	while (1)
	{
		i = num % 10;
		result += i;
		num = num / 10;
		if (num == 0)
			break;
	}
	printf("�� �ڸ����� �� : %d\n", result);


	printf("���� �Է� : ");
	scanf("%d", &num);
	printf("%d�� ��� : ", num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0) // ����� ã�� �ڵ�
			printf("%d ", i);
	}
	printf("\n");


	int j, count = 0;
	printf("���� �Է� : ");
	scanf("%d", &num);
	printf("%d������ �Ҽ� : ", num);
	for (i = 2; i <= num; i++) { // 1�� ��� ���� ����̰� �Ҽ����� ���ܵǱ� ������ 2���� ������.
		for (j = 2; j < i; j++) { // ����� �Ǵ��ϱ� ���� Ȯ���� ������ ���ʴ�� ����� ã��
			if (i % j == 0) {
				count++; // ����� ã�� �Ǹ� 1�� ī��Ʈ�ؼ� ����� ������ ���� ���Ѵ�
				break;
			}
		}
		if (count == 1) // �Ҽ���� ����� 1���ۿ� �������� �ʴ´�. ��, �� �ڵ�� 1�� ���ܽ�����
			printf("%d ", i);
		count = 0;
	}
	printf("\n");
	

	int sum = 0;
	for (i = 1; i <= 1000; i++) {
		if (i % 4 == 1 && i % 6 == 1) { 
			sum += i; // �� ������ ���϶����� ����
			//printf("%d -> %d\n", i, sum); //�˻��� �ϱ� ���� �߰� �ڵ�
		}
	}
	printf("%d\n", sum); //41916


	int num1, num2;
	printf("�� ���� �Է� : ");
	scanf("%d%d", &num1, &num2);

	for (i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			result = i;
		}
	}
	printf("�ִ� ����� : %d\n", result);

	// result2 = num1 * num2 / result �ּ� ����� ���ϴ� ����
	if (num1 >= num2) 
		i = num1;
	else
		i = num2;
	while (1) {
		if (i % num1 == 0 && i % num2 == 0) {
			printf("�ּ� ����� : %d\n", i);
			break;
		}
		i++;
	}


	














	return 0;
}