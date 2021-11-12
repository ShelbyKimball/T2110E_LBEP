#include <stdio.h>
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d",&n);
	
	int arr[n];
	int flag=0;
	for(int i=0; i<n; i++){
		printf("Enter number %d: ",i);
		scanf("%d",&arr[i]);
	} 
	int x=0;
	for(int j=n-1; j>=0; j--){
		if(arr[j]%2 == 0){
		x = arr[j];
		break;
		}
	} 
	if(x==0){
		printf("No EVEN number");
	}else{
		printf("%d is the last EVEN number of array",x);
	}
}
