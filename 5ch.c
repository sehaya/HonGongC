/***** <혼자 공부하는 C 언어> 152쪽 도전 실전 예제 

계산기 프로그램
키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성하세요. 정수 사칙연산만 입력합니다.
tip> 연산기호(+, -, *, /)도 하나의 문자입니다.
*****/

#include <stdio.h>

int main(void)
{
	double input_A, input_B, result;
	char operator;

	printf("%s", "숫자, 연산기호(+, -, *, /), 숫자를 순서대로 입력하세요.\n");
	scanf("%lf %c %lf", &input_A, &operator, &input_B);
	
	if (operator=='*')
	{
		result = input_A * input_B;
	} else if (operator=='/')
	{
		result = input_A / input_B;
	} else if (operator=='+')
	{
		result = input_A + input_B;
	} else if (operator=='-')
	{
		result = input_A - input_B;
	}

	printf("%lf %c %lf = %lf\n", input_A, operator, input_B, result);

	return 0;
}
