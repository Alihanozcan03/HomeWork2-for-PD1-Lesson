int main(){
	int a, t=0, i;
	printf("Enter a number: ");
	scanf("%d",&a);
	for (i=1;i<a;i++){
		if (a%i==0){
			t=t+i;
		}else{}
	}
	if(t==a){printf("%d is a perfect number.",a);
	}else{printf("%d is not a perfect number. ",a);
	}
}
/* girilen sayýnýn mükemmel sayý olup olmadýðýný kontrol eden kod */
