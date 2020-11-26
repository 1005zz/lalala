#include<stdio.h>
void main(){
int i;
int n;
int x;
int a;
scanf("%d",&i);
scanf("%d",&n);
scanf("%d",&x);
if(i>n){
a=i;
i=n;
n=a;
}
if(i>x){
a=i;
i=x;
x=a;
}
if(n>x){
a=n;
n=x;
x=a;
}
printf("%d,%d,%d\n",i,n,x);

}

