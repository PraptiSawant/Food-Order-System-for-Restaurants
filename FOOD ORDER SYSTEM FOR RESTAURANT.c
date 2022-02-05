#include<stdio.h>
void admin(void);
void cus(void);
void aboutus(void);
void vege(void);
void nonvege(void);
void addrec(void);
void viewrewc(void);
void otheritem(void);
void display(void);
struct employee
{	char name[30];
	int id;
	int YOJ;
	char place[20];
	long long int phone;
}e[1000];
FILE *fp,*fd,*fe;
void main()
{
	int choice;
	printf("                                 **************************************************************************\n");
	printf("                                                     WELCOME TO THE SILVER SPOON RESTAURANT \n");
	printf("                                 **************************************************************************\n\n\n");
	printf("    1. ADMINISTRATION SECTION\n\n    2. CUSTOMER SECTION\n\n    3. ABOUT US\n\n    4. EXIT\n\n\n    Enter Your Choice--->");
	scanf("%d",&choice);
	switch(choice)
	{case 1:
		admin();break;
		case 2:
			cus();break;
			case 3:
				aboutus();break;
				case 4:
		           printf("*********Feeling HUNGRY ? Call or Walk-In the silver spoon restaurant***************\n\n");
		}
}
void  admin(void)
{   int n;
    printf("                                 **************************************************************************\n");
	printf("                                                     WELCOME TO THE ADMINISTRATION SECTION\n");
	printf("                                 **************************************************************************\n\n\n");
	printf("    1. ADD THE RECORD OF THE EMPLOYEE\n\n    2. VIEW THE RECORDS OF THE EMPLOYEE\n\n    3. DISPLAY THE ORDERS PLACED BY THE CUSTOMER\n\n    4. BACK TO THE MAIN MENU\n\n\n    Enter Your Choice --->");
	scanf("%d",&n);
	switch(n)
	{case 1:
		addrec();break;
		case 2:
			viewrec();break;
			case 3:
				display();break;
				case 4:
				   main();break;
					}
}
void addrec(void)
{int n,i;
char c;
printf("\n     HOW MANY EMPLOYEES DETAILS YOU WANT ADD??:");
scanf("%d",&n);
printf("\n*****************************************ENTER THE DETAILS OF THE EMPLOYEE**********************************************\n\n");
for(i=1;i<=n;i++)
{  printf("    NAME:");
scanf("%s",e[i].name);
printf("    ID:");
scanf("%d",&e[i].id);
printf("    YEAR OF JOINING:");
scanf("%d",&e[i].YOJ);
printf("    PLACE:");
scanf("%s",e[i].place);
printf("    PHONE NUMBER:");
scanf("%lld",&e[i].phone);   }
fe=fopen("workers.txt","a");
for(i=1;i<=n;i++)
{fprintf(fe,"    %s          %d          %d          %s         %lld\n",e[i].name,e[i].id,e[i].YOJ,e[i].place,e[i].phone);}
fclose(fe);
}
void viewrec(void )
{char c; 
fe=fopen("workers.txt","r");
while((c=getc(fe))!=EOF)
{printf("%c",c);}
fclose(fe);
}
void display(void)
{char c; 
fp=fopen("order.txt","r");
while((c=getc(fp))!=EOF)
{printf("%c",c);}
fclose(fp);
}
void cus(void)
{printf("                    ************************************************\n                                      WELCOME\n                    ************************************************\n\n");
	printf("               YOU ARE--->\n\n     1. VEGETARIAN\n\n     2. NON VEGETARIAN\n\n     3. BEVERAGES,SWEET DISHES AND ICE CREAMS                      OR\n\n     4. BACK TO MAIN MENU\n\n   Enter Your Choice  -->");
	int k;
	scanf("%d",&k);
	switch(k)
	{case 1:
		vege();break;
		case 2:
			nonvege();break;
			case 3:
				otheritem();break;
				case 4:
				main();break;
	}   }
void vege(void)
{int ch,quantity,tot,n;
printf("                    ****************************************\n                                  VEGETARIAN MENU\n                    ****************************************\n\n");
	printf("      1. Burger               40/-\n      2. Noodles              60/-\n      3. Sandwich             45/-\n      4. Pav Bhaji           35/-\n      5. Veg. Thaali          150/-\n         -->Dal\n         -->Paneer\n         -->Chapati\n         -->Rice\n         -->Papad\n      6. Back To Main Menu\n");
	printf ("    How many items you want to order? ");
    scanf ("%d", &n);
    while(n--)
	{  printf("\n    Enter What You Want :");
	   scanf("%d",&ch);
	   FILE *fd;
	   fd = fopen("order.txt","a");
	switch(ch)
	{case 1:
		printf("    Quantity :  ");
		scanf("%d",&quantity);
		tot=tot + 40*(quantity);
		break;
		case 2:
		    printf("    Quantity :  ");
     	    scanf("%d",&quantity);
	    	tot=tot + 60*(quantity);
			break;
			case 3:
			    printf("    Quantity :  ");
		        scanf("%d",&quantity);
		        tot=tot + 45*(quantity);
		        break;	
		        case 4:
			        printf("    Quantity :  ");
		            scanf("%d",&quantity);
		            tot=tot + 35*(quantity);
		            break;
		            case 5:
			            printf("    Quantity :  ");
		                scanf("%d",&quantity);
	            	    tot=tot + 40*(quantity);
	            	    break;
	            	    default:
			                printf("    Wrong Input! Re-enter THe Correct Option\n\n");
		                    vege();
	}     fprintf(fd,"\nVEGETARIAN \nITEM CODE------>%d            QUANTITY------->%d\n",ch,quantity);
	fclose(fd);}
	printf ("\n    YOUR GRAND TOTAL IS %d/-.\n\n***************************************THANK YOU FOR ORDERING***********************************************\n\n ",tot);
	details();
}

void nonvege(void)
{int ch,quantity=0,total,again,tot,n;
printf("                                    **********************************************\n");
	printf("                                                  Non Veg. Menu\n");
	printf("                                    **********************************************\n");
     	printf("    1. Dry Chicken            100/-\n\n    2. Gravy Chicken          120/-\n\n    3. Chicken Biryani        85/-\n\n    4. Chicken Tandoor        75/-\n\n    5. Back To Main Menu\n\n");
    printf ("    How many items you want to order? ");
    scanf ("%d", &n);
    while(n--)
	{ printf("\n\n    Enter What You Want :");
      scanf("%d",&ch);
	  FILE *fd;
	  fd = fopen("order.txt","a");
	switch(ch)
	{case 1:
		printf("    Quantity :  ");
		scanf("%d",&quantity);
		tot=tot + 100*(quantity);
		break;
		case 2:
		   printf("    Quantity :  ");
		   scanf("%d",&quantity);
		   tot=tot + 120*(quantity);
		   break;
		   case 3:
		      printf("    Quantity :  ");
		      scanf("%d",&quantity);
		      tot=tot + 85*(quantity);
		      break;
		      case 4:
			     printf("    Quantity :  ");
		         scanf("%d",&quantity);
	           	 tot=tot + 75*(quantity);
		         break;
		         	case 5:
		   	           main();break;              
		default:
			printf("Wrong Input! Re-enter THe Correct Option\n\n");
		nonvege();
 	}   fprintf(fd,"\nNON VEGETARIAN \nITEM CODE------>%d            QUANTITY------->%d\n",ch,quantity);
	fclose(fd);  }
	printf ("\n    YOUR GRAND TOTAL IS %d/-.\n\n***************************************THANK YOU FOR ORDERING***********************************************\n\n ",tot);
	details();
}
void otheritem(void)
{{int ch,quantity,tot,n;
printf("                    **********************************************************\n                                  BEVERAGES/SWEET DISHES/ICE CREAM MENU\n                    **********************************************************\n\n");
	printf("      1. Soft drink              35/-\n      2. Tea                     20/-\n      3. Fruit beer              70/-\n      4. Gulab jamun             60/-\n      5. Ice cream               150/-\n         -->vanilla\n         -->chocolate\n         -->butterscotch\n         -->pista\n      6. Back To Main Menu\n");
	printf ("    How many items you want to order? ");
    scanf ("%d", &n);
    while(n--){printf("\n    Enter What You Want :");
	scanf("%d",&ch);
	FILE *fd;
	fd = fopen("order.txt","a");
	switch(ch)
	{case 1:
		printf("    Quantity :  ");
		scanf("%d",&quantity);
		tot=tot + 35*(quantity);
		break;
		case 2:
			printf("    Quantity :  ");
		    scanf("%d",&quantity);
		    tot=tot + 20*(quantity);
			break;
			case 3:
			    printf("    Quantity :  ");
		        scanf("%d",&quantity);
		        tot=tot + 70*(quantity);
		        break;
		        case 4:
			        printf("    Quantity :  ");
		            scanf("%d",&quantity);
		            tot=tot + 60*(quantity);
		            break;
		            case 5:
			            printf("    Quantity :  ");
		                scanf("%d",&quantity);
		                tot=tot + 150*(quantity);
		                break;
		                default:
			                printf("    Wrong Input! Re-enter THe Correct Option\n\n");
		                    otheritem();
	} fprintf(fd,"\nOTHER ITEM \nITEM CODE------>%d            QUANTITY------->%d\n",ch,quantity);
	fclose(fd);}printf ("\n    YOUR GRAND TOTAL IS %d/-.\n\n***************************************THANK YOU FOR ORDERING***********************************************\n\n ",tot);
	details();   }   }
	
void details(void)
{char name1[20];
char sur[20];
    long long int phone;
	char address[40];
	char landmark[30];
	printf("Please Give Your Contact Details \n");
	printf("    First Name : ");
	scanf("%s",name1);
	printf("    last Name : ");
	scanf("%s",sur);
	printf("    Phone    : ");
	scanf("%lld",&phone);
	printf("    Address   : ");
	scanf("%s",address);
	printf("    Landmark  : ");
	scanf("%s",landmark);
	printf("\n\n");
	FILE *fd;
	fd = fopen("order.txt","a");
	fprintf(fd,"Order Placed By : \n-->First Name :  %s\n-->Phone     :%lld \n-->Address  :%s \n-->Landmark  :%s \n**************************************************************************************************************************************\n",name1,phone,address,landmark);
	fclose(fd);
	printf("\n\n\n");
	printf("                       *********************************************************************************************\n");
	printf("                                             Your Order Will Be At Your Door In 30 minutes.\n");
	printf("                                                       .....HAPPY ORDERING.....\n");
	printf("                       *********************************************************************************************\n");
	}
void aboutus(void)
{printf("PEOPLE BEHIND THIS RESTAURANT:\n\n   -->Rohan Singh\n\n   -->Ashutosh Kumar\n\n   -->Naveen Prakash Satyarthi\n\n   -->Vishal Katiyar\n\n   -->Priyanshu Verma\n\n                       *****************************THANK YOU*****************************");
 }
