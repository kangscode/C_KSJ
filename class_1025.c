#include<stdio.h> //printf(), scanf()
#include<stdlib.h> //exit(), system()
#include<conio.h>//getch()
#include<Windows.h>
int main()
{
	//int num;
	//scanf("%d", &num);
	//switch (num) {
	//case 1 :
	//	printf("1�Է�\n");
	//	break;
	//case 2 :
	//	printf("2�Է�\n");
	//	break;
	//default :
	//	printf("1,2������ ������ �Է�\n");
	//}


	//char ch;
	//scanf("%c", &ch);
	//switch (ch)
	//{
	//case 'a':
	//	printf("a�� �Է�\n");
	//	break;
	//case 'A':
	//	printf("A�� �Է�\n");
	//	break;
	//}


	//int num, ret;
	//scanf("%d", &num);
	//ret = num % 3;
	//switch (ret)
	//{
	//case 0:
	//	printf("3�� ���\n");
	//	break;
	//default:
	//	printf("3�� ��� �ƴϴ�\n");
	//	break;
	//}


	//char ch; 
	//printf("M: ����, A:����, E:����\n");
	//scanf(" %c", &ch);
	//switch (ch)
	//{
	//case 'M':
	//case 'm':
	//	printf("Morning\n");
	//	break;
	//case 'A':
	//case 'a':
	//	printf("Afternoon\n");
	//	break;
	//case 'E':
	//case 'e':
	//	printf("Evening\n");
	//	break;
	//}


	//int num, data;
	//while (1)
	//{
	//	printf("==============================\n");
	//	printf("1. ���� �����͸� �Է��ϼ���.\n");
	//	printf("2. ���� �����͸� ����մϴ�.\n");
	//	printf("3. ���α׷��� �����մϴ�.\n");
	//	printf("==============================\n");
	//	scanf("%d", &num);
	//	switch (num)
	//	{
	//	case 1: printf("�����͸� �Է��ϼ��� : ");
	//		scanf("%d", &data); 
	//		break;
	//	case 2: printf("%d", data); getch(); 
	//		break;
	//	case 3: exit(1);
	//	}
	//	system("cls");
	//}


	//int a;
	//while (1) {
	//	printf("1.���� 2.�׸��� 3.��Ʈ�н� 4.�ý��� �Ӽ�\n");
	//	printf("���� : ");
	//	scanf("%d", &a);
	//	switch (a)
	//	{
	//	case 1:
	//		system("calc");
	//		break;
	//	case 2: 
	//		system("mspaint");
	//		break;
	//	case 3: 
	//		system("notepad");
	//		break;
	//	case 4:
	//		system("sysdm.cpl");
	//		break;
	//	default:
	//		return 0;
	//	}
	//	system("cls");
	//}


	int num;
	printf("1~10������ ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	switch (num) 
	{
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	default:
		printf("error\n");
	}
	
	while (1) {
		printf("1.��ǳ 2.��ǳ 3.��ǳ 4.����\n");
		printf("���� : ");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("��ǳ\n");
			break;
		case 2:
			printf("��ǳ\n");
			break;
		case 3:
			printf("��ǳ\n");
			break;
		case 4:
			printf("����\n");
			break;
		default:
			printf("�߸��� �����Դϴ� �ٽ� �Է����ּ���\n");
		}
	}

	char op;
	int su1, su2;
	double result2;
	printf("������� ���ʴ�� �Է� : ");
	scanf("%d%c%d", &su1, &op, &su2);
	switch (op)
	{
	case '+':
		printf("%d %c %d = %d\n", su1, op, su2, su1 + su2);
		break;
	case '-':
		printf("%d %c %d = %d\n", su1, op, su2, su1 - su2);
		break;
	case '*':
		printf("%d %c %d = %d\n", su1, op, su2, su1 * su2);
		break;
	case '/':
		printf("%d %c %d = %.2f\n", su1, op, su2, su1 / (double)su2);
		break;
	default:
		printf("�Է��� �߸��Ǿ����ϴ�. �ٽ� Ȯ���� �ּ���\n");
	}








	return 0; 
}