#include <stdio.h>
#include<stdlib.h>
 
 void draw();
 void deposits();
 void transfer();
 
 
//unsigned long amount=1000000, deposit, withdraw;//initial balance be 1000000.
int choice, pin, k;
char transaction ='y';
struct user{
 	unsigned long amount;
 	unsigned long deposit;
 	unsigned long withdraw;
};
 //ask user to enter pin 
struct user u;

//u.amount = 1000000;

int main()
{
	while (pin != 1111)
	{
		printf("ENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 1111)//initial pin be 1111
		printf("*****************INCORRECT INCORRECT************ \n\n***************** PLEASE ENTER VALID PASSWORD***************\n");
		//system("cls");
	}
	do
	{
		system("cls");
	printf("\t\t=================================================\n");
    	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           WELCOME TO OUR CP ATM SERVICE       |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                     		                |\n");
	printf("\t\t|           					|\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
		printf("-----Please select the required choice----- \n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("*********************************************\n*********************************************\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		system("cls");
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IN Rs -: %lu ", u.amount);
			break;    
		case 2:
			draw();

			break;
		case 3:
			deposits();
			break;
		//case 4;
			transfer();
		case 4:
			printf("\n******************************* THANK YOU FOR USING ATM******************************");
			break;
		default:
			printf("\n ***********************INVALID CHOICE********************************\n");
			printf("**********************please enter the valid choice*****************");
		}
	//	switch(another_choice )
	//	{
	  
	//		c 
	//type of account
	//	char type;
	//	printf("enter the type of your account \n");
	//	printf("1 : saving \n    current \n  fix_account \n");
	//	scanf("%c",&type);
	//	if(type= 1 ){
	//	printf("your  account type is %c",type);  
	//	}
		
		printf("\n\n\n  DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		  
		
		fflush(stdin);
		scanf("%c", &transaction);
		
        system("cls");
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
        system("cls");
	} while (!k);
	printf("\n\n**** THANK YOU FOR USING OUR ATM SERVICE ****");
	
	return 0;
}

void draw()
{
	printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
	scanf("%lu", &u.withdraw);
	if (u.withdraw % 100 != 0)
	{
		printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100 \n");
		printf("**********************you can withdraw amount in multiples of 100 only *****************");
	}
	//there must be at lest 500 in account as minimum balance 
	else if (u.withdraw >(u.amount - 500))
	{
		printf("\n**************************** INSUFFICENT BALANCE***************************");
		printf("Account must hold minimum balance of 500\n");
	}
	
	else
	{
		u.amount = u.amount - u.withdraw;
		printf("\n\n **********************PLEASE COLLECT CASH BELOW***************************** \n");
		
		printf("\n YOUR NEW BALANCE IS - %lu", u.amount);
	}
}


void deposits()
{
		printf("\nPLEASE  ENTER THE AMOUNT YOU WANT TO DEPOSIT --");
	 	scanf("%lu", &u.deposit);
        u.amount = u.amount + u.deposit;
		printf("YOUR NEW BALANCE IS - %lu", u.amount);
}

