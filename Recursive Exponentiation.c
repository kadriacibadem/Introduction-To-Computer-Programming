#include <stdio.h>
int exponentiation(int x,int y){
    if(y==1){
        return x;
    }
    else{
        return x*exponentiation(x,y-1);
    }
}
int main() {
    int num1,num2;

    scanf("%d %d",&num1,&num2);
    printf("%d",exponentiation(num1,num2));

    return 0;
}
