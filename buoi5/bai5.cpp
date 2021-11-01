#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so a = ");
	scanf("%d",&a);
	
	printf("Nhap so b = ");
	scanf("%d",&b);
	
	int i=1,count=0,x=0;
	for(x=a; x>=a && x<=b && a<b; x++){
		printf("%d",x);
		for(i=1,count=0; i<=x;){
			if(x%i==0){
				count++;
				i++;
			}else{i++;}
		} if(count==2){
			printf(" la so nguyen to\n",x);
		}else{
			printf(" khong phai so nguyen to\n",x);
		}
	} printf("Error");
}
