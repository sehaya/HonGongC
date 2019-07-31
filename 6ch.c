/***** <혼자 공부하는 C 언어> 177쪽 도전 실전 예제 

소수(prime number) 출력 프로그램

2 이상의 정수를 입력하여 2부터 입력한 수까지의 모든 소수를 출력합니다. 단, 한 줄에 5개씩
5칸 간격으로 출력합니다. 하나의 정수가 소수인지를 판단해서 출력하는 과정은 다음과 같습니다.
1. 일단 소수라고 가정한다.
2. 2부터 그 정수보다 하나 작은 수까지 하나라도 나누어 떨어지면 가정을 취소한다.
3. 1의 가정이 2에서 바뀌지 않았으면 그 정수를 출력한다.
위의 1~3까지의 과정은 하나의 정수에 대해서 소수를 판별하는 과정이고 어떤 수까지의 모든 수를 
판별하기 위해서는 1~3까지의 과정을 다시 반복합니다.

*****/

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
	
	return 0;
}
