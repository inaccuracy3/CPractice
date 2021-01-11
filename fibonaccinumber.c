#include <stdio.h>
int main(void){
int prevNum = 0;
int Num = 1;
int order;
int temp;
printf("Enter Number");
scanf("%d",&order);
for(int i=0;i<=order;i++){
if(i<1){
printf("%d ",Num);
prevNum = Num;
}
else{
printf("%d ",Num);
temp = Num;
Num = Num+prevNum;
prevNum = temp;
}
}
return (0);
}





