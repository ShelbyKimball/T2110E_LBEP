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
	int sole = 0;
	for(int i=n-1; i<n; i--){
		if(arr[i]%2!=0){
		sole = arr[i];
		break;
		}
	}if(sole!=0){
		printf("so le cuoi cung: %d",sole);
	}else{
		printf("Mang ko co so le nao ca");
	}	
}
