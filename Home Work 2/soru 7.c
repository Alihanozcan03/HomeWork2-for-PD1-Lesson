int main() {
	int a, n, i, c;
	printf("Enter a last number greater than 1: ");
	scanf("%d",&n);
	printf("2\n");
	for (i=3;i<=n;i++){
		c=0;
		for (a=2;a<i;a++){
			if(i%a==0){c++;
			}
		}
		if (c==0){
		printf("%d\n",a);
		}
	}
}

/* 1'den n'e kadar olan asal sayıları yazdıran kod */
