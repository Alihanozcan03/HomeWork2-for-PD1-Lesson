int main() {
	int a, n, i, c, t=2;
	printf("Enter a last number greater than 1: ");
	scanf("%d",&n);
	for (i=3;i<=n;i++){
		c=0;
		for (a=2;a<i;a++){
			if(i%a==0){c++;
			}
		}
		if (c==0){
		t=t+a;
		}
	}
	printf("Sum of all prime numbers between 1 to n is %d",t);
}

/* 1^den n'e kadar olan asal sayıların toplamını hesaplayan kod */
