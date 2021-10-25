#include <stdio.h>
int main (){
	int a,b;
	printf("nhap A =");
	scanf("%d",&a);
	
	printf("nhap B =");
	scanf("%d",&b);
	
	if(a>=b){
		float c;
		c = a/b;
		printf("ket qua = %d",&c);
	}else{
		int d;
		d = a * b;
		printf("ket qua = %d",d);
	}
}
	
