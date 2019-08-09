/***** <혼자 공부하는 C 언어 > 292쪽 10장 배열과 포인터 도전 실전 예제
로또 번호 생성 프로그램

1~45 중에 6개의 서로 다른 수를 배열에 입력하고 출력합니다.
입력한 수가 이미 저장된 수와 같으면 에러 메시지를 출력하고 다시 입력합니다.
다음 함수의 선언과 정의를 참고하고 빈 부분을 채워 완성합니다.
*****/

#include <stdio.h>

void input_nums(int *lotto_nums);       // 배열에 로또 번호를 입력하는 함수
void print_nums(int *lotto_nums);       // 배열에 저장된 값을 출력하는 함수

int main(void)
{
        int lotto_nums[6];              // 로또 번호를 저장할 배열

        input_nums(lotto_nums);         // 입력 함수 호출
        print_nums(lotto_nums);         // 출력 함수 호출
        return 0;
}

void input_nums(int *lotto_nums)
{
        for (int i=0; i < 6; i++)
        {
                printf("%d번째 1~45 사이의 숫자를 입력하세요: ", i+1);
                scanf("%d", lotto_nums+i);

                while((lotto_nums[i]<1)||(lotto_nums[i]>45))
                {
                        printf("잘못 입력하셨습니다. 다시 1~45 사이의 숫자를 입력하세요: ");
                        scanf("%d", lotto_nums+i);
                }

                for (int j=0; j < i; j++)
                {
                        while (lotto_nums[i] == lotto_nums[j])
                        {
                                printf("%d는 입력한 숫자입니다. 다시 1~45 사이의 숫자를 입력하세요: ", lotto_nums[i]);
                                scanf("%d", lotto_nums+i);
                                j=0;
                                while((lotto_nums[i]<1)||(lotto_nums[i]>45))
                                {
                                        printf("잘못 입력하셨습니다. 다시 1~45 사이의 숫자를 입력하세요: ");
                                        scanf("%d", lotto_nums+i);
                                }

                        }
                }
        }
}

void print_nums(int *lotto_nums)
{
        printf("로또 번호: ");
        for (int i=0; i < 6; i++)
        {
                printf("%5d", *(lotto_nums+i));
        }
        printf("입니다.\n");
}
