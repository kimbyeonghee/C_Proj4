/*
7. 아래의 그림과 같은 파스칼의 삼각형을 출력하는 프로그램을 작성하시오.
hint : 파스칼의 삼각형을 출력하려면 이항계수를 이용합니다.

*/

#include <stdio.h>

 

int Factorial(int n);

int Combination(int n, int r);

void Pascal(int n);

 

int main(void)

{

        int size;

 

        printf("삼각형 크기 입력: ");

        scanf("%d", &size);

 

        Pascal(size);

        return 0;

}

 

int Factorial(int n)

{

        if (n > 1)

               return n*Factorial(n - 1);

        else

               return 1;

}

 

int Combination(int n, int r)

{

        return Factorial(n) / (Factorial(n - r)*Factorial(r));

}

 

void Pascal(int n)



{
        int i, j; 

        for (i = 0; i <= n; i++)

        {

              

               for (j = 0; j <= i; j++) 

                       printf("%4d", Combination(i, j));

               printf("\n");

        }

       

}
