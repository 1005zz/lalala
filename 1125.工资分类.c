#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if(n>=0&&n<=100){
printf("贫困打工人");
}
else if(n>=101&&n<=1000){
	printf("一般打工人");
}
else if(n>=1001&&n<=20000){
printf("土豪打工人");
}
else{
printf("输入有误，请重新输入");
}
return 0;
}
