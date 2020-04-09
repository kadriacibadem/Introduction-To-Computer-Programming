#include <stdio.h>

int main()
{
   int i,j,yildizSayisi=1,boslukSayisi=4;

   for(i=0;i<5;i++){
        for(j=0;j<boslukSayisi;j++){
            printf(" ");
        }
        for(j=0;j<yildizSayisi;j++){
            printf("*");
        }
        printf("\n");
        yildizSayisi+=2;
        boslukSayisi--;
    }
    yildizSayisi=7;
    boslukSayisi=1;
    for(i=5;i>0;i--){
        for(j=0;j<boslukSayisi;j++){
            printf(" ");
        }
        for(j=0;j<yildizSayisi;j++){
            printf("*");
        }
        printf("\n");
        yildizSayisi-=2;
        boslukSayisi++;
    }
    return 0;
}
