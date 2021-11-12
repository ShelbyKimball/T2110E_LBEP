#include <stdio.h>
int main (){
		int n,S=0;
		printf("Nhap so n = ");
		scanf("%d",&n);
		
		int arr[n];
		for(int i=0; i<n; i++){
			printf("Nhap so thu %d: ",i);
			scanf("%d",&arr[i]);
			if(i%2!=0){
			S += arr[i];
		}
		}
		printf("Trung binh cong: %f\n",(float)S/n);
}
