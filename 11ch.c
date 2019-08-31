/*----- <혼자 공부하는 C 언어> 11장 315쪽도전 실전 예제 

길이가 가장 긴 단어 찾기

키보드로 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력하세요. 
한 줄에 하나의 단어만 입력하며 Ctrl + Z 를 누를 때까지 
입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력합니다. 
배열은 사용하지 않고 작성하세요.
------*/

#include <stdio.h>

int count_char(cnt);

int main(void)
{
	int cnt = 0; 
	int max = 0;
	int ch;

	printf("%s", "입력한 문자 중 가장 긴 문자의 개수를 출력합니다.\n문자를 입력한 다음 엔터를 누르고 종료하려면 ctrl+z를 누르세요.\n");

	while (1)
	{
		cnt = 0; 
		ch = getchar();
		
		if (ch == -1)
		{
			break;
		}
		while (ch != '\n') // 문자 카운트
		{
			cnt++;
			ch = getchar();
		}

		if (cnt > max) // 큰 값 저장
		{
			max = cnt;
		}
	}

	printf("최대 입력 문자 개수 : % d\n", max);
	return 0;
}
