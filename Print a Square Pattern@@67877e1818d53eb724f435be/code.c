#include<stdio.h>
int main(){
    int a,i,j;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            printf("*\t");
        }
        printf("\n");

    }
    return 0;
}