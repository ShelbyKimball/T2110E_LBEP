#include <stdio.h>
#include <math.h>
int KTSNT (int n){
	if(n<2) return false;
	if(n<4) return true;
	for(int i=2;i<=n/2; i++){
		if(n%i==0) return false;
	} 
	return true;
}
int SoNguyenToLonHon(int n){
	for(int i=n+1; true; i++){
		if(KTSNT(i)) return i;
	}
}
int tongcacchuso(int n){
	int S=0;
	for(; n%10!=0;){
		S += abs(n%10);
		n = n/10;
	}
	return S;
}

int chuvitamgiac(int a,int b,int c){
	if(a+b>c && b+c>a && a+c>b){
		return a+b+c;
	}else{
	return 0;
	}
}

float dientichtamgiac(int a,int b,int c){
	float p = (float)chuvitamgiac(a,b,c)/2;
	return (float)sqrt((p-a)*(p-b)*(p-c));
}

int UocChungLonNhat(int a,int b){
	int x=0;
	for(int i=1; i<=a && i<=b; i++){
		if(a%i==0 && b%i==0 && x<i){
			x = i;
		}
	}
	return x;
}

int BoiChungNhoNhat(int a,int b){
	int c = a*b,d=c;
	for(;c>=a && c>=b;c--){
		if(c%a==0 && c%b==0 && c<d){
			d = c;
		}
	} return d;
}

int main (){
	printf("so nguyen to lon hon 5: %d\n",SoNguyenToLonHon(5));
	printf("tong cac chu so cua 12345: %d\n",tongcacchuso(12345));
	printf("chu vi tam giac co 3 canh a=5,b=4,c=3: %d\n",chuvitamgiac(1,4,2));
	printf("dien tich tam giac co 3 canh a=5,b=4,c=3: %f\n",dientichtamgiac(5,4,3));
	printf("uoc chung lon nhat cua hai so 4 va 6 la: %d\n",UocChungLonNhat(4,6));
	printf("boi chung nho nhat cua hai so 8 va 18 la: %d\n",BoiChungNhoNhat(8,18));
}
