#include<stdio.h>
#include<windows.h>
void main(){
int n,x;
int a[20][10]={
	{1,1,1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1,1,1}
};
for(n=0;n<20;n++){
	for(x=0;n<10;n++){
	a[n][x]=999;
	printf("%d",a[n][x]);
	}
	printf("\n");
}
Sleep(0000);
for(n=0;n<20;n++){
	for(x=0;n<10;n++){
	a[n][x]=0;
	printf("%d",a[n][x]);
	}
	printf("\n");
}
Sleep(5000);
for(n=0;n<20;n++){
	for(x=0;n<10;n++){
	a[n][x]=999;
	printf("%d",a[n][x]);
	}
	printf("\n");
}
}
