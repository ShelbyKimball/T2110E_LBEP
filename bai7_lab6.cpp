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
	int S = 0, max = 0;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			S += arr[i];
			if(S > max){
				max = S;
			}
		}else{
			S = 0;
		}
	}	
	printf("chuoi so duong co tong lon nhat la: %d",max);
}
