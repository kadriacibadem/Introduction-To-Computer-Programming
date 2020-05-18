#include <stdio.h>

int main() {

    int num,num1=0,num2=1,tmp;
    
    printf("Sayiyi giriniz :");
    scanf("%d",&num);
    
    printf("%d %d ",num1,num2);
    
    for(int i=0;i<=num;i++){
        tmp=num2;
        num2=num2+num1;
        num1=tmp;
        printf("%d ",num2);
    }
    return 0;
}
