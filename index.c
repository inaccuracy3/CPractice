#include <stdio.h>

int main(void){
int num1,num2,order;
int temp;
printf("Write two differenct number and order\n");
scanf("%d %d %d",&num1,&num2,&order);
void swap(int *num1,int *num2){
int temp = *num1;
*num1 = *num2;
*num2 = temp;
}
void multiply(int a,int b,int num1,int num2,int *result){
*result = 1;
for(int i=0;i<a;i++){
if(b>0){
*result *= num2;
}else{
*result *= num1;
}
b--;
}
}
if(num1>num2){
swap(&num1,&num2);
}
for(int i=0;i<=order;i++){
for(int j=0;j<=i;j++){
if(i==0){
printf("1 ");
}else{
multiply(i,j,num1,num2,&temp);
printf("%d ",temp);
}
}
}
return 0;
}
