#include<stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    if(i<=1){
        printf("Not Prime\n");
    }
    for (j=2;j<i;j++){
       if(i%j==0 ){
        printf("Not Prime"); 
    }
    else{
         printf("Prime");
   }
 
}
     
return 0;
}