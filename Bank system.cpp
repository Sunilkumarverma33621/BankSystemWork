#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int total=0,ch=0,id,temp;
char name[20];

void time()
{
	time_t t;
	time(&t);
	printf("Date/time=%s",ctime(&t));

}
void create_account()
{

	printf("Enter the id of Account holder : ");
	scanf("%s",&id);
	printf("Enter the name of Account holder : ");
	scanf("%s",&name);
	time();
	printf("\n");

}
void deposit()
{
	   int num;
	   printf("Enter the amount : ");
	   scanf("%d",&num);
	   printf("The amount is :%d \n",num);
	   total=total+num;
	   printf("Total is :%d\n",total);
	   time();
	   printf("\n");
}
void withdrawl()
{
	int val;
	if(total!=0)
	{
		printf("Balance is availble. :\n");
	    printf("Enter withdrawl money. :");
		scanf("%d",&val);
	    total=total-val;
		printf("Total is :%d\n",total);
		time();
		printf("\n");
	}
	else
	{
		printf("Balance is not availble.");
		printf("\n");
	}

}
void display()
{
	printf("Total amount is %d\n",total);

}


int main()
{
	printf("Welcome to sunil bank....\n");
    while(ch<6)
    {
        printf("1.Create_account\n2.Deposit\n3.Withdrawl\n4.Display\n5.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        	case 1:create_account();
        	break;
            case 2:deposit();
            break;
            case 3:withdrawl();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            break;
        }
    }
    return 0;
}
