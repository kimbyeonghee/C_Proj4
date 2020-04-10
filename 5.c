/*

5. 천만원을 연 이율 0.1을 적용하여 1년마다 복리로 10년간 예금한다고 할 때 원리합계를 계산하시오.
hint : 10년 후의 원리합계는 원금의 (1+0.1)10배가 된다.

*/

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

 

int main(void)

{

        double principle, rate; //원금 이자율

        double *income; //수익

        int i, year;

 

        printf("원금(원)");

        scanf("%lf", &principle);

 

        printf("이자율(%%): ");
 
        scanf("%lf", &rate);

 

        printf("기간(년): ");

        scanf("%d", &year);

 

        income = (double*)malloc(sizeof(double)*year);

 

        for (i = 0; i < year; i++)

        {

               income[i] = principle*(double)(pow(1 + 0.01*rate, i + 1)); //원금*(1+이자율)^예치기간

               printf("%d년 예치시:%.2f원(연%.1f%%)\n", i + 1, income[i], rate);

        }

        free(income); //메모리 해제

        return 0;

}
