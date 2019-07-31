/***** <혼자 공부하는 C 언어> 232쪽 도전 실전 예제 - 8ch을 while로 풀기 

대소문자 변환 프로그램

키보드로부터 문장을 입력받은 후에 대문자를 찾아 소문자로 바꾸는 프로그램을 작성하세요. 
바뀐 문장과 바뀐 문자의 수도 함께 출력합니다.
*****/

#include <stdio.h>

int main(void)
{
	char sentence[80] = "";
	int i = 0, count = 0;

	printf("영어 문장을 입력하세요. :");
	gets(sentence);

	while (sentence[i] != '\0')
	{
		if (('A' <= sentence[i])&&(sentence[i] < 'a'))
		{
			sentence[i] = sentence[i] + 32;
			count = count + 1;
		}
		i++;
	}

	puts("대문자를 소문자로 변환한 문장은 다음과 같습니다.");
	puts(sentence);
	printf("변환 문자는 총 %d개입니다.\n", count);

	return 0;
}
