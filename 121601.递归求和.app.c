#include<stdio.h>
int n(int x){
if(x<=0){
    return 0;
}
return x+n(x-1);
}
void main(){ int x;
scanf("%d",&x);
printf("%d",n(x));
}
