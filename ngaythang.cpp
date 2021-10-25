#include <stdio.h>
int main (){
	int A,B,a,b,c,d,e,f,g,h,i,j,k,l;
	printf("nhap ngay =");
	scanf("%d",&A);
	
	printf("nhap thang =");
	scanf("%d",&B);
	
	
	if (B==1){
		a = A;
		printf ("La ngay thu: %d",a);
	}else if (B==2){
		b = 31 + A;
		printf ("La ngay thu: %d",b);
	}else if(B==3){
		c = 31 + 28 + A;
		printf ("La ngay thu: %d",c);
	}else if(B==4){
		d = 31 + 28 + 31 + A;
		printf ("La ngay thu: %d",d);
	}else if(B==5){
		e = 31 + 28 + 31 + 30 + A;
		printf ("La ngay thu: %d",e);
	}else if(B==6){
		f = 31 + 28 + 31 + 30 + 31 + A;
		printf ("La ngay thu: %d",f);
	}else if(B==7){
		g = 31 + 28 + 31 + 30 + 31 + 30 + A;
		printf ("La ngay thu: %d",g);
	}else if(B==8){
		h = 31 + 28 + 31 + 30 + 31 + 30 + 31 + A;
		printf ("La ngay thu: %d",h);
	}else if(B==9){
		i = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + A;
		printf ("La ngay thu: %d",i);
	}else if(B==10){
		j = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + A;
		printf ("La ngay thu: %d",j);
	}else if(B==11){
		k = 31 + 28 + 31 + 30 + 31 + 31 + 31 + 30 + 31 + 30 +A;
		printf ("La ngay thu: %d",k);
	}else if(B==12){
		l = 31 + 28 + 31 + 30 + 31 + 31 + 31 + 30 + 31 + 30 + 31 + A;
		printf ("La ngay thu: %d",l);
	}else{ 
		printf ("khong phai thang trong nam");
	}
	
	switch (B){
		case 1: { 
		int thang1;
		thang1= a%7 + 1;
		printf ("thu: %d",thang1)
			;break;
		};
		case 2: { 
		int thang2;
		thang2= b%7 + 1;
		printf ("thu: %d",thang2)
			;break;
		};case 3: { 
		int thang3;
		thang3= c%7 + 1;
		printf ("thu: %d",thang3)
			;break;
		};case 4: { 
		int thang4;
		thang4= d%7 + 1;
		printf ("thu: %d",thang4)
			;break;
		};case 5: { 
		int thang5;
		thang5= e%7 + 1;
		printf ("thu: %d",thang5)
			;break;
		};case 6: { 
		int thang6;
		thang6= f%7 + 1;
		printf ("thu: %d",thang6)
			;break;
		};case 7: { 
		int thang7;
		thang7= g%7 + 1;
		printf ("thu: %d",thang7)
			;break;
		};case 8: { 
		int thang8;
		thang8= h%7 + 1;
		printf ("thu: %d",thang8)
			;break;
		};case 9: { 
		int thang9;
		thang9= i%7 + 1;
		printf ("thu: %d",thang9)
			;break;
		};case 10: { 
		int thang10;
		thang10= j%7 + 1;
		printf ("thu: %d",thang10)
			;break;
		};case 11: { 
		int thang11;
		thang11= k%7 + 1;
		printf ("thu: %d",thang11)
			;break;
		};case 12: { 
		int thang12;
		thang12= l%7 + 1;
		printf ("thu: %d",thang12)
			;break;
		};
		default: printf("khong phai thang trong nam");
	}
}
	
	
