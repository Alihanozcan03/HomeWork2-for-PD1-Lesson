int main(){
	int n, t, i, j;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		t=0;
	   for (i=1;i<j;i++){
		    if (j%i==0){
			    t=t+i;
		    }else{}
	    }
	    if (t==j){
		printf("%d\n",j);
	}
    }
    
}
/* 1 den girilen n sayýsýna kadar olan mükemmel sayýlarý yazdýran kod */
