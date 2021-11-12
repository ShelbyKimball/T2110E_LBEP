#include <stdio.h>
int main (){
		int n;
		printf("Nhap so n = ");
		scanf("%d",&n);
		
		int arr[n],S=0,count=0;
		for(int i=0; i<n; i++){
			printf("Nhap so thu %d: ",i);
			scanf("%d",&arr[i]);
			if(arr[i]%2!=0 && i%2==0){
				S += arr[i];
				count++;
			}
		}
		if(count>0){
		printf("Trung binh cong: %f\n",(float)S/n);
	}else{
		printf("Khong co so le o vi tri chan nao ca");
	}
}
