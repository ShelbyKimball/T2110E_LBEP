#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	int i;
	for(i=2;i<=n;i+=2){
		printf("cac so chan be hon %d la %d:\n",n,i);
	}
}
