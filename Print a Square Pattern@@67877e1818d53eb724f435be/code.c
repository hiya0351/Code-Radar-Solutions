#include<stdio.h>
int main(){
    int a,i,j;
    printf("Enter the value of a");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}