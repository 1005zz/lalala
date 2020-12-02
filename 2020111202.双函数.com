#include<stdio.h>
void main(){
int firstNum=2020;
int lastNum=323;
printf("%d\n",firstNum+lastNum);
printf("%d\n",firstNum-lastNum);
printf("%d\n",firstNum*lastNum);
printf("%d\n",firstNum/lastNum);
}
