// �����a��ɕϊ�����A�v���ł��B

#include <stdio.h>

int main(void){

    int seireki;
    int wareki = 0;

    printf("�������͂��Ă��������B\n");
    scanf("%d", &seireki);

    if(2019 <= seireki){    // �ߘa
        
        wareki = seireki - 2018;

        if(wareki == 1){
            printf("����%d�N�́A����31�N�܂��́A�ߘa���N�ł��B\n", seireki);

        } else {
            printf("����%d�N�́A�ߘa%d�N�ł��B\n", seireki, wareki);
        }

    } else if(seireki < 2019 && 1989 <= seireki){   // ����
        wareki = seireki - 1988;

        if(wareki == 1){
            printf("����%d�N�́A���a64�N�܂��́A�������N�ł��B\n", seireki);

        } else {
            printf("����%d�N�́A����%d�N�ł��B\n", seireki, wareki);
        }

    } else if(seireki < 1987 && 1926 <= seireki){   // ���a
        wareki = seireki - 1925;

        if(wareki == 1){
            printf("����%d�N�́A�吳15�N�܂��́A���a���N�ł��B\n", seireki);

        } else {
            printf("����%d�N�́A���a%d�N�ł��B\n", seireki, wareki);
        }
    
    } else if(seireki < 1926 && 1912 <= seireki){   // �吳
        wareki = seireki - 1911;

        if(wareki == 1){
            printf("����%d�N�́A����45�N�܂��́A�吳���N�ł��B\n", seireki);

        } else {
            printf("����%d�N�́A�吳%d�N�ł��B\n", seireki, wareki);
        }    
    } else if(seireki < 1912 && 1868 <= seireki){   // ����
        wareki = seireki - 1867;

        if(wareki == 1){
            printf("����%d�N�́A�������N�ł��B\n", seireki);

        } else {
            printf("����%d�N�́A�吳%d�N�ł��B\n", seireki, wareki);
        }
    
    } else {
        printf("�Ή��O�܂��́A���͂��Ԉ���Ă��܂��B\n");
    }

    return 0;
}

