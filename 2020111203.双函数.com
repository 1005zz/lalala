#include<stdio.h>
int sum(int a,int b){
return(a+b);
}
void main(){
printf("%d\n",sum(2020,1112));
}
