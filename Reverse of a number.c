#include <stdio.h>

int main() {

    int n,r=0;

    printf("Sayiyi giriniz:");
    scanf("%d",&n);

    while(n>0){
        r=r*10;
        r=r+n%10;
        n/=10;
    }

    printf("Girdiginiz sayinin tersi: %d",r);
    return 0;
}
