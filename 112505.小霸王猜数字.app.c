#include<stdio.h>
#include<windows.h>
void main(){
while(1){
int key=6;
int user;
printf("友情提示：请输入1-10\n");
scanf("%d",&user);
if(user==key){
printf("恭喜你，答对了！");
}
else if(user>key){
printf("笨蛋，猜太大了！");
}
else{
printf("憨憨，猜太小了！");
}


}
}
