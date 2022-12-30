int main() {
	int a, b, c, t=1, i;
	printf("Enter two numbers for the find their LCM:\n");
	scanf("%d %d",&a,&b);
	if (a>=b){
	c=a;
	}else{c=b;}
	for (i=1;i<=c;i++){
		if (a%i==0 && b%i==0){
			t=t*i;
		}
	}
	printf("The LCM of this number is %d",t);
}
/* girilen iki sayýnýn EKOK nunu hesaplayan kod */
