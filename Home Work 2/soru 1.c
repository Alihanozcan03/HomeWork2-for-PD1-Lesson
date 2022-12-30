#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// kenar uzunluklarý girilen dikdörtgenin çevresini ve alanýný hesaplayan kod //

int a, b, c, d;
	
	printf("Enter the width of rectangle: ");
	scanf("%d",&a);
	
	printf("Enter the length of rectangle: ");
	scanf("%d",&b);
	
	c=a*b;
	d=a+b;
	d=d*2;
	
	printf("The area of the rectangle is %d\n",c);
	printf("The primeter of the rectangle is %d",d);



	return 0;
}
