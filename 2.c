/*

2. 입력한 2진수를 각각 10진수와 8진수로 변환하는 함수와 프로그램을 작성하시오.

*/

#include <stdio.h>

#include <string.h>

#include <math.h>

 

long bin_to_dec(char num[]);

long dec_to_octal(long n);

 

int main(void)

{

        char num[20]; //이진수를 넣어줄 배열

        printf("이진수 입력: ");

        scanf("%s", num);

        printf("10진수로 전환하면: %ld\n", bin_to_dec(num));

        printf("8진수로 전환하면: %ld\n", dec_to_octal(bin_to_dec(num)));

        return 0;

}

 

long bin_to_dec(char num[])

{

        long result = 0, idx = 0;
        
        int i;

        for (i = (strlen(num) - 1); i >= 0; i--)

               if (num[idx++] == '1')

                       result += pow(2, i); //1일 경우 2^i를 곱해준다

        return result;

}

 

long dec_to_octal(long n) //10진수로 우선 전환하고 거기서 8진수로 바꿔준다

{

        if (n <= 7)

               return n;

        return dec_to_octal(n / 8) * 10 + n % 8;

}
