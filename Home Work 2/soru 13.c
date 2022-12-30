int main(){
	int a, t=0, b, c, i, d;
	printf("Enter a number: ");
	scanf("%d",&a);
	d=a;
	
	while (a>0){
		b=a%10;
		c=1;
		for (i=1;i<=b;i++){
			c=c*i;
		}
		a=a/10;
		t=t+c;
	}
	
	if (t==d){printf("%d is a strong number ",d);
	}
	else {printf("%d is not a strong number ",d);
	}
	
}

/* girilen sayýnýn güçlü sayý olup olmadýðýný kontrol eden kod */
