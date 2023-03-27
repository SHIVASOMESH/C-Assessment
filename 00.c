#include<stdio.h>
#include<conio.h>

int main()
{
	int total=0;
	char ch1;
	printf("\t\t\t\t\t\tWelcome to Tops Restaurant");
	do{
		int in,add,a,b,c,d;
		printf("\n\n====================   This is Menu Items   ====================\n");
		
		printf("\n\t\t1.Pizza       price = 180rs/pcsf");
		printf("\n\t\t2.Burger      price = 100rs/pcs");
		printf("\n\t\t3.Dosa        price = 120rs/pcs");
		printf("\n\t\t4.Idli        price = 50rs/pcs");
		
		printf("\n\n======================================================================\n\n");
		
		printf("Please Enter your choose :");
		scanf("%d",&in);
		if(in==1){
			printf("\nYou have selected  pizza.");
			printf("\n\nEnter the quantity :");
			scanf("%d",&a);
			add=180*a;
			total=add+total;
			printf("Amount : %d",add);
			printf("\n\n Total Amount is: %d",total);
		}
		else if(in==2){
			printf("\n\nYou have selected  Burger.");
			printf("\n\nEnter the quantity :");
			scanf("%d",&b);
			add=100*b;
			total=add+total;
			printf("Amount : %d",add);
			printf("\n\n Total Amount is: %d",total);
		}
		else if(in==3){
			printf("\n\nYou have selected  Dosa.");
			printf("\n\nEnter the quantity :");
			scanf("%d",&c);
			add=120*c;
			total=add+total;
			printf("Amount : %d",add);
			printf("\n\n Total Amount is: %d",total);
		}
		else if(in==4){
			printf("\n\nYou have selected  Burger.");
			printf("\n\nEnter the quantity :");
			scanf("%d",&d);
			add=50*d;
			total=add+total;
			printf("Amount : %d",add);
			printf("\n\n Total Amount is: %d",total);
		}
		else{
			printf("Wroung Input");
		}
		printf("\n\nDo you want place more order? (y/n) :");
		scanf("\n%c",&ch1);
	}while(ch1=='y');
	printf("\n\nTotal bill is: %d",total);
	
	
	return 0;
}
