#include <stdio.h>
int main (){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);

	int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap so x can tim trong mang = ");
	scanf("%d",&x);
	
	int i=0; //su dung bien dem de kiem tra
	for(; i<n; i++){
		if(x==arr[i]){
			printf("%d thuoc mang",x);
			break;
		}
	}if(i>=n){
		printf("%d khong thuoc mang",x);
	}	
}
