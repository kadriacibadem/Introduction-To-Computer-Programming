#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int array[20];
    int value;
    int k=0;
    for(int i=0;i<20;i++){
        int flag=0;
        printf("%d.Sayiyi giriniz:",i+1);
        scanf("%d",&value);
        for(int j=0;j<k;j++){
            if(value==array[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            array[k++]=value;
        }
    }
    printf("\n");
    for(int i=0;i<20 && array[i]!=0;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
