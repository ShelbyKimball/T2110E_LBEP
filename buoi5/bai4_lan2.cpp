#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	
	int i=1,count=0,x=0;
	for(x=0; x<n; x++){
		printf("%d",x);
		for(i=1,count=0; i<=x;){
			if(x%i==0){
				count++;
				i++;
			}else{ i++;}
		} if(count==2){
			printf(" la so nguyen to\n",x);
		}else{
			printf(" khong phai so nguyen to\n",x);
		}
	}
}
