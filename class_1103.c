#include<stdio.h>
int main()
{
	//int arr[5];
	//int sum = 0, i;

	//arr[0] = 10, arr[1] = 20, arr[2] = 40, arr[4] = 50;

	//for (i = 0; i < 5; i++)
	//{
	//	sum += arr[i];
	//}
	//printf("�� : %d\n", sum);


	int arr[10];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	printf("%d%d%d%d%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("%d%d%d%d%d%d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);


	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1, 2 };
	int len1, len2, len3, i;

	printf("arr1�� ũ�� : %d\n", sizeof(arr1));
	printf("arr2�� ũ�� : %d\n", sizeof(arr2));
	printf("arr3�� ũ�� : %d\n", sizeof(arr3));

	len1 = sizeof(arr1) / sizeof(int);
	len2 = sizeof(arr2) / sizeof(int);
	len3 = sizeof(arr3) / sizeof(int);
	printf("arr1 : %d arr2 : %d arr3 : %d\n", len1, len2, len3);

	for (i = 0; i < len1; i++)
		printf("%d", arr1[i]);
	printf("\n");

	for (i = 0; i < len2; i++)
		printf("%d", arr2[i]);
	printf("\n");

	for (i = 0; i < len3; i++)
		printf("%d", arr3[i]);
	printf("\n");


	//char str[14] = "Good morning!";
	//printf("%s\n", str);


	//char str[] = "Good morning!";	//�迭�� ���̰� 14

	//printf("�迭�� ũ�� : %d\n", sizeof(str));
	//printf("�� ���� ������ ��� : %c\n", str[13]);
	//printf("�� ���� ������ ��� : %d\n", str[13]);
	//
	//str[12] = '?';
	//printf("%s\n", str);


	char nu = '\0'; // �� ���� ����
	char sp = ' ';	// ���� ���� ����

	printf("%d %d\n", nu, sp);	// �ƽ�Ű �ڵ� 0 32
	printf("%c %c\n", nu, sp);


	//char str[50];
	//int idx = 0;

	//printf("���ڿ� �Է� : ");
	//scanf("%s", str);
	//printf("�Է� ���� ���ڿ� : %s\n", str);

	//printf("���� ���� ��� : ");

	//while (str[idx] != '\0')
	//{
	//	printf("%c", str[idx]);
	//	idx++;
	//}
	//printf("\n");


	char str[50] = "I like C programming";
	printf("string : %s\n", str);

	str[8] = '\0';
	printf("string : %s\n", str);

	str[6] = '\0';
	printf("string : %s\n", str);

	str[1] = '\0';
	printf("string : %s\n", str);
	

	int num[5] = { 4, 8, 2, 7, 6 };	//���ĵ��� ���� �迭 ����� ������
	int j, temp;
	for(i = 0; i < 4; i++)	//���� for���� ���� �ε��� ������ ����
		for (j = i+1; j < 5; j++) //���� for���� �񱳴��(������ i+1=>������ ���� �ε���)
			if (num[i] > num[j]) {	//������ �񱳴�󺸴� ũ�� ��, �񱳴���� ������ �ڸ��ٲ�
				temp = num[i];		
				num[i] = num[j];
				num[j] = temp;	//�ڸ��ٲٱ� ���� �ڵ�
			}
	for (i = 0; i < 5; i++)	//���ĵ� ����� �ݺ����� �̿��ؼ� �ѹ��� ���
		printf("%d\n", arr[i]);
		

	int score[5] = { 82, 85, 76, 79, 96 };
	int rank[5] = { 1, 1, 1, 1, 1 };
	for(i = 0; i < 5; i++)	//���� �ε��� ���� �ݺ� ����
		for (j = 0; j < 5; j++) {	//�񱳴�� �ε��� ����(�ڱ��ڽ��� ������)
			if (i == j)
				continue;
			if (score[i] <= score[j])	//������ �񱳴�󺸴� ������ ������ ���� 1�� ����
				rank[i]++;
		}
	printf("���� ���\n");
	for (i = 0; i < 5; i++)
		printf("%-4d %-4d\n", score[i], rank[i]);











	return 0;
}