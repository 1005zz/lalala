#include<stdio.h>
void main(){
	int a,b,c,d;
	printf("请输入秒数\n");
	scanf("%d",&a);
	b=a/3600;
	c=(a%3600)/60;
	d=a-b*3600-c*60;
	if(a>=0&&a<=24*3600-1){
	printf("%02d:",b);
	printf("%02d:",c);
	printf("%02d",d);
	}
	else{
	printf("输入错误，请重新输入");
	}
}
