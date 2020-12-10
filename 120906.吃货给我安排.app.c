#include<stdio.h>
#include<string.h>
void main(){
	char n[30];
	char n1[]="春节";
	char n2[]="端午节";
	char n3[]="中秋节";
	char n4[]="元宵节";
printf("吃货的日程总是被安排的明明白白，请问现在是什么节？\n\n");
scanf("%s",&n);
if(strcmp(n1,n)==0){
	printf("给我安排饺子\n");
}
else if(strcmp(n2,n)==0){
	printf("给我安排粽子\n");
}
else if(strcmp(n3,n)==0){
	printf("给我安排月饼\n");
}
else if(strcmp(n4,n)==0){
	printf("给我安排元宵\n");
}
else{
printf("输入错误");
}
}
