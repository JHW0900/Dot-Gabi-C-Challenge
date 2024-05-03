//scanf 보안위험 끄는 것
#define _CRT_SECURE_NO_WARNINGS
//c언어 헤더파일 추가
#include<stdio.h>

// 상수 선언
#define G_INT_MAX 10000
int main() {
	/*목차
	* #좌측 -박스누르면 최소화됩니다
	* 자료형
	* 입출력문
	* 조건문
	* 반복문
	* 문자(char)	
	*/
		//자료형 선언(자주사용하는 것)
	//정수형
	int integer;
	long long int longlonginteger;
	unsigned int unsignedinteger;
	//문자형 - camelCase - 지역변수명 - 대부분의 이름
	char myCharacter;
	//실수형 - snake_case - 대소문자중 하나만 사용할 경우
	double my_double;

		//입출력문
	//입력문 예시 - 붙여서 사용할 것
	scanf("%d%lld%c%lf", &integer, &longlonginteger, &myCharacter, &my_double);
	//출력문 예시 -포맷형태 유의할것 - \n은 줄바꿈문자
	printf("int : %d\nLLint : %lld\nchar : %c\n double : %lf\n", integer, longlonginteger, myCharacter, my_double);
	
		//조건문 
	//if(false(0말고 나머지)) { 내용실행 안함 }
	//if(true(0말고 나머지)){내용실행}
	if (integer > 10) { printf("%d는 10보다큽니다", integer); }
	else if (integer > 0)printf("%d는 0보다큽니다", integer);
	else printf("%d 는 0보다 작습니다", integer);

	switch (integer) {
	case 10:
		printf("10임");
		break;
	case 0:
		printf("0임");
		break;
	default:
		printf("0도 10도 아님");
	}

		//반복문
	// while문 
	int myI = 0;
	while (myI < integer) {
		printf("1");
	}
	prinf("\n");
	//do-while문 - 무조건 한번실행후 조건확인
	do{
		scanf("%d", &myI);
	} while (myI == 10);

	//for문 - for(초기식; 조건식; 증감식)
	for (int i = 0; i < integer; i++) {
		printf("***\n");
	}
	//다중for문
	for (int i = 0; i < integer; i++) {
		for (int j = 0; j < integer; j++)
			printf("*");
		printf("\n");
	}
	
	//문자 -> 컴퓨터내부 : 숫자로 인식
	printf("%c => %d\n", 'A', 'A');
	printf("%c - A = %d", myCharacter, myCharacter - 'A');

}
