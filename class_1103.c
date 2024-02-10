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
	//printf("합 : %d\n", sum);


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

	printf("arr1의 크기 : %d\n", sizeof(arr1));
	printf("arr2의 크기 : %d\n", sizeof(arr2));
	printf("arr3의 크기 : %d\n", sizeof(arr3));

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


	//char str[] = "Good morning!";	//배열의 길이가 14

	//printf("배열의 크기 : %d\n", sizeof(str));
	//printf("널 문자 문자형 출력 : %c\n", str[13]);
	//printf("널 문자 정수형 출력 : %d\n", str[13]);
	//
	//str[12] = '?';
	//printf("%s\n", str);


	char nu = '\0'; // 널 문자 저장
	char sp = ' ';	// 공백 문자 저장

	printf("%d %d\n", nu, sp);	// 아스키 코드 0 32
	printf("%c %c\n", nu, sp);


	//char str[50];
	//int idx = 0;

	//printf("문자열 입력 : ");
	//scanf("%s", str);
	//printf("입력 받은 문자열 : %s\n", str);

	//printf("문자 단위 출력 : ");

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
	

	int num[5] = { 4, 8, 2, 7, 6 };	//정렬되지 않은 배열 선언과 데이터
	int j, temp;
	for(i = 0; i < 4; i++)	//상위 for문은 기준 인덱스 지정을 위함
		for (j = i+1; j < 5; j++) //종속 for문은 비교대상(시작은 i+1=>기준의 다음 인덱스)
			if (num[i] > num[j]) {	//기준이 비교대상보다 크면 즉, 비교대상이 작으면 자리바꿈
				temp = num[i];		
				num[i] = num[j];
				num[j] = temp;	//자리바꾸기 위한 코드
			}
	for (i = 0; i < 5; i++)	//정렬된 결과를 반복문은 이용해서 한번에 출력
		printf("%d\n", arr[i]);
		

	int score[5] = { 82, 85, 76, 79, 96 };
	int rank[5] = { 1, 1, 1, 1, 1 };
	for(i = 0; i < 5; i++)	//기준 인덱스 지정 반복 구문
		for (j = 0; j < 5; j++) {	//비교대상 인덱스 지정(자기자신을 포함함)
			if (i == j)
				continue;
			if (score[i] <= score[j])	//기준이 비교대상보다 점수가 낮으면 순위 1씩 더함
				rank[i]++;
		}
	printf("점수 등수\n");
	for (i = 0; i < 5; i++)
		printf("%-4d %-4d\n", score[i], rank[i]);











	return 0;
}