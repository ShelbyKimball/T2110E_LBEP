#include <stdio.h>
int main(){
	int menu,out=0,total=0;
	do{
		printf("MENU\n");
		printf("1. Chon mon an\n");
		printf("2. Chon do uong\n");
		printf("3. Thanh toan\n");
		printf("4. Thoat\n");
		scanf("%d",&menu);
		int comga,pho,bun,coca,milo,trasua;
		switch(menu){
			case 1:{
				int food,back=0;
				while(back==0){
					printf("1. Com ga 50k\n");
					printf("2. Pho 40k\n");
					printf("3. Bun 30k\n");
					scanf("%d",&food);
					switch(food){
						case 1: {
								do{
								printf("Nhap so luong: ");
								scanf("%d",&comga);}while(comga<0);
								total += 50*comga;
								back = 1;
							break;
						}
						case 2: {
								printf("Nhap so luong: ");
								scanf("%d",&pho);
								total += 40*pho;
								back = 1;
							break;
						}
						case 3: {
								printf("Nhap so luong:");
								scanf("%d",&bun);
								total += 30*bun;
								back = 1;
							break;
						}
						default: printf("Vui long chon mon an\n");
					}
				}
				break;
			} 
			case 2:{
				int drink,back=0;
				while(back==0){
					printf("1. coca 10k\n");
					printf("2. Milo 20k\n");
					printf("3. Tra sua 50k\n");
					scanf("%d",&drink);
					switch(drink){
					case 1: {
						printf("Nhap so luong: ");
						scanf("%d",&coca);
						total += 10*coca;
						back =1;
						break;
					}
					case 2: {
						printf("Nhap so luong: ");
						scanf("%d",&milo);
						total += 20*milo;
						back = 1;
						break;
					}
					case 3: {
						printf("Nhap so luong: ");
						scanf("%d",&trasua);
						total += 50*trasua;
						back = 1;
						break;
					}
					default: 
						printf("Vui long chon do uong\n");
					} 
				}
				break;
			}
			case 3:{
				printf("Tong hoa don: %d VND",total);
				out = 1;
				break;
			} 
			case 4:{
				if(total == 0){
					printf("Tam biet quy khach");
					out = 1;
				}else{
					printf("vui long thanh toan truoc khi ra ve");
				}
				break;
			}
		}
	}while(out==0);
}
