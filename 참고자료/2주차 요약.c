#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//함수 선언문 - 위에서 정의하면 보기힘들어서 나눔
int function(int x, int y);
void pointerFunction(int* ptr1, int* ptr2);

/*목차
배열
2차원배열


for() + 배열사용
"%s" 사용법


함수 - 정의부, 선언부 -> 함수 호출방법
파라미터(값, 주소)


포인터
배열-포인터
*/


int main() {
		//배열 
	//자료형 변수이름[배열크기];
	int num0, num1, num2, num3;
	scanf("%d%d%d%d", &num0, &num1, &num2, &num3);

	int num[4] = {1, 2, 3, 4};
	scanf("%d%d%d%d", &num[0], &num[1], &num[2], &num[3]);
	for (int i = 0; i < 4; i++)scanf("%d", &num[i]);
	int num2d[2][2] = { 1,2,
						3,4 };
	/*
	* num2d[0][0] = 1;
	* num2d[0][1] = 2;
	* num2d[1][0] = 3;
	* num2d[1][1] = 4;
	*/

	//문자배열 %s -> 엔터입력까지-> 입력이 더크면 배열최대크기-1까지 입력받고 마지막에 개행문자(\0)넣어줌
	char string[100];
	scanf("%c%c%c%c%c", &string[0], & string[1], & string[2], & string[3], & string[4]);
	scanf("%s", string);

	//개행문자 ('\0'or 0 or null)일 때까지 출력
	printf("%s\n", string);


		//함수 
	//함수호출 
	int result = function(10, 20);
	printf("%d", function(3, 4));


		//포인터 - 주소연산자(&)
	int intA, intB;
	//주소값을 가지는 변수 -> *로 주소값 에 해당하는 값을 반환
	int* ptrA, * ptrB;
	ptrA = &intA;
	ptrB = &intB;
	scanf("%d%d", &intA, &intB);
	scanf("%d%d", ptrA, ptrB);
	printf("%d%d", intA, intB);
	printf("%d%d", *ptrA, *ptrB);

	//포인터 - 배열
	int nums[10];
	int* ptrNums;
	ptrNums = &nums[0];
	ptrNums = nums;
	scanf("%d%d%d", &nums[0], &nums[1], &nums[2]);
	scanf("%d%d%d", ptrNums, ptrNums + 1, ptrNums + 2);
	printf("%d%d%d", *(ptrNums), *(ptrNums + 1), *(ptrNums + 2));
	printf("%d%d%d", ptrNums[0], ptrNums[1], ptrNums[2]);

	//포인터 - 함수인자(파라미터)
	 num1 = 3, num2 = 5;
	//값에 의한 호출
	result = function(num1, num2);
	printf("%d %d %d\n", num1, num2, result);
	//주소에 의한 호출
	pointerFunction(&num1, &num2);
	printf("%d %d", num1, num2);
}

//함수 정의부
int function(int x, int y) {
	//함수 내부에서만 변환됨 -> main함수의 변수에 영향X
	int temp;
	temp = x;
	x = y;
	y = temp;

	printf("it's function");
	return x + y;
}

void pointerFunction(int* ptr1, int* ptr2) {
	*ptr1 = *ptr1 + *ptr2;
	return;
}
