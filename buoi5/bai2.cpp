#include <stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int S=0,i=1;
//	while(i<=n){
//		if(n%i==0){
//			S += i;
//			i++;
//		}
//	}
//printf("tong cac uoc cua n la: %d",S);}
	for(i,S;i<=n;i++){
		if(n%i==0){
			S += i;
		}
	printf("tong cac uoc cua n la: %d",S);}
}
