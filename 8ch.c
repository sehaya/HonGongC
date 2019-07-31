#include <stdio.h>

int main(void)
{
	char sentence[80]="";
	int i, count=0;

	printf("영어 문장을 입력하세요. :");
	gets(sentence);

	for (i=0; i<80; i++)
	{
		if (sentence[i] == '\0')
		{
			break;
		}
		else if (('A' <= sentence[i])&&(sentence[i] < 'a'))
		{
			sentence[i] = sentence[i]+32;
			count = count + 1;
		}
	}

	puts("대문자를 소문자로 변환한 문장은 다음과 같습니다.");
	puts(sentence);
	printf("변환 문자는 총 %d개입니다.\n", count);

	return 0;
}
