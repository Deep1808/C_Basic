#include<stdio.h>
#include<stdlib.h>

void withdraw_csh(int);
void deposit_csh(int);

void main()
{
int acc_no[5]={0,1,2,3,4};
int acc_pin[5]={0000,1111,2222,3333,4444};
int amt=100000;
int p,a,x,try=3;
char ch;
b1: printf("Enter Account Number and PIN number:");
scanf("%d %d",&a,&p);

if(p != acc_pin[a])
{
	printf("INCORECT PIN !!\n");
	try--;
	if(try==0){
	printf("CARD BLOCKED ");
	}else{
	goto b1;
}	
}else{
printf("You may procced for furthur Transaction and choose an option from below :");
r1: printf("\b\nMENU ");
printf("\nCHECK BALANCE :Press 1\nWITHDRAW CASH :Press 2\nDEPOSIT CASH :Press 3\n TO EXIT :Press 0\n\nENTER YOUR CHOICE :");
scanf("%d",&x);
switch (x)
{
	case 1:
	printf("\nYour current BALANCE : %d",amt);
	break;
	
	case 2:
	withdraw_csh(amt);
	break;

	case 3:
	deposit_csh(amt);
	break;

	case 0:
	printf("\nThank YOU !!!");
	break;

	default:
	printf("\nInvalid INPUT ");
	break;
}
}
printf("\nDo you want to DO any other transaction ?\nPress Y for YES and N for NO");
scanf("%c", &ch);
printf("%c",ch);
if(ch =='Y' || ch =='y')
{
	goto r1;
}else
{
printf("\nThank You for banking with US.......HAVE A NICE DAY");
}
}

void withdraw_csh(int a)
{
int w_amt;
printf("\nEnter Amount you want to withdraw :");
	scanf("%d",&w_amt);
	if(w_amt<a)
	{
		a=a-w_amt;
		printf("\nWithdrawn Amount: %d\nYour BALANCE left: %d",w_amt,a);
	}else{printf("\nInsufficeint MONEY !!! \nCannot withdraw");
	}
}

void deposit_csh(int a)
{
	int d_amt;
	printf("\nEnter Amount you want to deposit :");
	scanf("%d",&d_amt);
	a=a + d_amt;
	printf("\nDeposited Amount: %d\nYour BALANCE left: %d",d_amt,a);
}

