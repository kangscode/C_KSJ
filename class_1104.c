#include<stdio.h>
int main() {
	int arr1[3][4];
	int arr2[7][9];
	printf("����3, ����4 : %d\n", sizeof(arr1));
	printf("����7, ����9 : %d\n", sizeof(arr2));
	

	int a[3][3] = { 11, 12, 13, 21, 22, 23, 31, 32, 33 };
	int i, j;
	for (i = 0; i < 3; ++i) {	//���� ������ ���� �ε��� ����
		for (j = 0; j < 3; j++)	//���� ������ ���� �ε��� ����
			printf("�迭 ��� a[%d][%d] : %d\n", i, j, a[i][j]);
		printf("\n");
	}


	int num_arr[5][5];
	int cnt = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			num_arr[i][j] = cnt++;
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", num_arr[i][j]);
		printf("\n");
	}

	
	int arr[5][5];
	cnt = 25;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			arr[i][j] = cnt--;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}


	cnt = 1;
	for (i = 4; i >= 0; i--)
		for (j = 0; j < 5; j++)
			arr[i][j] = cnt++;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}


	cnt = 1;
	for (j = 0; j < 5; j++) {
		if (j % 2 == 0)
			for (i = 0; i < 5; i++)
				arr[i][j] = cnt++;
		else
			for (i = 4; i >= 0; i--)
				arr[i][j] = cnt++;
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}


	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) 
			arr[i][j] = (i + j) % 5 + 1;
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}


	int n = 1, k = 5, hei = 0, wid = 0, sw;
		while (k != 0)
		{
			sw = n;//���� ���� ����
			if (sw % 2 != 0)
			{
				for (i = 0; i < k; i++)
					arr[hei][wid++] = n++;
				wid -= 1;
				hei += 1;
				k--;
				for (i = 0; i < k; i++)
					arr[hei++][wid] = n++;
				hei -= 1;
				wid -= 1;
			}
			else
			{
				for (i = 0; i < k; i++)
					arr[hei][wid--] = n++;
				hei -= 1;
				wid += 1;
				k--;
				for (i = 0; i < k; i++)
					arr[hei--][wid] = n++;
				hei += 1;
				wid += 1;
			}
		}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}


	int num = 5;
	int *pnum = &num;	//���� num�� �ּҸ� �����������ͺ��� pnum�� �Ҵ�
	printf("&num : %d\n", &num);
	printf("pnum : %d\n", pnum);
	printf("num : %d\n", num);	//���� ����
	printf("*pnum : %d\n", *pnum);	//���� ����















	return 0;
}