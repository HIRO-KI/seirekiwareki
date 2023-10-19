// 西暦を和暦に変換するアプリです。

#include <stdio.h>

int main(void){

    int seireki;
    int wareki = 0;

    printf("西暦を入力してください。\n");
    scanf("%d", &seireki);

    if(2019 <= seireki){    // 令和
        
        wareki = seireki - 2018;

        if(wareki == 1){
            printf("西暦%d年は、平成31年または、令和元年です。\n", seireki);

        } else {
            printf("西暦%d年は、令和%d年です。\n", seireki, wareki);
        }

    } else if(seireki < 2019 && 1989 <= seireki){   // 平成
        wareki = seireki - 1988;

        if(wareki == 1){
            printf("西暦%d年は、昭和64年または、平成元年です。\n", seireki);

        } else {
            printf("西暦%d年は、平成%d年です。\n", seireki, wareki);
        }

    } else if(seireki < 1987 && 1926 <= seireki){   // 昭和
        wareki = seireki - 1925;

        if(wareki == 1){
            printf("西暦%d年は、大正15年または、昭和元年です。\n", seireki);

        } else {
            printf("西暦%d年は、昭和%d年です。\n", seireki, wareki);
        }
    
    } else if(seireki < 1926 && 1912 <= seireki){   // 大正
        wareki = seireki - 1911;

        if(wareki == 1){
            printf("西暦%d年は、明治45年または、大正元年です。\n", seireki);

        } else {
            printf("西暦%d年は、大正%d年です。\n", seireki, wareki);
        }    
    } else if(seireki < 1912 && 1868 <= seireki){   // 明治
        wareki = seireki - 1867;

        if(wareki == 1){
            printf("西暦%d年は、明治元年です。\n", seireki);

        } else {
            printf("西暦%d年は、大正%d年です。\n", seireki, wareki);
        }
    
    } else {
        printf("対応外または、入力が間違っています。\n");
    }

    return 0;
}

