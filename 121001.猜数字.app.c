#include<stdio.h>
#include<string.h>
void main(){
	while(1){
		char x[10];
		char n[]="天天向上";
		printf("“好好学习”的下一句是什么？");
		scanf("%s",&x);
		if(strcmp(n,x)==0){
			while(1){
			int right=13;
			int user;
			printf("请输入1-20的数字");
			scanf("%d",&user);
			if(user==right){
			printf("恭喜你，答对了！");
			}
			else if(user>right){
			printf("你猜的太大了！");
			}
			else if(user<right){
			printf("你猜的太小了！");
			}
			}
			}
		else{
			printf("亲，请重新输入");
		}
	}
}
