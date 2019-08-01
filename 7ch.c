/***** <혼자 공부하는 C 언어> 206쪽 도전 실전 예제 

1부터 10까지의 합 계산(재귀호출 사용)

1부터 일정 수(n)까지의 합을 재귀호출을 사용해서 작성해보세요. 1부터 일정 수(n)까지의 합을
구하는 재귀호출 함수를 만들고 호출하여 구현합니다. 함수명은 다음과 같이 작성합니다.
int rec_func(int n); // 1부터 n까지의 합을 반환하는 함수

*****/

#include <stdio.h>

int sum = 0; 
int rec_func(int count);

int main(void)
{
	int count;

	printf("몇 까지의 합을 구할까요? ");
	scanf("%d", &count);

	rec_func(count);

	printf("%d까지의 합은 %d입니다.\n", count, sum);
	
	return 0;
}

int sum_func(int count)
{

	if (count == 0)
	{
		return sum;
	} else if (count < 0)
        {
                sum = sum + count;
                count = count + 1;
                sum_func(count);
        } else
	{
		sum = sum + count;
		count = count - 1;
		rec_func(count);
	}
	return sum;
}
