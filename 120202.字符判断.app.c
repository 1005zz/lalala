#include<stdio.h>
void main(){
	char x;
	printf("欢迎使用本程序，请输入a,s,d,w中的一个字母\n");
	scanf("%c",&x);
	switch(x){
		case 'a':printf("你在点击“左”键");break;
		case 's':printf("你在点击“下”键");break;
		case 'd':printf("你在点击“右”键");break;
		case 'w':printf("你在点击“上”键");break;
		default:printf("输入错误，请重新输入");
}

}
