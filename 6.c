/*
6. 10000원 미만의 금액을 입력받아 10워, 50원, 100원, 500원 동전을 최소한 한번씩은 이용하여 입력된 금액을 나타내되 동전의 개수가 최소가 되는 조합을 구하는 프로그램을 작성하시오. 예를 들어 1500원을 입력하면 다음과 같이 출력합니다.
500원 : 2개
100원 : 4개
50원 : 1개
10원 : 5개


*/

#include <stdio.h>

 

void printCoin(int coin[4], int money);

 

int main(void)

{

        int coin[4] = { 500, 100, 50, 10 }; //500원 100원 50원 10원

        int nn, money, limit=10000;
        
        
        do
        {
		
           
           
               printf("금액입력(1만원이하): ");

               scanf("%d", &money);
       

      
        }while(money > limit);
        printCoin(coin, money - (500 + 100 + 50 + 10)); //동전들을 최소 한번씩은 사용했다

        return 0;

}



void printCoin(int coin[4], int money)

{

        int i, result[4] = { 0, 0, 0, 0 };

        for (i = 0; i < 4; i++)

        {

               while (1)

               {

                       if (money - coin[i] >= 0) //동전을 전부 쓸 수 있을 때까지

                       {

                              money -= coin[i];

                              result[i]++;

                       }

                       else

                              break;

               }

        }

        printf("500원:%d개\n100원:%d개\n50원:%d개\n10원:%d개\n", result[0] + 1, result[1] + 1, result[2] + 1, result[3] + 1);

}
