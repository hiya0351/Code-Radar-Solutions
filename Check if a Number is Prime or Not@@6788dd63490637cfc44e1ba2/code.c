#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    scanf("%d",&i);
    for (j=2;j<i;j++){
       if(i%j==0){
        printf("Prime");
       }
       else{
        printf("Not Prime")
       }
    }
    return 0;
}