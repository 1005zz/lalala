#include<stdio.h>
void main(){
	int x;
	int n;
scanf("%d",&x);
if(x<=0){
	return 0;
}
else{
	n=(x+1)*x/2;
    printf("%d\n",n);
}
}
