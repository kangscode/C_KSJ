//주석이란?
//컴파일에서(변역에서) 예외처리하는 문법을 말함
//주석은 줄주석(행주석)과 블럭주석으로 나뉩니다.
//행주석은 //이후의 모든 문서가 주석처리 됩니다.
//단, 행주석은 그 행에서만 적용되고 줄이 바뀌면 해제됩니다.
//블록 주석은 /*로 시작 */으로 끝을 지정해주면 됩니다.
//블록 주석은 한번에 여러행을 주석처리할 때 사용합니다.

#include <stdio.h>

int main(void) 
{
	printf("Hello World ! \n"); //주석의 용도는 이렇게 특정 행의 설명을 작성합니다.
//또는 불필요한 코드를 예외처리 합니다.	printf("Hello World ! \n");
	printf("Hello World ! \n");
	return 0;
}

/*
//#include <stdio.h>

int main(void)
{
	printf("Hello World ! \n");
	printf("Hello World ! \n");
	printf("Hello World ! \n");
	return 0;
}
*/

#include <stdio.h>

int main() {
	
	printf("이름: 강성준\n");
	printf("나이: 22\n");
	printf("주소: 경기도\n");
	printf("\n");

	printf("이름: 강성준\n나이: 22\n주소: 경기도");

	return 0;
}
