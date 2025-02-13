#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    scanf("%d",&i);
    for (j=2;j<i;j++){
       if(i%j==0 || i<=1){
        printf(" Not Prime"); 
    }
    printf("Prime");
   
}

return 0;
}