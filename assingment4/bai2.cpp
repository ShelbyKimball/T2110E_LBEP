#include <stdio.h>
int main(){
	int n,S,count = 0,i = 1;
	printf("Nhap so so le muon tinh:");
	scanf("%d",&n);
	while (count<n){
		S += i;
		i = i + 2;
		count++;
	}
	printf(" Tong %d so le dau tien lon hon 0 la: %d",n,S);
}
