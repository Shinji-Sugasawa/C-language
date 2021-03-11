#include<stdio.h>

int main(void){

    for(int i=1;i<=20;i++){

        long x = (i*(i+1)*(i+2)*(i+3)*(i+4)*(i+5)*(i+6));
        printf("%d:",i);
        if(!(x % 720 == 0)){
            printf("This is NOT number:%d\n",x);
            //break;
        }
        else{
            printf("%d\n",x);
        }
    }
    return 0;
}