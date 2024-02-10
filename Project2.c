#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
	char name[20];
	char id[20];
	int semester;
	char class_name[10];
}STUDENT;

void print_student_list(STUDENT* ptr, int std_sz);
void find_student(STUDENT* ptr, int std_sz);
void print_presentation_list(STUDENT* ptr, int std_sz);

int main()
{
	STUDENT std[8] = { {"Minsu", "2021001", 2, "class1"},
		{"Ayoung", "2021015", 2, "class2"},
		{"Jihoon", "2018016", 8, "class5"},
		{"Minsu", "2020013", 4, "class5"},
		{"Sojung", "2021033", 2, "class3"},
		{"Eunmi", "2019010", 3, "class4"},
		{"Eunmi", "2018022", 5, "class1"},
		{"Heejoon", "2018001", 7, "class4"} };

	int std_sz = sizeof(std) / sizeof(STUDENT);

	STUDENT* ptr;

	ptr = std;

	//print_student_list(ptr, std_sz);
	//find_student(ptr, std_sz);
	print_presentation_list(ptr, std_sz);


	return 0;
}

void print_student_list(STUDENT* ptr, int std_sz)
{
	int i, j;
	STUDENT tmp;

	for (i = 0; i < std_sz - 1; i++)
		for (j = 0; j < std_sz - 1 - i; j++)
			if ((ptr + j)->semester > (ptr + j + 1)->semester) {
				tmp = *(ptr + j);
				*(ptr + j) = *(ptr + j + 1);
				*(ptr + j + 1) = tmp;
			}

	printf("번호   이름\t 학번\t\t학기\t수강과목\n");
	for (i = 0; i < std_sz; i++)
		printf("%d번 : %s\t%s\t\t %d\t %s\n", i + 1,
			(ptr + i)->name, (ptr + i)->id, (ptr + i)->semester, (ptr + i)->class_name);

}

void find_student(STUDENT* ptr, int std_sz)
{
	int i, j;
	STUDENT tmp;

	for (i = 0; i < std_sz - 1; i++)
		for (j = 0; j < std_sz - 1 - i; j++)
			if ((ptr + j)->semester > (ptr + j + 1)->semester) {
				tmp = *(ptr + j);
				*(ptr + j) = *(ptr + j + 1);
				*(ptr + j + 1) = tmp;
			}

	char str[20];
	int count;

	while (1) {
		printf("\n찾으려는 학생의 이름 또는 수강과목을 입력하세요 : ");
		gets(str);

		if (strcmp(str, "exit") == 0)
			exit(0);

		count = 0;
		for (i = 0; i < std_sz; i++)
			if (!strcmp(str, (ptr + i)->name) || !strcmp(str, (ptr + i)->class_name)) {
				printf("%s\t%s\t\t %d\t %s\n",
					(ptr + i)->name, (ptr + i)->id, (ptr + i)->semester, (ptr + i)->class_name);
				count++;
			}
		if (count == 0)
			printf("해당 학생 정보를 찾을 수 없습니다.\n");
	}
}

void print_presentation_list(STUDENT* ptr, int std_sz)
{
	print_student_list(ptr, std_sz);
	printf("\n");

	int num, no, i, count = 0, flag = 0;
	int plist[5];

	while (1) {
		printf("\n발표리스트에 추가하려면 1번, 삭제하려면 2번, 종료하려면 3번을 누르세요 : ");
		scanf("%d", &num);

		if (num == 1) {
			printf("발표리스트에 추가할 학생 번호를 입력하세요 : ");
			scanf("%d", &no);
			if (no >= 1 && no <= std_sz) {
				for (i = 0; i < count; i++)
					if (no == plist[i]) {
						printf("이미 발표리스트에 있는 학생입니다.\n");
						flag = 1;
						break;
					}

				if (flag) {
					flag = 0;
					continue;
				}

				plist[count] = no;
				count++;
			}
			else
			{
				printf("잘못된 번호입니다.\n");
				continue;
			}
		}
		else if (num == 2) {
			printf("발표리스트에서 삭제할 학생 번호를 입력하세요 : ");
			scanf("%d", &no);
			if (no>=1 && no <= count) {
				for (i = no - 1; i < count; i++) {
					plist[i] = plist[i + 1];
				}
				count--;
			}
			else {
				printf("삭제할 학생이 없습니다.\n");
				continue;
			}
		}
		else {
			exit(0);
		}

		printf("<< 발표리스트 >>\n");
		for (i = 0; i < count; i++)
			printf("  %d번 : %s\t%s\t\t %d\t %s\n", i + 1,
				(ptr + (plist[i] - 1))->name, (ptr + (plist[i] - 1))->id, (ptr + (plist[i] - 1))->semester, (ptr + (plist[i] - 1))->class_name);
		printf("총 발표명 수 : %d명\n", count);

		if (count == 5)
			exit(0);



	}


}
