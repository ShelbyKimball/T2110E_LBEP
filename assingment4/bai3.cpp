#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,A,B,C;
	printf("Nhap canh thu 1:");
	scanf("%d",&a);
	
	printf("Nhap canh thu 2:");
	scanf("%d",&b);
	
	printf("Nhap canh thu 3:");
	scanf("%d",&c);
	
	while (a+b<c || b+c<a || c+a<b){
		printf("Nhap lai canh thu 1:");
		scanf("%d",&a);
		
		printf("Nhap lai canh thu 2:");
		scanf("%d",&b);
		
		printf("Nhap lai canh thu 3:");
		scanf("%d",&c);
	}
	int P,p;
	P = a + b + c;
	p = P/2;
	float S;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf(" Chu vi va dien tich tam giac la: %d va %f",P,S);
}
