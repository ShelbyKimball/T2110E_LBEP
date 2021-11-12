#include <stdio.h>
float Average(int arr[],int n){
	int S = 0;
	for(int i=0; i<n; i++){
		S += arr[i];
	}
	return (float)S/n;
}
	
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Enter number %d: ",i);
		scanf("%d",&arr[i]);
	} 
	printf("Average = %f",Average(arr,n));
}
