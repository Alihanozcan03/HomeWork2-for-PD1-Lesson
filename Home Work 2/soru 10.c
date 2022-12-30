#include <math.h>
int main(){
	
	int a, b, c, d, t, n, basamak;
	
	printf("Enter a last number: ");
	scanf("%d",&n);
	for (a=1;a<=n;a++){
	t=0;	
	c=a;
	d=a;
	basamak=0;
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
	if (a==t){
	printf("%d\n",a);
	}else{} 
	}
}

/* 1 ile n arasýndaki armstrong sayýlarýný yazdýran kod */
