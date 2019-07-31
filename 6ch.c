#include <stdio.h>

int main(void)
{
	int i, j, input, result, count;

	printf("%s", "2 이상의 정수를 입력하세요. :");
	scanf("%d", &input);

	for (i=2; i <= input; i++)
	{
		for (j=2; j <= i; j++)
		{
			result = i % j;
			if (result == 0)
			{
				if (i == j)
				{
					count = count + 1;
					printf("%5d번 소수: %d", count, j);
//					printf("%5d", j);
					if (0 == (count%10))
					{
						printf("\n");
					}
					break;
				}
				else break;
			} 
		}
	}

	printf("\n");
}
/* 
i = 2; i <= input; i++

j = 2; i < j; i++

result = i%j;

if result == 0
	if i == j 
	printf j
	break;
*/
