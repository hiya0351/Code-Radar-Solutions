#include <stdio.h>
int main(){
int costprice,sellingprice,profit,loss;
scanf("%d %d",&costprice,&sellingprice);
profit=sellingprice-costprice;
printf("%d",profit);
loss=costprice-sellingprice;
printf("%d",loss);
return 0;
}
