#include <stdio.h>
int main (){
	int A,B,a,b,c,d,e,f,g,h,i,j,k,l;
	printf("nhap ngay =");
	scanf("%d",&A);
	
	printf("nhap thang =");
	scanf("%d",&B);
	
	if(B>0 && B<=12){
		if (B==1){
			if(A>0 && A<=31){
			a = A;
			printf ("La ngay thu: %d\n",a);
			}else{printf("Error\n");}
		}else if (B==2){
			if(A>0 && A<=28){
			b = 31 + A;
			printf ("La ngay thu: %d",b);
			}else{printf("Error\n");}
		}else if(B==3){
			if(A>0 && A<=31){
			c = 31 + 28 + A;
			printf ("La ngay thu: %d",c);
			}else{printf("Error\n");}
		}else if(B==4){
			if(A>0 && A<=30){
			d = 31 + 28 + 31 + A;
			printf ("La ngay thu: %d",d);
			}else{printf("Error\n");}
		}else if(B==5){
			if(A>0 && A<=31){
			e = 31 + 28 + 31 + 30 + A;
			printf ("La ngay thu: %d",e);
			}else{printf("Error\n");}
		}else if(B==6){
			if(A>0 && A<=30){
			f = 31 + 28 + 31 + 30 + 31 + A;
			printf ("La ngay thu: %d",f);
			}else{printf("Error\n");}
		}else if(B==7){
			if(A>0 && A<=31){
			g = 31 + 28 + 31 + 30 + 31 + 30 + A;
			printf ("La ngay thu: %d",g);
			}else{printf("Error\n");}
		}else if(B==8){
			if(A>0 && A<=31){
			h = 31 + 28 + 31 + 30 + 31 + 30 + 31 + A;
			printf ("La ngay thu: %d",h);
			}else{printf("Error\n");}
		}else if(B==9){
			if(A>0 && A<=30){
			i = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + A;
			printf ("La ngay thu: %d",i);
			}else{printf("Error\n");}
		}else if(B==10){
			if(A>0 && A<=31){
			j = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + A;
			printf ("La ngay thu: %d",j);
			}else{printf("Error\n");}
		}else if(B==11){
			if(A>0 && A<=30){
			k = 31 + 28 + 31 + 30 + 31 + 31 + 31 + 31 + 30 + 31 + A;
			printf ("La ngay thu: %d",k);
			}else{printf("Error\n");}
		}else if(B==12){
			if(A>0 && A<=31){
			l = 31 + 28 + 31 + 30 + 31 + 31 + 31 + 31 + 30 + 31 + 30 + A;
			printf ("La ngay thu: %d",l);
			}else{printf("Error\n");}
		}else{ 
			printf ("khong phai thang trong nam");
		}
		
		switch (B){
			case 1: { if(A>0 && A<=31){if(a%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",a%7 + 1);}}else{printf("");}
				;break;
			};
			case 2: { if(A>0 && A<=31){if(b%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",b%7 + 1);}}else{printf("");}
				;break;
			};
			case 3: { if(A>0 && A<=31){if(c%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",c%7 + 1);}}else{printf("");}
				;break;
			};
			case 4: { if(A>0 && A<=31){if(d%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",d%7 + 1);}}else{printf("");}
				;break;
			};
			case 5: { if(A>0 && A<=31){if(e%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",e%7 + 1);}}else{printf("");}
				;break;
			};
			case 6: { if(A>0 && A<=31){if(f%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",f%7 + 1);}}else{printf("");}
				;break;
			};
			case 7: { if(A>0 && A<=31){if(g%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",g%7 + 1);}}else{printf("");}
				;break;
			};
			case 8: { if(A>0 && A<=31){if(h%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",h%7 + 1);}}else{printf("");}
				;break;
			};
			case 9: { if(A>0 && A<=31){if(i%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",i%7 + 1);}}else{printf("");}
				;break;
			};
			case 10: { if(A>0 && A<=31){if(j%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",j%7 + 1);}}else{printf("");}
				;break;
			};
			case 11: { if(A>0 && A<=31){if(k%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",k%7 + 1);}}else{printf("");}
				;break;
			};
			case 12: { if(A>0 && A<=31){if(l%7==0){
				printf("thu: Chu Nhat\n");
			}else{
			printf ("thu: %d\n",l%7 + 1);}}else{printf("");}
				;break;
			};
			default: printf("");
		}
	}else{printf("Error");
	}
}
	
	
