#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	int Min;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			Min = arr[i];
		}
	}
	if(Min==0){
		printf("Mang khong co so duong");
	}else{
		for(int i=0; i<n; i++){
			if(arr[i]>0 && arr[i]<Min){
				m=arr[i];
			}
		}
		printf("So duong nho nhat: %d",Min);
	}
}
