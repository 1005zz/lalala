#include<stdio.h>
void main(){
int a,b;
int date2d[2][3]={
	{1,2,3},
	{4,5,6}
};
for(a=0;a<2;a++){
	for(b=0;b<3;b++){
	printf("%d ",date2d[a][b]);
	}
	printf("\n");
}


}
