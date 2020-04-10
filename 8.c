/*

8. 다음은 우리나라에 "작은 별"로 알려진 "Twinkle, twinkle, little star" 가사의 일부분입니다. 가사 부분을 다음과 같이 텍스트 파일(plaintext.txt)로 저장한 다음 Caesar 암호문, 단순 전치 암호문, XOR 암호문으로 변환한 텍스트 파일을 생성하시오.

Twinkle, twinkle, little star. How I wonder what you are.
Up above the world so high. Like a diamond in the sky.
Twinkle, twinkle, little star. How I wonder what you are.

*/

#include <stdio.h>

#include <string.h>

#include <Windows.h>

 

int main(void)

{
        int i, j;
        char str[3][57]; //plain text가 3줄

        FILE *fp = fopen("C:\\plaintext.txt", "r");

        printf("Caesar 암호문\n");

        printf("Plain Text\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       fscanf(fp, "%c", &str[i][j]); //읽어오고

                       printf("%c", str[i][j]); //출력

               }

        }

        printf("\n\n");

        printf("Plain Text Caesar 암호화\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       str[i][j] -= 3; //3씩 빼기

                       if (str[i][j] < 0)

                              str[i][j] += 3; //음수면 3씩 더하기

                       printf("%c", str[i][j]);

               }

        }

        printf("\n\n");

        fclose(fp);

        Sleep(3000); //잠시 딜레이

        system("cls");

        fp = fopen("C:\\plaintext.txt", "r");

        printf("단순 전치 암호문\n");

        printf("Plain Text\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       fscanf(fp, "%c", &str[i][j]);

                       printf("%c", str[i][j]);

               }

        }

        printf("\n\n");

        printf("Plain Text 단순 전치 암호문\n");

        for (i = 0; i < 57; i++)

        {

               for (j = 0; j < 3; j++)

               {

                       printf("%c", str[j][i]); //인덱스 i와 j 바꾸기

               }

        }

        printf("\n\n");

        fclose(fp);

        Sleep(3000);

        system("cls");

        fp = fopen("C:\\plaintext.txt", "r");

        printf("XOR 암호문\n");

        printf("Plain Text\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       fscanf(fp, "%c", &str[i][j]);

                       printf("%c", str[i][j]);

               }

        }

        printf("\n\n");

        printf("Plain Text XOR 암호문\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       str[i][j] %= 3; //마스크

                       printf("%c", str[i][j]);

               }

        }

        printf("\n");

        fclose(fp);

        return 0;

}
