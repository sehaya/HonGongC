/***** <혼자 공부하는 C 언어> 120쪽 도전 실전 예제

체중관리 프로그램

체중(kg)과 키(cm)를 입력하여 BMI(신체질량지수)를 구한 후에 BMI의 값이 20.0 이상 25.0
미만이면 “표준입니다”를 출력하고 그렇지 않으면 “체중관리가 필요합니다”를 출력합니다.
BMI는 표준체중, 저체중, 과체중을 판별하는 수치로 몸무게를 키의 제곱으로 나누어 구합니다.
이때 키는 미터(m)단위로 계산합니다.


*****/

#include <stdio.h>

int main(void)
{
        float height, weight, bmi;

	char good[40] = "표준입니다.";
        char health[40] = "체중관리가 필요합니다.";

        printf("키(cm)를 입력하세요 :");
        scanf("%f", &height);
	height = height*0.01;

        printf("몸무게(kg)를 입력하세요 :");
        scanf("%f",&weight);

        bmi =  weight / (height*height);


	printf("키는 %.1fcm, 몸무게는 %.1fkg, bmi 지수는 %.1f입니다.\n", height*100, weight, bmi);
        printf("%s",((bmi>20)&&(bmi<=25)) ? good : health);

        return 0;
}
