#include <math.h>
#include <stdio.h>
int main(){
	
// kat sayýlarý girilen bir 2. dereceden denklemin köklerini bulan kod //
	
	int a, b, c;
	float x1, x2;
	
	printf("Enter the values in the equation:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
	x2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
	
	printf("%f %f",x1,x2);
	
}
