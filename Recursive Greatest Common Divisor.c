#include <stdio.h>
int divisor(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return divisor(y,x%y);
    }
}
int main() {
    int num1,num2;

    scanf("%d %d",&num1,&num2);
    printf("%d",divisor(num1,num2));
    
    return 0;
}
