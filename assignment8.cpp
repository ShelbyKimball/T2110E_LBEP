#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i; i<n; i++){
		printf("Nhap so thu %d = ",i);
		scanf("%d",&arr[i]);
		if(i>0){
			for(int j=1; j<=i; j++){
				int k = j-1;
				int temp = arr[j];
				for(; k>=0 && arr[k]>temp; k--){
					arr[k+1] = arr[k];
				}
				arr[k+1] = temp;
			}
		}
	}
		printf("Mang can tim la:\n");
		for(int i; i<n; i++){
		printf("%d\t",arr[i]);
		}
}
