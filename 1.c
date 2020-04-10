/*

1. 입력한 10진 정수에 대해 진수(2, 8, 16)별로 변환하여 출력하는 프로그램을 작성하시오.

*/

#include <stdio.h>

 

long dec_to_bin(long n);

long dec_to_octal(long n);

char hexa(int n);

void dec_to_hexa(long n);

 

int main(void)

{

        long number;

        int sel;

        printf("10진 정수 입력: ");

        scanf("%ld", &number);

        printf("몇진법으로 변환하시겠습니까?\n1. 2진법, 2. 8진법, 3. 16진법: ");

        scanf("%d", &sel);

        printf("\n");

        switch (sel)

        {

        case 1:

               printf("%ld를 2진수로 바꾸면 %ld\n", number, dec_to_bin(number));

               break;

        case 2:

               printf("%ld를 8진수로 바꾸면 %ld\n", number, dec_to_octal(number));

               break;

        case 3:

               printf("%ld를 16진수로 바꾸면 ", number);

               dec_to_hexa(number);

               break;

        default:

               printf("숫자를 잘 못 입력하셨습니다\n");

               return -1;

        }

        return 0;

}

 

long dec_to_bin(long n)

{

        if (n <= 1)

               return n;

        return dec_to_bin(n / 2) * 10 + n % 2;

}

 

long dec_to_octal(long n)

{

        if (n <= 7)

               return n;

        return dec_to_octal(n / 8) * 10 + n % 8;

}

 

char hexa(int n)

{

        switch (n)

        {

        case 10:

               return 'A';

               break;

        case 11:

               return 'B';

               break;

        case 12:

               return 'C';

               break;

        case 13:

               return 'D';

               break;

        case 14:

               return 'E';

               break;

        case 15:

               return 'F';

               break;

        default:

               return n + 48;

        }

}

 

void dec_to_hexa(long n)

{

        char result[20];

        char *endptr; //strtol 용

        int idx = 0;

        int quotinent, remainder, i;

        long number;

 

        do

        {

               quotinent = n / 16; //몫

               remainder = n % 16; //나머지

               result[idx] = hexa(remainder); //나머지를 하나씩

               idx++;

               n = quotinent;

        } while (quotinent >= 16);

 

        if (quotinent == 0)

               idx--;

        else

               result[idx] = hexa(quotinent);

 

        for (i = idx; i >= 0; i--)

               printf("%c", result[i]);

        printf("\n");

}
