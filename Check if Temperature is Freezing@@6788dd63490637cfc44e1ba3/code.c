#include<stdio.h>
int main(){
    float a;
    scanf("%f°C",&a);
    if(a<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}