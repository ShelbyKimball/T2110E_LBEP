#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so thu 1: ");
	scanf("%d",&a);
	
	printf("Nhap so thu 2: ");
	scanf("%d",&b);
	
	int i=1,x=0;
	while(i<=a || i<=b){
		if(a%i==0 && b%i==0){
			x=i;
			i++;
		}else{i++;
		}
	}printf("Display %d",x);
}
