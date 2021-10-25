#include <stdio.h>
#include <math.h>
int main (){
int a;
	printf ("Nhap so tien gui = ");
	scanf ("%d",&a);
	
int n;
	printf ("so nam = ");
	scanf ("%d",&n);
	
	a = a * pow(1.08,n);
	printf ("a = %d",a);
}
