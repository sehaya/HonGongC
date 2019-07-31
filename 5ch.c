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
