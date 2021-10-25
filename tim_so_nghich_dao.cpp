#include <stdio.h>
int main (){
	int a;
	printf("Nhap a =");
	scanf("%d,&a");
	
	int b;
	b=0;
	b=(b*10)+(a%10);
	a=a/10;
	
	if (a != 0){
		b=(b*10)+(a%10);
		a=a/10;
		if(a!=0){
			b=(b*10)+(a%10);
			a=a/10;
			if(a!=0){
				b=(b*10)+(a%10);
				a=a/10;
				printf ("b = %d",b);
			}else{
				printf ("b = %d",b);
			}
		}else{
			printf ("b = %d",b);
		}
	}else{
		printf ("b = %d",b);
	}
}
