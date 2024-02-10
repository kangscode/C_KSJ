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
	//	printf("1입력\n");
	//	break;
	//case 2 :
	//	printf("2입력\n");
	//	break;
	//default :
	//	printf("1,2제외한 나머지 입력\n");
	//}


	//char ch;
	//scanf("%c", &ch);
	//switch (ch)
	//{
	//case 'a':
	//	printf("a를 입렬\n");
	//	break;
	//case 'A':
	//	printf("A를 입력\n");
	//	break;
	//}


	//int num, ret;
	//scanf("%d", &num);
	//ret = num % 3;
	//switch (ret)
	//{
	//case 0:
	//	printf("3의 배수\n");
	//	break;
	//default:
	//	printf("3의 배수 아니다\n");
	//	break;
	//}


	//char ch; 
	//printf("M: 오전, A:오후, E:저녁\n");
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
	//	printf("1. 정수 데이터를 입력하세요.\n");
	//	printf("2. 정수 데이터를 출력합니다.\n");
	//	printf("3. 프로그램을 종료합니다.\n");
	//	printf("==============================\n");
	//	scanf("%d", &num);
	//	switch (num)
	//	{
	//	case 1: printf("데이터를 입력하세요 : ");
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
	//	printf("1.계산기 2.그림판 3.노트패스 4.시스템 속성\n");
	//	printf("선택 : ");
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
	printf("1~10까지의 숫자를 입력하세요 : ");
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
		printf("1.미풍 2.약풍 3.강풍 4.정지\n");
		printf("선택 : ");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("미풍\n");
			break;
		case 2:
			printf("약풍\n");
			break;
		case 3:
			printf("강풍\n");
			break;
		case 4:
			printf("정지\n");
			break;
		default:
			printf("잘못된 선택입니다 다시 입력해주세요\n");
		}
	}

	char op;
	int su1, su2;
	double result2;
	printf("연산식을 차례대로 입력 : ");
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
		printf("입력이 잘못되었습니다. 다시 확인해 주세요\n");
	}








	return 0; 
}