#include<stdio.h>
void main(){
int a=3,b=4,c=5；
if(a+b>c&&b==c){
printf("真");
}
else{
printf("假");
}
}

#include<stdio.h>
void main(){
int a=3,b=4,c=5；
if(a||b+c&&b-c){
printf("真");
}
else{
printf("假");
}
}

#include<stdio.h>
void main(){
int a=3,b=4,c=5;
if(!(a>b)&&!c||1){
printf("真");
}
else{
printf("假");
}
}

#include<stdio.h>
void main(){
int a=3,b=4,c=5,x=1,y=2;
if(!(x=a)&&(y=b)&&0){
printf("真");
}
else{
printf("假");
}
}

#include<stdio.h>
void main(){
int a=3,b=4,c=5;
if(!(a+b)+c-1&&b+c/2){
printf("真");
}
else{
printf("假");
}
}

