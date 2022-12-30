#include <math.h>
int main(){
	
	int a, b, c, d, t;
	
	printf("Enter a number to check whether a number is Armstrong number or not\n");
	scanf("%d",&a);
	c=a;
	d=a;
	int basamak=0;
	while (d>0)
	{
		d=d/10;
		basamak++;
	}
	
	while (c>0){
	b=c%10;
	t=t+pow(b,basamak);
	c=c/10;
	}
	if (a==t){printf("Your number is a Armstrong number ");
	}else {printf("Your number is not a Armstrong number ");
	}
}

/* girilen sayýnýn armstrong sayýsý olup olmadýðýný kontrol eder */
