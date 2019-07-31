#include <stdio.h>

int sum=0; 
int sum_func(int count);

int main(void)
{
	int count, sum_out;

	printf("몇 까지의 합을 구할까요? ");
	scanf("%d", &count);

	sum_func(count);

	printf("%d까지의 합은 %d입니다.\n", count, sum);	
}

int sum_func(int count)
{
/*	printf("\n");
	printf("넘어온 값 : %d",count);
	printf("\n");
*/

	if (count==0)
	{
//		printf("sum is %d\n", sum);
		return sum;
	} else
	{
		sum = sum+count;
		count = count-1;
		sum_func(count);
	}
	return 0;
}
