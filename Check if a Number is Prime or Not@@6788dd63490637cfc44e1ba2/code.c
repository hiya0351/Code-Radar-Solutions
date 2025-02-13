#include<stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    if(i>2){
        printf("Not Prime\n");
    }
    for (j=2;j<i;j++){
       if(i%j==0 ){
        printf("Not Prime\n");
        return 0; 
    }
    
}
printf("Prime\n");
     
return 0;
}