#include<stdio.h>
#include<windows.h>
void main(){
int value=0;
int b,c;
int a[9][10]={
	{0,0,0,0,0,0,0,0,0,0}
};
for(b=0;b<9;b++){
	for(c=0;c<10;c++){
		value++;
		a[b][c]=value;
		printf("%d ",a[b][c]);
	}
	printf("\n");
}


}
